
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int fp_rnd_t ;



fp_rnd_t
FUNC_0(void)
{
 uint32_t VAR_0;

 __asm __volatile("vmrs %0, fpscr" : "=&r"(VAR_0));

 return ((VAR_0 >> 22) & 3);
}
