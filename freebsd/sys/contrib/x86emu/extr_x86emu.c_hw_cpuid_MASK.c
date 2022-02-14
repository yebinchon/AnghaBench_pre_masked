
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void
FUNC_0(uint32_t *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2, uint32_t *VAR_3)
{
 __asm__ volatile("cpuid"
        : "=a" (*VAR_0), "=b" (*VAR_1),
          "=c" (*VAR_2), "=d" (*VAR_3)
        : "a" (*VAR_0), "c" (*VAR_2)
        : "cc");
}
