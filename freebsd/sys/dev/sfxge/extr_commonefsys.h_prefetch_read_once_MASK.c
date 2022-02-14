
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static __inline void
FUNC_0(void *VAR_0)
{

 __asm__(
     "prefetchnta (%0)"
     :
     : "r" (VAR_0));
}
