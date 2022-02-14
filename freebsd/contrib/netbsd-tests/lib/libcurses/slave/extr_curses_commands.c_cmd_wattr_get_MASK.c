
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (short) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*,int **) ;
 int FUNC_6 (int *,int*,short*,int *) ;

void
FUNC_7(int VAR_0, char **VAR_1)
{
 WINDOW *VAR_2;
 int VAR_3;
 short VAR_4;

 if (FUNC_0(VAR_0, 1) == 1)
  return;

 if (FUNC_5(VAR_1[0], "%p", &VAR_2) == 0) {
  FUNC_1(1);
  FUNC_2("BAD ARGUMENT");
  return;
 }


 FUNC_1(3);
 FUNC_4(FUNC_6(VAR_2, &VAR_3, &VAR_4, ((void*)0)));
 FUNC_3(VAR_3);
 FUNC_3(VAR_4);
}
