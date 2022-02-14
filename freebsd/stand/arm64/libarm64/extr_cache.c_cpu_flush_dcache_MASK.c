
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint64_t ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

void
FUNC_2(const void *VAR_0, size_t VAR_1)
{

 uint64_t VAR_2;
 vm_offset_t VAR_3, VAR_4;

 VAR_2 = FUNC_0();


 VAR_4 = (vm_offset_t)VAR_0 + (vm_offset_t)VAR_1;

 VAR_3 = (vm_offset_t)VAR_0;
 VAR_3 = FUNC_1(VAR_3, VAR_2);

 for (; VAR_3 < VAR_4; VAR_3 += VAR_2)
  __asm __volatile("dc	civac, %0" : : "r" (VAR_3) : "memory");

 __asm __volatile("dsb	sy" : : : "memory");
}
