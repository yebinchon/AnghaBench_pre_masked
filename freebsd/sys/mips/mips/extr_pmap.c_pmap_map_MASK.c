
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,scalar_t__) ;

vm_offset_t
FUNC_3(vm_offset_t *VAR_1, vm_paddr_t VAR_2, vm_paddr_t VAR_3, int VAR_4)
{
 vm_offset_t VAR_5, VAR_6;

 if (FUNC_0(VAR_3 - 1))
  return (FUNC_1(VAR_2));

 VAR_5 = VAR_6 = *VAR_1;
 while (VAR_2 < VAR_3) {
  FUNC_2(VAR_5, VAR_2);
  VAR_5 += VAR_0;
  VAR_2 += VAR_0;
 }
 *VAR_1 = VAR_5;
 return (VAR_6);
}
