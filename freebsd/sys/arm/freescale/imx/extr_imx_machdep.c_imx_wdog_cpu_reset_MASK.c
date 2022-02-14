
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;
 int volatile VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 int FUNC_1 () ;
 int* FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;

void
FUNC_4(vm_offset_t VAR_3)
{
 volatile uint16_t VAR_4, *VAR_5;

 if ((VAR_5 = FUNC_2(VAR_3, sizeof(*VAR_5))) == ((void*)0)) {
  FUNC_3("imx_wdog_cpu_reset(): "
      "cannot find control register... locking up now.");
  for (;;)
   FUNC_1();
 }
 VAR_4 = *VAR_5;
 if (VAR_4 & VAR_2) {
  VAR_4 &= ~VAR_1;
  *VAR_5 = VAR_4;
  FUNC_0(1000000);
  FUNC_3("imx_wdog_cpu_reset(): "
      "External reset failed, trying internal cpu-reset\n");
  FUNC_0(10000);
 }







 VAR_4 &= ~VAR_0;
 *VAR_5 = VAR_4;
 *VAR_5 = VAR_4;
 *VAR_5 = VAR_4;


 for (;;)
  FUNC_1();
}
