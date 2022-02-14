
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int* VAR_0 ;

int
FUNC_0(void)
{
 uint64_t VAR_1;

 asm volatile("mrs	%0, fpcr" : "=r" (VAR_1));
 return VAR_0[(VAR_1 >> 22) & 3];
}
