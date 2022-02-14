
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



__attribute__((used)) static inline unsigned long FUNC_0(void)
{
 uint32_t VAR_0, VAR_1;
 uint64_t VAR_2;
 asm volatile ("rdtsc" : "=a" (VAR_0), "=d" (VAR_1));
 VAR_2 = VAR_1;
 VAR_2 = (VAR_2 << 32) | VAR_0;
 return VAR_2;
}
