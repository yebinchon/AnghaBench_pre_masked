
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* vm_offset_t ;
struct mv_pci_range {void* base_parent; int len; } ;
struct devmap_entry {void* pd_pa; int pd_size; void* pd_va; } ;
typedef int phandle_t ;


 int FUNC_0 (int ,struct mv_pci_range*,struct mv_pci_range*) ;

int
FUNC_1(phandle_t VAR_0, struct devmap_entry *VAR_1, vm_offset_t VAR_2,
    vm_offset_t VAR_3)
{
 struct mv_pci_range VAR_4, VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_0(VAR_0, &VAR_4, &VAR_5)) != 0)
  return (VAR_6);

 VAR_1->pd_va = (VAR_2 ? VAR_2 : VAR_4.base_parent);
 VAR_1->pd_pa = VAR_4.base_parent;
 VAR_1->pd_size = VAR_4.len;
 VAR_1++;

 VAR_1->pd_va = (VAR_3 ? VAR_3 : VAR_5.base_parent);
 VAR_1->pd_pa = VAR_5.base_parent;
 VAR_1->pd_size = VAR_5.len;
 return (0);
}
