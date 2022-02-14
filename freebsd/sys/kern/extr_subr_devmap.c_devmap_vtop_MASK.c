
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
struct devmap_entry {scalar_t__ pd_size; scalar_t__ pd_va; scalar_t__ pd_pa; } ;


 int VAR_0 ;
 struct devmap_entry* VAR_1 ;

vm_paddr_t
FUNC_0(void * VAR_2, vm_size_t VAR_3)
{
 const struct devmap_entry *VAR_4;
 vm_offset_t VAR_5;

 if (VAR_1 == ((void*)0))
  return (VAR_0);

 VAR_5 = (vm_offset_t)VAR_2;
 for (VAR_4 = VAR_1; VAR_4->pd_size != 0; ++VAR_4) {
  if (VAR_5 >= VAR_4->pd_va && VAR_5 + VAR_3 <= VAR_4->pd_va + VAR_4->pd_size)
   return ((vm_paddr_t)(VAR_4->pd_pa + (VAR_5 - VAR_4->pd_va)));
 }

 return (VAR_0);
}
