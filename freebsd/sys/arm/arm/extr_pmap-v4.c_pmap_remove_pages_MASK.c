
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct pv_entry {int pv_flags; int pv_va; } ;
struct l2_bucket {int* l2b_kva; } ;
typedef int pt_entry_t ;
typedef TYPE_4__* pmap_t ;
struct TYPE_14__ {int resident_count; } ;
struct TYPE_17__ {TYPE_1__ pm_stats; int pm_pvlist; } ;
struct TYPE_15__ {int pv_list; } ;
struct TYPE_16__ {TYPE_2__ md; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *) ;
 struct pv_entry* FUNC_6 (int *) ;
 struct pv_entry* FUNC_7 (struct pv_entry*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 size_t FUNC_12 (int ) ;
 int FUNC_13 (TYPE_4__*,struct l2_bucket*,int) ;
 int FUNC_14 (struct pv_entry*) ;
 struct l2_bucket* FUNC_15 (TYPE_4__*,int ) ;
 int FUNC_16 (TYPE_3__*,TYPE_4__*,struct pv_entry*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_3__*,int ) ;

void
FUNC_20(pmap_t VAR_7)
{
 struct pv_entry *VAR_8, *VAR_9;
 struct l2_bucket *VAR_10 = ((void*)0);
 vm_page_t VAR_11;
 pt_entry_t *VAR_12;

 FUNC_17(&VAR_6);
 FUNC_2(VAR_7);
 FUNC_9();
 FUNC_10();
 for (VAR_8 = FUNC_6(&VAR_7->pm_pvlist); VAR_8; VAR_8 = VAR_9) {
  if (VAR_8->pv_flags & VAR_4 || VAR_8->pv_flags & VAR_3) {

   VAR_9 = FUNC_7(VAR_8, VAR_5);
   continue;
  }
  VAR_7->pm_stats.resident_count--;
  VAR_10 = FUNC_15(VAR_7, VAR_8->pv_va);
  FUNC_0(VAR_10 != ((void*)0), ("No L2 bucket in pmap_remove_pages"));
  VAR_12 = &VAR_10->l2b_kva[FUNC_12(VAR_8->pv_va)];
  VAR_11 = FUNC_1(*VAR_12 & VAR_1);
  FUNC_0((vm_offset_t)VAR_11 >= VAR_0, ("Trying to access non-existent page va %x pte %x", VAR_8->pv_va, *VAR_12));
  *VAR_12 = 0;
  FUNC_4(VAR_12);
  VAR_9 = FUNC_7(VAR_8, VAR_5);
  FUNC_16(VAR_11, VAR_7, VAR_8);
  if (FUNC_5(&VAR_11->md.pv_list))
   FUNC_19(VAR_11, VAR_2);
  FUNC_14(VAR_8);
  FUNC_13(VAR_7, VAR_10, 1);
 }
 FUNC_18(&VAR_6);
 FUNC_11();
 FUNC_8();
 FUNC_3(VAR_7);
}
