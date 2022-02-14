
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_paddr_t ;
struct devmap_entry {int pd_pa; int pd_size; scalar_t__ pd_va; } ;


 int VAR_0 ;
 struct devmap_entry* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct devmap_entry*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

void
FUNC_4(vm_paddr_t VAR_5, vm_size_t VAR_6)
{
 struct devmap_entry *VAR_7;

 if (VAR_4)
  FUNC_1("devmap_add_entry() after devmap_bootstrap()");

 if (VAR_2 == (VAR_0 - 1))
  FUNC_1("AKVA_DEVMAP_MAX_ENTRIES is too small");

 if (VAR_2 == 0)
  FUNC_0(VAR_1);
 {
  VAR_3 = FUNC_3(VAR_3 - VAR_6);
 }
 VAR_7 = &VAR_1[VAR_2++];
 VAR_7->pd_va = VAR_3;
 VAR_7->pd_pa = VAR_5;
 VAR_7->pd_size = VAR_6;
}
