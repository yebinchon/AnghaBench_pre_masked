
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vaddr_t ;
typedef int uint32_t ;



__attribute__((used)) static inline void
FUNC_0(vaddr_t VAR_0, uint32_t VAR_1)
{

 __asm__ __volatile__ ("sw %0, 0(%1)" : : "r" (VAR_1), "r" (VAR_0));
}
