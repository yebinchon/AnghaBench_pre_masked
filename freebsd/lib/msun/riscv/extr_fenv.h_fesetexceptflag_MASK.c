
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fexcept_t ;



inline int
FUNC_0(const fexcept_t *VAR_0, int VAR_1)
{
 fexcept_t VAR_2;

 VAR_2 = *VAR_0;
 __asm __volatile("csrc fflags, %0" :: "r"(VAR_1));
 __asm __volatile("csrs fflags, %0" :: "r"(VAR_2 & VAR_1));

 return (0);
}
