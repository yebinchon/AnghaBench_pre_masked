
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void
FUNC_5(int VAR_0)
{

 FUNC_3();
 if (!VAR_0)
  FUNC_1();
 if (!FUNC_2())
  __asm __volatile(
      "dsb sy \n"
      "wfi    \n");
 if (!VAR_0)
  FUNC_0();
 FUNC_4();
}
