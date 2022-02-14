
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_18__ ;
typedef struct TYPE_25__ TYPE_16__ ;


typedef int vm_prot_t ;
typedef TYPE_3__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef TYPE_4__* pmap_t ;
typedef scalar_t__ pd_entry_t ;
struct TYPE_27__ {int resident_count; } ;
struct TYPE_30__ {TYPE_1__ pm_stats; } ;
struct TYPE_29__ {int oflags; unsigned int pindex; int ref_count; } ;
struct TYPE_28__ {TYPE_4__ vm_pmap; } ;
struct TYPE_26__ {TYPE_2__* p_vmspace; } ;
struct TYPE_25__ {int clean_eva; int clean_sva; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int,int ,TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_10 ;
 TYPE_3__* FUNC_7 (TYPE_4__*,unsigned int,int ) ;
 TYPE_18__* VAR_11 ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 TYPE_16__ VAR_12 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__* FUNC_11 (TYPE_4__*,int ) ;
 unsigned int FUNC_12 (int ) ;
 int* FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (TYPE_4__*,TYPE_3__*,int ,TYPE_3__*) ;
 int FUNC_15 (TYPE_4__*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_16 (int*,int) ;
 int VAR_13 ;
 int FUNC_17 (int *,int ) ;

__attribute__((used)) static vm_page_t
FUNC_18(pmap_t VAR_14, vm_offset_t VAR_15, vm_page_t VAR_16,
    vm_prot_t VAR_17, vm_page_t VAR_18)
{
 pt_entry_t *VAR_19, VAR_20;
 vm_paddr_t VAR_21;

 FUNC_0(VAR_15 < VAR_12.clean_sva || VAR_15 >= VAR_12.clean_eva ||
     (VAR_16->oflags & VAR_10) != 0,
     ("pmap_enter_quick_locked: managed mapping within the clean submap"));
 FUNC_17(&VAR_13, VAR_8);
 FUNC_3(VAR_14, VAR_0);





 if (VAR_15 < VAR_9) {
  pd_entry_t *VAR_22;
  unsigned VAR_23;




  VAR_23 = FUNC_12(VAR_15);
  if (VAR_18 && (VAR_18->pindex == VAR_23)) {
   VAR_18->ref_count++;
  } else {



   VAR_22 = FUNC_11(VAR_14, VAR_15);





   if (VAR_22 && *VAR_22 != 0) {
    VAR_18 = FUNC_2(
        FUNC_1(*VAR_22));
    VAR_18->ref_count++;
   } else {
    VAR_18 = FUNC_7(VAR_14, VAR_23,
        VAR_3);
    if (VAR_18 == ((void*)0))
     return (VAR_18);
   }
  }
 } else {
  VAR_18 = ((void*)0);
 }

 VAR_19 = FUNC_13(VAR_14, VAR_15);
 if (FUNC_16(VAR_19, VAR_7)) {
  if (VAR_18 != ((void*)0)) {
   VAR_18->ref_count--;
   VAR_18 = ((void*)0);
  }
  return (VAR_18);
 }




 if ((VAR_16->oflags & VAR_10) == 0 &&
     !FUNC_14(VAR_14, VAR_18, VAR_15, VAR_16)) {
  if (VAR_18 != ((void*)0)) {
   FUNC_15(VAR_14, VAR_15, VAR_18);
   VAR_18 = ((void*)0);
  }
  return (VAR_18);
 }




 VAR_14->pm_stats.resident_count++;

 VAR_21 = FUNC_6(VAR_16);




 VAR_20 = VAR_6 | FUNC_5(VAR_21) | VAR_7;
 if ((VAR_16->oflags & VAR_10) == 0)
  VAR_20 |= VAR_5;

 FUNC_4(VAR_20, VAR_21, VAR_16);

 if (FUNC_8(VAR_14))
  *VAR_19 = VAR_20 | VAR_4;
 else {
  *VAR_19 = VAR_20;




  if (VAR_14 == &VAR_11->p_vmspace->vm_pmap) {
   VAR_15 &= ~VAR_1;
   FUNC_10(VAR_15, VAR_2);
   FUNC_9(VAR_15, VAR_2);
  }
 }
 return (VAR_18);
}
