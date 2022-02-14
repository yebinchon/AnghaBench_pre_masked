
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char*,int*) ;
 int FUNC_5 (int) ;

void
FUNC_6(int VAR_1, char **VAR_2)
{
 int VAR_3;

 if (FUNC_0(VAR_1, 1) == 1)
  return;

 if (FUNC_4(VAR_2[0], "%d", &VAR_3) == 0) {
  FUNC_1(1);
  FUNC_2("BAD ARGUMENT");
  return;
 }

 FUNC_5(VAR_3);
 FUNC_1(1);
 FUNC_3(VAR_0);
}
