
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(const void *VAR_0, size_t VAR_1)
{


 if (VAR_0 == ((void*)0) || VAR_1 == 0) {
  __asm __volatile(
      "ic		ialluis	\n"
      "dsb	ish	\n"
      : : : "memory");
  return;
 }


}
