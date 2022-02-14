
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*,int*) ;

void
FUNC_6(int VAR_0, char **VAR_1)
{
 int VAR_2;
 WINDOW *VAR_3;

 if (FUNC_0(VAR_0, 2) == 1)
  return;

 if (FUNC_5(VAR_1[0], "%p", VAR_3) == 0) {
  FUNC_2(1);
 FUNC_3("BAD ARGUMENT");
  return;
 }

 if (FUNC_5(VAR_1[1], "%d", &VAR_2) == 0) {
  FUNC_2(1);
  FUNC_3("BAD ARGUMENT");
  return;
 }

 FUNC_2(1);
 FUNC_4(FUNC_1(VAR_3, VAR_2));
}
