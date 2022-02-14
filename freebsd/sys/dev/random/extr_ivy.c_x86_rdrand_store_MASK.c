
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(u_long *VAR_1)
{
 u_long VAR_2;
 int VAR_3;

 VAR_3 = VAR_0;
 __asm __volatile(
     "1:\n\t"
     "rdrand	%1\n\t"
     "jc		2f\n\t"
     "dec	%0\n\t"
     "jne	1b\n\t"
     "2:"
     : "+r" (VAR_3), "=r" (VAR_2) : : "cc");
 *VAR_1 = VAR_2;
 return (VAR_3);
}
