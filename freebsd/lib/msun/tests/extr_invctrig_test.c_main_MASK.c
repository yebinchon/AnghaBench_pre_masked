
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

int
FUNC_7(void)
{

 FUNC_0("1..6\n");

 FUNC_6();
 FUNC_0("ok 1 - invctrig zero\n");

 FUNC_4();
 FUNC_0("ok 2 - invctrig nan\n");

 FUNC_2();
 FUNC_0("ok 3 - invctrig inf\n");

 FUNC_1();
 FUNC_0("ok 4 - invctrig axes\n");

 FUNC_5();
 FUNC_0("ok 5 - invctrig small\n");

 FUNC_3();
 FUNC_0("ok 6 - invctrig large\n");

 return (0);
}
