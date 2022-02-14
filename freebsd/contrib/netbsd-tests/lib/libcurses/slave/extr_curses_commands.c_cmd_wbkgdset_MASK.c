
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char*,int*) ;
 int FUNC_5 (int *,int) ;

void
FUNC_6(int VAR_1, char **VAR_2)
{
 WINDOW *VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_1, 2) == 1)
  return;

 if (FUNC_4(VAR_2[0], "%p", VAR_3) == 0) {
  FUNC_1(1);
  FUNC_2("BAD ARGUMENT");
  return;
 }

 if (FUNC_4(VAR_2[1], "%d", &VAR_4) == 0) {
  FUNC_1(1);
  FUNC_2("BAD ARGUMENT");
  return;
 }

 FUNC_5(VAR_3, VAR_4);
 FUNC_1(1);
 FUNC_3(VAR_0);
}
