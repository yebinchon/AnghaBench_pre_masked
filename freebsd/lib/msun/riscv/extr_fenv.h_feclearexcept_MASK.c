
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
inline int
FUNC_0(int VAR_0)
{

 __asm __volatile("csrc fflags, %0" :: "r"(VAR_0));

 return (0);
}
