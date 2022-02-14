
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

int
FUNC_5(int VAR_0, char *VAR_1[])
{

 if (FUNC_3() == -1)
  FUNC_0(1, "rumpclient init");

 if (VAR_0 > 1) {
  for (;;) {
   FUNC_2();
   FUNC_4(10000);
  }
 } else {
  if (FUNC_2() > 0)
   FUNC_1(0);
  FUNC_0(1, "getpid");
 }
}
