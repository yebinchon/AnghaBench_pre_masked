
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 char* FUNC_5 (char*) ;

int
FUNC_6(char *VAR_3)
{
 char *VAR_4;

 FUNC_1("lm_init(\"%s\")", VAR_3);
 FUNC_0(&VAR_2);

 FUNC_4(VAR_0);

 if (VAR_3) {




  VAR_3 = FUNC_5(VAR_3);
  for (VAR_4 = VAR_3; *VAR_4; VAR_4++) {
   switch (*VAR_4) {
   case '=':
    *VAR_4 = ' ';
    break;
   case ',':
    *VAR_4 = '\n';
    break;
   }
  }
  FUNC_3(VAR_3, VAR_4 - VAR_3);
  FUNC_2(VAR_3);
 }

 return (VAR_1 == 0);
}
