
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_pindex_t ;
typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_14__ {scalar_t__ clean_sva; scalar_t__ clean_eva; } ;
struct TYPE_12__ {int pat_mode; } ;
struct TYPE_13__ {int oflags; scalar_t__ pindex; TYPE_1__ md; int ref_count; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct spglist*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_6 (int ,scalar_t__,int *) ;
 TYPE_8__ VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int* FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,scalar_t__) ;
 size_t FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,scalar_t__,TYPE_2__*,struct rwlock**) ;
 scalar_t__ FUNC_15 (int ,scalar_t__,TYPE_2__*,struct spglist*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int*,int) ;
 int FUNC_18 (struct spglist*,int) ;
 int* FUNC_19 (scalar_t__) ;

__attribute__((used)) static vm_page_t
FUNC_20(pmap_t VAR_10, vm_offset_t VAR_11, vm_page_t VAR_12,
    vm_prot_t VAR_13, vm_page_t VAR_14, struct rwlock **VAR_15)
{
 struct spglist VAR_16;
 pt_entry_t VAR_17, *VAR_18, VAR_19;

 FUNC_0(VAR_11 < VAR_8.clean_sva || VAR_11 >= VAR_8.clean_eva ||
     (VAR_12->oflags & VAR_7) != 0,
     ("pmap_enter_quick_locked: managed mapping within the clean submap"));
 VAR_19 = FUNC_16(VAR_10);
 FUNC_3(VAR_10, VAR_0);





 if (VAR_11 < VAR_5) {
  vm_pindex_t VAR_20;
  pd_entry_t *VAR_21;




  VAR_20 = FUNC_10(VAR_11);
  if (VAR_14 && (VAR_14->pindex == VAR_20)) {
   VAR_14->ref_count++;
  } else {



   VAR_21 = FUNC_9(VAR_10, VAR_11);







   if (VAR_21 && (*VAR_21 & VAR_19) != 0) {
    if (*VAR_21 & VAR_3)
     return (((void*)0));
    VAR_14 = FUNC_2(*VAR_21 & VAR_1);
    VAR_14->ref_count++;
   } else {




    VAR_14 = FUNC_6(VAR_10, VAR_20, ((void*)0));
    if (VAR_14 == ((void*)0))
     return (VAR_14);
   }
  }
  VAR_18 = (pt_entry_t *)FUNC_1(FUNC_5(VAR_14));
  VAR_18 = &VAR_18[FUNC_12(VAR_11)];
 } else {
  VAR_14 = ((void*)0);
  VAR_18 = FUNC_19(VAR_11);
 }
 if (*VAR_18) {
  if (VAR_14 != ((void*)0)) {
   VAR_14->ref_count--;
   VAR_14 = ((void*)0);
  }
  return (VAR_14);
 }




 if ((VAR_12->oflags & VAR_7) == 0 &&
     !FUNC_14(VAR_10, VAR_11, VAR_12, VAR_15)) {
  if (VAR_14 != ((void*)0)) {
   FUNC_4(&VAR_16);
   if (FUNC_15(VAR_10, VAR_11, VAR_14, &VAR_16)) {






    FUNC_8(VAR_10, VAR_11);
    FUNC_18(&VAR_16, 1);
   }
   VAR_14 = ((void*)0);
  }
  return (VAR_14);
 }




 FUNC_13(VAR_10, 1);

 VAR_17 = FUNC_5(VAR_12) | VAR_19 |
     FUNC_7(VAR_10, VAR_12->md.pat_mode, 0);
 if ((VAR_12->oflags & VAR_7) == 0)
  VAR_17 |= VAR_2;
 if ((VAR_13 & VAR_6) == 0)
  VAR_17 |= VAR_9;
 if (VAR_11 < VAR_5)
  VAR_17 |= VAR_4 | FUNC_11(VAR_10, VAR_11);
 FUNC_17(VAR_18, VAR_17);
 return (VAR_14);
}
