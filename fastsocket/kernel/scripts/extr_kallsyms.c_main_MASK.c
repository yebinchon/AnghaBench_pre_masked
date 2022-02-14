
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 char VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(int VAR_3, char **VAR_4)
{
 if (VAR_3 >= 2) {
  int VAR_5;
  for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++) {
   if(FUNC_3(VAR_4[VAR_5], "--all-symbols") == 0)
    VAR_0 = 1;
   else if (FUNC_4(VAR_4[VAR_5], "--symbol-prefix=", 16) == 0) {
    char *VAR_6 = &VAR_4[VAR_5][16];

    if ((*VAR_6 == '"' && *(VAR_6+2) == '"') || (*VAR_6 == '\'' && *(VAR_6+2) == '\''))
     VAR_6++;
    VAR_2 = *VAR_6;
   } else
    FUNC_5();
  }
 } else if (VAR_3 != 1)
  FUNC_5();

 FUNC_1(VAR_1);
 FUNC_2();
 FUNC_0();
 FUNC_6();

 return 0;
}
