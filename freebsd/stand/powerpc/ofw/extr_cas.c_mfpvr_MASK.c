
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int register_t ;



__attribute__((used)) static __inline register_t
FUNC_0(void)
{
 register_t VAR_0;

 __asm __volatile ("mfpvr %0" : "=r"(VAR_0));

 return (VAR_0);
}
