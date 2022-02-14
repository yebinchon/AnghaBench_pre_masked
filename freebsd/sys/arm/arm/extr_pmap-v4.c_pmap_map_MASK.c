
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,int,int,int,int) ;

vm_offset_t
FUNC_3(vm_offset_t *VAR_1, vm_offset_t VAR_2, vm_offset_t VAR_3, int VAR_4)
{
 vm_offset_t VAR_5 = *VAR_1;
 vm_offset_t VAR_6 = VAR_5;

 FUNC_0(1, FUNC_2("pmap_map: virt = %08x, start = %08x, end = %08x, "
     "prot = %d\n", (uint32_t) *VAR_1, (uint32_t) VAR_2, (uint32_t) VAR_3,
     VAR_4));

 while (VAR_2 < VAR_3) {
  FUNC_1(VAR_6, VAR_2);
  VAR_6 += VAR_0;
  VAR_2 += VAR_0;
 }
 *VAR_1 = VAR_6;
 return (VAR_5);
}
