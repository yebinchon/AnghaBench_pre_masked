
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_paddr_t ;
struct devmap_entry {scalar_t__ pd_size; scalar_t__ pd_pa; scalar_t__ pd_va; } ;


 struct devmap_entry* VAR_0 ;

void *
FUNC_0(vm_paddr_t VAR_1, vm_size_t VAR_2)
{
 const struct devmap_entry *VAR_3;

 if (VAR_0 == ((void*)0))
  return (((void*)0));

 for (VAR_3 = VAR_0; VAR_3->pd_size != 0; ++VAR_3) {
  if (VAR_1 >= VAR_3->pd_pa && VAR_1 + VAR_2 <= VAR_3->pd_pa + VAR_3->pd_size)
   return ((void *)(VAR_3->pd_va + (VAR_1 - VAR_3->pd_pa)));
 }

 return (((void*)0));
}
