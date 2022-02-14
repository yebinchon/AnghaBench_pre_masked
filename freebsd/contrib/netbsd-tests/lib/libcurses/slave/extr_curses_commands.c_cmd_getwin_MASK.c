
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(int VAR_0, char **VAR_1)
{
 FILE *VAR_2;

 if (FUNC_0(VAR_0, 1) == 1)
  return;

 if ((VAR_2 = FUNC_2(VAR_1[0], "r")) == ((void*)0)) {
  FUNC_4(1);
  FUNC_5("BAD FILE_ARGUMENT");
  return;
 }

 FUNC_4(1);
 FUNC_6(FUNC_3(VAR_2));
 FUNC_1(VAR_2);
}
