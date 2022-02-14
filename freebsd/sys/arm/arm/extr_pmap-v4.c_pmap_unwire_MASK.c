
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct l2_bucket {int * l2b_kva; } ;
typedef TYPE_3__* pv_entry_t ;
typedef int pt_entry_t ;
typedef TYPE_4__* pmap_t ;
struct TYPE_14__ {int wired_count; } ;
struct TYPE_17__ {TYPE_1__ pm_stats; } ;
struct TYPE_16__ {int pv_flags; } ;
struct TYPE_15__ {int oflags; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_2__*,TYPE_4__*,scalar_t__) ;
 struct l2_bucket* FUNC_8 (TYPE_4__*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void
FUNC_11(pmap_t VAR_4, vm_offset_t VAR_5, vm_offset_t VAR_6)
{
 struct l2_bucket *VAR_7;
 pt_entry_t *VAR_8, VAR_9;
 pv_entry_t VAR_10;
 vm_offset_t VAR_11;
 vm_page_t VAR_12;

 FUNC_9(&VAR_3);
 FUNC_2(VAR_4);
 while (VAR_5 < VAR_6) {
  VAR_11 = FUNC_0(VAR_5);
  if (VAR_11 > VAR_6)
   VAR_11 = VAR_6;
  VAR_7 = FUNC_8(VAR_4, VAR_5);
  if (VAR_7 == ((void*)0)) {
   VAR_5 = VAR_11;
   continue;
  }
  for (VAR_8 = &VAR_7->l2b_kva[FUNC_4(VAR_5)]; VAR_5 < VAR_11;
      VAR_5 += VAR_0, VAR_8++) {
   if ((VAR_9 = *VAR_8) == 0 ||
       (VAR_12 = FUNC_1(FUNC_5(VAR_9))) == ((void*)0) ||
       (VAR_12->oflags & VAR_2) != 0)
    continue;
   VAR_10 = FUNC_7(VAR_12, VAR_4, VAR_5);
   if ((VAR_10->pv_flags & VAR_1) == 0)
    FUNC_6("pmap_unwire: pv %p isn't wired", VAR_10);
   VAR_10->pv_flags &= ~VAR_1;
   VAR_4->pm_stats.wired_count--;
  }
 }
 FUNC_10(&VAR_3);
  FUNC_3(VAR_4);
}
