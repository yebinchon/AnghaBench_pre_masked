
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;


typedef int vm_prot_t ;
typedef TYPE_3__* vm_page_t ;
typedef size_t vm_offset_t ;
typedef size_t u_int ;
struct spglist {int dummy; } ;
typedef int pt_entry_t ;
typedef TYPE_4__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_24__ {int resident_count; } ;
struct TYPE_27__ {int* pm_pdir; TYPE_1__ pm_stats; } ;
struct TYPE_25__ {int pat_mode; } ;
struct TYPE_26__ {int oflags; size_t pindex; TYPE_2__ md; int ref_count; } ;
struct TYPE_23__ {size_t clean_sva; size_t clean_eva; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_8 ;
 int FUNC_3 (struct spglist*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_5 (TYPE_4__*,size_t,int ) ;
 int VAR_11 ;
 TYPE_4__* VAR_12 ;
 TYPE_16__ VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (TYPE_4__*,int ,int ) ;
 int FUNC_7 (TYPE_4__*,size_t) ;
 int* FUNC_8 (TYPE_4__*,size_t) ;
 int FUNC_9 (TYPE_4__*,size_t,TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*,TYPE_3__*,struct spglist*) ;
 int FUNC_11 (int*,int) ;
 int VAR_15 ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct spglist*,int) ;

__attribute__((used)) static vm_page_t
FUNC_16(pmap_t VAR_16, vm_offset_t VAR_17, vm_page_t VAR_18,
    vm_prot_t VAR_19, vm_page_t VAR_20)
{
 pt_entry_t VAR_21, *VAR_22;
 struct spglist VAR_23;

 FUNC_0(VAR_16 != VAR_12 || VAR_17 < VAR_13.clean_sva ||
     VAR_17 >= VAR_13.clean_eva || (VAR_18->oflags & VAR_10) != 0,
     ("pmap_enter_quick_locked: managed mapping within the clean submap"));
 FUNC_12(&VAR_15, VAR_8);
 FUNC_2(VAR_16, VAR_0);





 if (VAR_16 != VAR_12) {
  u_int VAR_24;
  pd_entry_t VAR_25;




  VAR_24 = VAR_17 >> VAR_1;
  if (VAR_20 && (VAR_20->pindex == VAR_24)) {
   VAR_20->ref_count++;
  } else {



   VAR_25 = VAR_16->pm_pdir[VAR_24];





   if (VAR_25) {
    if (VAR_25 & VAR_4)
     return (((void*)0));
    VAR_20 = FUNC_1(VAR_25 & VAR_2);
    VAR_20->ref_count++;
   } else {
    VAR_20 = FUNC_5(VAR_16, VAR_24,
        VAR_7);
    if (VAR_20 == ((void*)0))
     return (VAR_20);
   }
  }
 } else {
  VAR_20 = ((void*)0);
 }

 FUNC_13();
 VAR_22 = FUNC_8(VAR_16, VAR_17);
 if (*VAR_22) {
  if (VAR_20 != ((void*)0)) {
   VAR_20->ref_count--;
   VAR_20 = ((void*)0);
  }
  FUNC_14();
  return (VAR_20);
 }




 if ((VAR_18->oflags & VAR_10) == 0 &&
     !FUNC_9(VAR_16, VAR_17, VAR_18)) {
  if (VAR_20 != ((void*)0)) {
   FUNC_3(&VAR_23);
   if (FUNC_10(VAR_16, VAR_20, &VAR_23)) {
    FUNC_7(VAR_16, VAR_17);
    FUNC_15(&VAR_23, 1);
   }

   VAR_20 = ((void*)0);
  }
  FUNC_14();
  return (VAR_20);
 }




 VAR_16->pm_stats.resident_count++;

 VAR_21 = FUNC_4(VAR_18) | VAR_6 |
     FUNC_6(VAR_16, VAR_18->md.pat_mode, 0);
 if ((VAR_18->oflags & VAR_10) == 0)
  VAR_21 |= VAR_3;




 if (VAR_16 != VAR_12)
  VAR_21 |= VAR_5;
 FUNC_11(VAR_22, VAR_21);
 FUNC_14();
 return (VAR_20);
}
