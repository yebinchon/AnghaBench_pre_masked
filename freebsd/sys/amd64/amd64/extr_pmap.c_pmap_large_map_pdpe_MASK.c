
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t vm_pindex_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uintmax_t ;
typedef int pdp_entry_t ;
struct TYPE_2__ {int* pm_pml4; } ;


 int FUNC_0 (int,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (scalar_t__) ;

__attribute__((used)) static pdp_entry_t *
FUNC_4(vm_offset_t VAR_5)
{
 vm_pindex_t VAR_6;
 vm_paddr_t VAR_7;

 VAR_6 = FUNC_3(VAR_5);
 FUNC_0(VAR_0 <= VAR_6 && VAR_6 < VAR_0 + VAR_4,
     ("pmap_large_map_pdpe: va %#jx out of range idx %#jx LMSPML4I "
     "%#jx lm_ents %d",
     (uintmax_t)VAR_5, (uintmax_t)VAR_6, VAR_0, VAR_4));
 FUNC_0((VAR_3->pm_pml4[VAR_6] & VAR_2) != 0,
     ("pmap_large_map_pdpe: invalid pml4 for va %#jx idx %#jx "
     "LMSPML4I %#jx lm_ents %d",
     (uintmax_t)VAR_5, (uintmax_t)VAR_6, VAR_0, VAR_4));
 VAR_7 = VAR_3->pm_pml4[VAR_6] & VAR_1;
 return ((pdp_entry_t *)FUNC_1(VAR_7) + FUNC_2(VAR_5));
}
