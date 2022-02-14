
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int fp_rnd_t ;



fp_rnd_t
FUNC_0(fp_rnd_t VAR_0)
{
 uint32_t VAR_1, VAR_2;

 __asm __volatile("vmrs %0, fpscr" : "=&r"(VAR_1));
 VAR_2 = VAR_1 & ~(3 << 22);
 VAR_2 |= VAR_0 << 22;
 __asm __volatile("vmsr fpscr, %0" : : "r"(VAR_2));

 return ((VAR_1 >> 22) & 3);
}
