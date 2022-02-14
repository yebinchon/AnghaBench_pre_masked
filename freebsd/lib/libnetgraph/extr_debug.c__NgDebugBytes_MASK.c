
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int const) ;
 int FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (char*) ;

void
FUNC_4(const u_char *VAR_1, int VAR_2)
{
 char VAR_3[100];
 int VAR_4, VAR_5;



 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_1 += 16, VAR_5 += 16) {


  FUNC_2(VAR_3, sizeof(VAR_3), "%04x:  ", VAR_5);
  for (VAR_4 = 0; VAR_4 < 16; VAR_4++, VAR_5++)
   if (VAR_5 < VAR_2)
    FUNC_2(VAR_3 + FUNC_3(VAR_3),
        sizeof(VAR_3) - FUNC_3(VAR_3), "%02x ", VAR_1[VAR_4]);
   else
    FUNC_2(VAR_3 + FUNC_3(VAR_3),
        sizeof(VAR_3) - FUNC_3(VAR_3), "   ");
  FUNC_2(VAR_3 + FUNC_3(VAR_3), sizeof(VAR_3) - FUNC_3(VAR_3), "  ");
  VAR_5 -= 16;


  for (VAR_4 = 0; VAR_4 < 16; VAR_4++, VAR_5++)
   if (VAR_5 < VAR_2)
    FUNC_2(VAR_3 + FUNC_3(VAR_3),
        sizeof(VAR_3) - FUNC_3(VAR_3),
        "%c", FUNC_1(VAR_1[VAR_4]) ? VAR_1[VAR_4] : '.');
   else
    FUNC_2(VAR_3 + FUNC_3(VAR_3),
        sizeof(VAR_3) - FUNC_3(VAR_3), "  ");
  VAR_5 -= 16;


  FUNC_0("%s", VAR_3);
 }
}
