
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 char* VAR_0 ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char**) ;
 int FUNC_4 (char*) ;

int
FUNC_5(char **VAR_1)
{
 char *VAR_2;

 FUNC_0();
 if (VAR_0[0]=='\0')
  if (FUNC_3(&VAR_2)) {
   FUNC_1();
   return (0);
  }

 if (VAR_1)
  *VAR_1 = VAR_0;

 if (FUNC_2(VAR_0) == 0) {
  FUNC_4(VAR_0);
  FUNC_1();
  return (1);
 }
 FUNC_1();
 return (0);
}
