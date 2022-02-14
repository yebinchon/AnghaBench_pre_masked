
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int u_int ;
struct TYPE_9__ {scalar_t__ pv_kva; int pvh_attrs; int pv_list; } ;
struct vm_page {TYPE_1__ md; } ;
struct pv_entry {scalar_t__ pv_va; int pv_flags; TYPE_3__* pv_pmap; } ;
typedef TYPE_3__* pmap_t ;
struct TYPE_10__ {int wired_count; } ;
struct TYPE_11__ {TYPE_2__ pm_stats; int pm_pvlist; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,struct pv_entry*,int ) ;
 TYPE_3__* VAR_7 ;
 int FUNC_4 (char*) ;
 struct pv_entry* FUNC_5 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct vm_page*,int ) ;

__attribute__((used)) static void
FUNC_8(struct vm_page *VAR_11, struct pv_entry *VAR_12, pmap_t VAR_13,
    vm_offset_t VAR_14, u_int VAR_15)
{

 FUNC_6(&VAR_10, VAR_6);
 FUNC_0(VAR_13);
 if (VAR_11->md.pv_kva != 0) {
  VAR_12->pv_pmap = VAR_7;
  VAR_12->pv_va = VAR_11->md.pv_kva;
  VAR_12->pv_flags = VAR_5 | VAR_3;
  if (VAR_13 != VAR_7)
   FUNC_1(VAR_7);
  FUNC_3(&VAR_11->md.pv_list, VAR_12, VAR_8);
  FUNC_3(&VAR_7->pm_pvlist, VAR_12, VAR_9);
  if (VAR_13 != VAR_7)
   FUNC_2(VAR_7);
  VAR_11->md.pv_kva = 0;
  if ((VAR_12 = FUNC_5()) == ((void*)0))
   FUNC_4("pmap_kenter_pv: no pv entries");
 }
 VAR_12->pv_pmap = VAR_13;
 VAR_12->pv_va = VAR_14;
 VAR_12->pv_flags = VAR_15;
 FUNC_3(&VAR_11->md.pv_list, VAR_12, VAR_8);
 FUNC_3(&VAR_13->pm_pvlist, VAR_12, VAR_9);
 VAR_11->md.pvh_attrs |= VAR_15 & (VAR_2 | VAR_1);
 if (VAR_12->pv_flags & VAR_4)
  ++VAR_13->pm_stats.wired_count;
 FUNC_7(VAR_11, VAR_0);
}
