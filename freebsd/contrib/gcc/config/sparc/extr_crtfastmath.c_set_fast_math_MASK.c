
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static void __attribute__((constructor))
FUNC_0 (void)
{
  unsigned int VAR_1;






  __asm__("st %%fsr, %0"
   : "=m" (VAR_1));

  VAR_1 |= VAR_0;

  __asm__("ld %0, %%fsr"
   : : "m" (VAR_1));
}
