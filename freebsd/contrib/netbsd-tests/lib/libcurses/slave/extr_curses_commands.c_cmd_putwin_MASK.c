
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;
typedef int FILE ;


 int FUNC_0 (int,int) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char*,int **) ;

void
FUNC_7(int VAR_0, char **VAR_1)
{
 FILE *VAR_2;
 WINDOW *VAR_3;

 if (FUNC_0(VAR_0, 2) == 1)
  return;

 if (FUNC_6(VAR_1[0], "%p", &VAR_3) == 0) {
  FUNC_3(1);
  FUNC_4("BAD ARGUMENT");
  return;
 }

 if ((VAR_2 = FUNC_1(VAR_1[1], "rw")) == ((void*)0)) {
  FUNC_3(1);
  FUNC_4("BAD FILE_ARGUMENT");
  return;
 }

 FUNC_3(1);
 FUNC_5(FUNC_2(VAR_3, VAR_2));
}
