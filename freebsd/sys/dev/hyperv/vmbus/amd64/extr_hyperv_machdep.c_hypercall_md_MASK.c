
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



uint64_t
FUNC_0(volatile void *VAR_0, uint64_t VAR_1,
    uint64_t VAR_2, uint64_t VAR_3)
{
 uint64_t VAR_4;

 __asm__ __volatile__ ("mov %0, %%r8" : : "r" (VAR_3): "r8");
 __asm__ __volatile__ ("call *%3" : "=a" (VAR_4) :
     "c" (VAR_1), "d" (VAR_2), "m" (VAR_0));
 return (VAR_4);
}
