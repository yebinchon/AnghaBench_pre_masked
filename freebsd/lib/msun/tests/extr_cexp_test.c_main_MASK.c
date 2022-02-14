
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int
FUNC_8(void)
{

 FUNC_0("1..7\n");

 FUNC_7();
 FUNC_0("ok 1 - cexp zero\n");

 FUNC_4();
 FUNC_0("ok 2 - cexp nan\n");

 FUNC_2();
 FUNC_0("ok 3 - cexp inf\n");

 FUNC_5();
 FUNC_0("ok 4 - cexp reals\n");

 FUNC_1();
 FUNC_0("ok 5 - cexp imaginaries\n");

 FUNC_6();
 FUNC_0("ok 6 - cexp small\n");

 FUNC_3();
 FUNC_0("ok 7 - cexp large\n");

 return (0);
}
