
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



uint64_t
FUNC_0(volatile void *VAR_0, uint64_t VAR_1,
    uint64_t VAR_2, uint64_t VAR_3)
{
 uint32_t VAR_4 = VAR_1 >> 32;
 uint32_t VAR_5 = VAR_1 & 0xFFFFFFFF;
 uint32_t VAR_6, VAR_7;
 uint32_t VAR_8 = VAR_2 >> 32;
 uint32_t VAR_9 = VAR_2 & 0xFFFFFFFF;
 uint32_t VAR_10 = VAR_3 >> 32;
 uint32_t VAR_11 = VAR_3 & 0xFFFFFFFF;

 __asm__ __volatile__ ("call *%8" : "=d"(VAR_6), "=a"(VAR_7) :
     "d" (VAR_4), "a" (VAR_5),
     "b" (VAR_8), "c" (VAR_9),
     "D"(VAR_10), "S"(VAR_11),
     "m" (VAR_0));
 return (VAR_7 | ((uint64_t)VAR_6 << 32));
}
