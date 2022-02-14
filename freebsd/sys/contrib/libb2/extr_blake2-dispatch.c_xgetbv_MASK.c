
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



__attribute__((used)) static inline uint64_t FUNC_0(uint32_t VAR_0)
{
  uint32_t VAR_1, VAR_2;
  __asm__ __volatile__(
    "xgetbv"
    : "=a"(VAR_1),"=d"(VAR_2)
    : "c"(VAR_0)
  );
  return ((uint64_t)VAR_2 << 32) | VAR_1;
}
