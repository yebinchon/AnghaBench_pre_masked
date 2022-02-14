
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(u_long *VAR_1)
{
 u_long VAR_2;
 int VAR_3;

 for (VAR_3 = VAR_0; VAR_3 > 0; --VAR_3) {
      __asm __volatile(".long 0x7c0105e6 | (%0 << 21)" :
          "+r"(VAR_2));
  if (VAR_2 != ~0)
   break;
 }

 *VAR_1 = VAR_2;
 return (VAR_3);
}
