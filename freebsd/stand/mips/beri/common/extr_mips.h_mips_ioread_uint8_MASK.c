
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vaddr_t ;
typedef int uint8_t ;



__attribute__((used)) static inline uint8_t
FUNC_0(vaddr_t VAR_0)
{
 uint8_t VAR_1;

 __asm__ __volatile__ ("lb %0, 0(%1)" : "=r" (VAR_1) : "r" (VAR_0));
 return (VAR_1);
}
