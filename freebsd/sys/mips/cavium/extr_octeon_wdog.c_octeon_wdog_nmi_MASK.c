
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,...) ;

void
FUNC_5(void)
{
 int VAR_0;

 VAR_0 = FUNC_0();

 FUNC_4("cpu%u: NMI detected\n", VAR_0);
 FUNC_4("cpu%u: Exception PC: %p\n", VAR_0, (void *)FUNC_2());
 FUNC_4("cpu%u: status %#x cause %#x\n", VAR_0, FUNC_3(), FUNC_1());







 for (;;)
  continue;
}
