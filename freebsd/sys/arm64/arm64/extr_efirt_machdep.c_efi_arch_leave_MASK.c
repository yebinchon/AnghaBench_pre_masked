
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

void
FUNC_4(void)
{
 __asm __volatile(
     "mrs x18, tpidr_el1	\n"
 );
 FUNC_3(FUNC_2(FUNC_0(VAR_1)));
 if (FUNC_0(VAR_0) != 0)
  FUNC_1();
}
