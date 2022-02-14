
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef TYPE_2__* pmap_t ;
struct TYPE_4__ {scalar_t__ resident_count; } ;
struct TYPE_5__ {scalar_t__ pm_type; int pm_pkru; int * pm_pml4u; scalar_t__* pm_pml4; int pm_active; int pm_root; TYPE_1__ pm_stats; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

void
FUNC_9(pmap_t VAR_10)
{
 vm_page_t VAR_11;
 int VAR_12;

 FUNC_2(VAR_10->pm_stats.resident_count == 0,
     ("pmap_release: pmap resident count %ld != 0",
     VAR_10->pm_stats.resident_count));
 FUNC_2(FUNC_8(&VAR_10->pm_root),
     ("pmap_release: pmap has reserved page table page(s)"));
 FUNC_2(FUNC_0(&VAR_10->pm_active),
     ("releasing active pmap %p", VAR_10));

 VAR_11 = FUNC_3(FUNC_1((vm_offset_t)VAR_10->pm_pml4));

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
  VAR_10->pm_pml4[VAR_2 + VAR_12] = 0;
 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
  VAR_10->pm_pml4[VAR_1 + VAR_12] = 0;
 VAR_10->pm_pml4[VAR_5] = 0;
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
  VAR_10->pm_pml4[VAR_3 + VAR_12] = 0;

 FUNC_7(VAR_11);
 FUNC_6(VAR_11);

 if (VAR_10->pm_pml4u != ((void*)0)) {
  VAR_11 = FUNC_3(FUNC_1((vm_offset_t)VAR_10->pm_pml4u));
  FUNC_7(VAR_11);
  FUNC_5(VAR_11);
 }
 if (VAR_10->pm_type == VAR_6 &&
     (VAR_7 & VAR_0) != 0)
  FUNC_4(&VAR_10->pm_pkru);
}
