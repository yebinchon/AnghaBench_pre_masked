
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

int
FUNC_6(void)
{
 int VAR_3;

 if ((VAR_3 = FUNC_5(VAR_2, VAR_1 | VAR_0)) >= 0) {
  FUNC_0(VAR_3);
  return 0;
 }
 if (FUNC_3() != 1)
  return 0;
 if (FUNC_4(0) != FUNC_2())
  return 0;
 FUNC_1("already daemonized");
 return 1;
}
