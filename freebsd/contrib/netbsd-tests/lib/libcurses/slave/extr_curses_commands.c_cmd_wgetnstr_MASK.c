
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int*) ;
 int FUNC_6 (int *,char*,int) ;

void
FUNC_7(int VAR_0, char **VAR_1)
{
 WINDOW *VAR_2;
 int VAR_3;
 char VAR_4[256];

 if (FUNC_0(VAR_0, 2) == 1)
  return;

 if (FUNC_5(VAR_1[0], "%p", VAR_2) == 0) {
  FUNC_1(1);
  FUNC_2("BAD ARGUMENT");
  return;
 }

 if (FUNC_5(VAR_1[1], "%d", &VAR_3) == 0) {
  FUNC_1(1);
  FUNC_2("BAD ARGUMENT");
  return;
 }


 FUNC_1(2);
 FUNC_3(FUNC_6(VAR_2, VAR_4, VAR_3));
 FUNC_4(VAR_4);
}
