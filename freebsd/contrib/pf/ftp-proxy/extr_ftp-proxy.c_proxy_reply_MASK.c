
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u_int ;
struct sockaddr {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int,char*,...) ;
 char* FUNC_2 (struct sockaddr*) ;

void
FUNC_3(int VAR_5, struct sockaddr *VAR_6, u_int16_t VAR_7)
{
 u_int VAR_8;
 int VAR_9 = 0;

 switch (VAR_5) {
 case 128:
  VAR_9 = FUNC_1(VAR_3, sizeof VAR_3,
      "PORT %s,%u,%u\r\n", FUNC_2(VAR_6), VAR_7 / 256,
      VAR_7 % 256);
  break;
 case 129:
  VAR_9 = FUNC_1(VAR_3, sizeof VAR_3,
      "227 Entering Passive Mode (%s,%u,%u)\r\n", FUNC_2(VAR_6),
          VAR_7 / 256, VAR_7 % 256);
  break;
 case 131:
  if (VAR_6->sa_family == VAR_0)
   VAR_9 = FUNC_1(VAR_3, sizeof VAR_3,
       "EPRT |1|%s|%u|\r\n", FUNC_2(VAR_6), VAR_7);
  else if (VAR_6->sa_family == VAR_1)
   VAR_9 = FUNC_1(VAR_3, sizeof VAR_3,
       "EPRT |2|%s|%u|\r\n", FUNC_2(VAR_6), VAR_7);
  break;
 case 130:
  VAR_9 = FUNC_1(VAR_3, sizeof VAR_3,
      "229 Entering Extended Passive Mode (|||%u|)\r\n", VAR_7);
  break;
 }

 if (VAR_9 < 0 || ((u_int)VAR_9) >= sizeof VAR_3) {
  FUNC_0(VAR_2, "proxy_reply failed: %d", VAR_9);
  VAR_3[0] = '\0';
  VAR_4 = 0;
  return;
 }
 VAR_4 = (size_t)VAR_9;

 if (VAR_5 == 128 || VAR_5 == 129) {

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
   if (VAR_3[VAR_8] == '.')
    VAR_3[VAR_8] = ',';
 }
}
