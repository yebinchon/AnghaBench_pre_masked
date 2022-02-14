
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fp_rnd_t ;



fp_rnd_t
FUNC_0(fp_rnd_t VAR_0)
{
 fp_rnd_t VAR_1;
 fp_rnd_t VAR_2;

 __asm("cfc1 %0,$31" : "=r" (VAR_1));

 VAR_2 = VAR_1;
 VAR_2 &= ~0x03;
 VAR_2 |= (VAR_0 & 0x03);

 __asm("ctc1 %0,$31" : : "r" (VAR_2));

 return VAR_1 & 0x03;
}
