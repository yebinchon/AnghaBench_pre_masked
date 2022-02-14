
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_long ;



__attribute__((used)) static int
FUNC_0(uint64_t *VAR_0)
{
 u_long VAR_1, VAR_2;

 __asm __volatile("xorl %k0,%k0;popcntq %2,%0;"
     "xorl %k1,%k1;popcntq %3,%1;addl %k1,%k0;"
     "xorl %k1,%k1;popcntq %4,%1;addl %k1,%k0"
     : "=&r" (VAR_1), "=&r" (VAR_2)
     : "m" (VAR_0[0]), "m" (VAR_0[1]), "m" (VAR_0[2]));
 return (VAR_1);
}
