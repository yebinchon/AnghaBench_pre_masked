
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_char ;
typedef int tags ;
struct in_addr {char s_addr; } ;
struct dhcp_opt {scalar_t__ tag; int fmt; char* desc; } ;
typedef int buf ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*,char*,unsigned int) ;
 struct dhcp_opt* VAR_2 ;
 char* FUNC_1 (struct in_addr) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,scalar_t__,...) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;
 struct dhcp_opt* VAR_3 ;

__attribute__((used)) static void
FUNC_6(u_char *VAR_4, u_char *VAR_5, struct dhcp_opt *VAR_6)
{
    u_char *VAR_7;
    u_char VAR_8;
    char VAR_9[512], *VAR_10;


    VAR_7 = VAR_4;
    VAR_10 = VAR_9;
    if (VAR_6 == ((void*)0))
 VAR_6 = VAR_2;

    while (VAR_7 < VAR_5) {
 unsigned int VAR_11;
 char *VAR_12, *VAR_13, VAR_14[256];
 struct dhcp_opt *VAR_15;

 VAR_8 = *VAR_7++;
 VAR_11 = *VAR_7++;
 VAR_4 = VAR_7;
 VAR_7 += VAR_11;

 if (VAR_8 == VAR_1)
     break;
 if (VAR_8 == 0)
     continue;

 for (VAR_15 = VAR_6+1; VAR_15->tag && VAR_15->tag != VAR_8; VAR_15++)
  ;
 VAR_12 = VAR_14;
 *VAR_12 = '\0';
 VAR_13 = VAR_14 + sizeof(VAR_14) - 1 - 16;

 switch(VAR_15->fmt) {
 case 130:
     break;

 case 128:
     FUNC_6(VAR_4, VAR_4+VAR_11, VAR_3);
     break;

 case 131:
     for (; VAR_11 > 0 && VAR_12 < VAR_13; VAR_11 -= 4, VAR_4 += 4) {
  struct in_addr VAR_16;
  if (VAR_12 != VAR_14)
      *VAR_12++ = ',';
  FUNC_0(VAR_4, &VAR_16.s_addr, sizeof(VAR_16.s_addr));
  FUNC_3(VAR_12, "%s", FUNC_1(VAR_16));
  VAR_12 += FUNC_5(VAR_12);
     }
     break;

 case 134:
     for (; VAR_11 > 0 && VAR_12 < VAR_13; VAR_11 -= 1, VAR_4 += 1) {
  FUNC_3(VAR_12, "%02x", *VAR_4);
  VAR_12 += FUNC_5(VAR_12);
     }
     break;

 case 129:
     FUNC_0(VAR_4, VAR_14, VAR_11);
     VAR_14[VAR_11] = 0;
     break;

 case 136:
 case 137:
 case 135:
     for (; VAR_11 > 0 && VAR_12 < VAR_13; VAR_11 -= VAR_15->fmt, VAR_4 += VAR_15->fmt) {
  uint32_t VAR_17;
  if (VAR_15->fmt == 136)
   VAR_17 = (VAR_4[0]<<24) + (VAR_4[1]<<16) + (VAR_4[2]<<8) + VAR_4[3];
  else if (VAR_15->fmt == 137)
   VAR_17 = (VAR_4[0]<<8) + VAR_4[1];
  else
   VAR_17 = VAR_4[0];
  if (VAR_12 != VAR_14)
      *VAR_12++ = ',';
  FUNC_3(VAR_12, "%u", VAR_17);
  VAR_12 += FUNC_5(VAR_12);
     }
     break;

 case 132:
 case 133:
     FUNC_0(VAR_4, VAR_14, VAR_11);
     VAR_14[VAR_11] = '\0';
     for (VAR_13 = VAR_14; VAR_13; VAR_13 = VAR_12) {
  char *VAR_18 = ((void*)0);


  while (*VAR_13 && FUNC_4(" \t\n\r", *VAR_13))
      VAR_13++;
  VAR_12 = FUNC_4(VAR_13, '=');
  if (!VAR_12)
      break;
  *VAR_12++ = 0;
  if (VAR_15->fmt == 133 && (VAR_18 = FUNC_4(VAR_12, ';')))
      *VAR_18++ = '\0';
  FUNC_2(VAR_13, VAR_12, 1);
  VAR_12 = VAR_18;
     }
     VAR_14[0] = '\0';
 }

 if (VAR_10 - VAR_9 < sizeof(VAR_9) - 5) {
     if (VAR_10 != VAR_9)
  *VAR_10++ = ',';
     FUNC_3(VAR_10, "%d", VAR_8);
     VAR_10 += FUNC_5(VAR_10);
 }
 if (VAR_14[0]) {
     char VAR_19[128];

     if (VAR_15->tag == 0)
  FUNC_3(VAR_19, VAR_15->desc, VAR_6[0].desc, VAR_8);
     else
  FUNC_3(VAR_19, "%s%s", VAR_6[0].desc, VAR_15->desc);




     FUNC_2(VAR_19, VAR_14, 0);
 }
    }
    if (VAR_10 != VAR_9) {
 char VAR_20[128];
 FUNC_3(VAR_20, "%stags", VAR_6[0].desc);
 FUNC_2(VAR_20, VAR_9, 1);
    }
}
