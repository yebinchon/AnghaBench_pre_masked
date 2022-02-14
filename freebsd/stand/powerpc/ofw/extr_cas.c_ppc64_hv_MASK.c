
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static __inline int
FUNC_0(void)
{
 int VAR_0;


 __asm __volatile ("mfmsr %0\n\t"
  "rldicl %0,%0,4,63" : "=r"(VAR_0));

 return (VAR_0);
}
