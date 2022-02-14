
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void *
FUNC_0(void)
{
 uint32_t VAR_2;

 __asm__ __volatile__ (
     ".set\tpush\n\t"
     ".set\tmips32r2\n\t"
     "rdhwr\t%0, $29\n\t"
     ".set\tpop"
     : "=r" (VAR_2));







 VAR_2 = VAR_2 - VAR_1 - VAR_0;

 return (void *)VAR_2;
}
