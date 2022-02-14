
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCREEN ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char*,int **) ;

void
FUNC_6(int VAR_0, char **VAR_1)
{
 SCREEN *VAR_2;

 if (FUNC_0(VAR_0, 1) == 1)
  return;

 if (FUNC_5(VAR_1[0], "%p", &VAR_2) == 0) {
  FUNC_1(1);
  FUNC_2("BAD ARGUMENT");
  return;
 }

 FUNC_1(1);
 FUNC_3(FUNC_4(VAR_2));
}
