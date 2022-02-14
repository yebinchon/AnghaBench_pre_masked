
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fp_rnd_t ;



fp_rnd_t
FUNC_0()
{
 int VAR_0;

 __asm("cfc1 %0,$31" : "=r" (VAR_0));
 return VAR_0 & 0x03;
}
