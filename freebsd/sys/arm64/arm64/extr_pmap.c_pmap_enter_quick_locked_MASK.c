
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
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef scalar_t__ pmap_t ;
typedef int pd_entry_t ;
struct TYPE_14__ {int clean_eva; int clean_sva; } ;
struct TYPE_12__ {scalar_t__ pv_memattr; } ;
struct TYPE_13__ {int oflags; scalar_t__ pindex; TYPE_1__ md; int ref_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,char*,scalar_t__,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct spglist*) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_2__* FUNC_9 (scalar_t__,scalar_t__,int *) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int ) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 TYPE_8__ VAR_23 ;
 int FUNC_12 (scalar_t__,int ) ;
 int* FUNC_13 (int*,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int* FUNC_15 (int*,int ) ;
 size_t FUNC_16 (int ) ;
 int FUNC_17 (int*) ;
 int* FUNC_18 (scalar_t__,int ,int*) ;
 int FUNC_19 (scalar_t__,int) ;
 int FUNC_20 (int*,int) ;
 int FUNC_21 (scalar_t__,int ,TYPE_2__*,struct rwlock**) ;
 scalar_t__ FUNC_22 (scalar_t__,int ,TYPE_2__*,struct spglist*) ;
 int FUNC_23 (struct spglist*,int) ;

__attribute__((used)) static vm_page_t
FUNC_24(pmap_t VAR_24, vm_offset_t VAR_25, vm_page_t VAR_26,
    vm_prot_t VAR_27, vm_page_t VAR_28, struct rwlock **VAR_29)
{
 struct spglist VAR_30;
 pd_entry_t *VAR_31;
 pt_entry_t *VAR_32, *VAR_33, VAR_34;
 vm_paddr_t VAR_35;
 int VAR_36;

 FUNC_3(VAR_25 < VAR_23.clean_sva || VAR_25 >= VAR_23.clean_eva ||
     (VAR_26->oflags & VAR_20) != 0,
     ("pmap_enter_quick_locked: managed mapping within the clean submap"));
 FUNC_6(VAR_24, VAR_15);

 FUNC_2(VAR_12, "pmap_enter_quick_locked: %p %lx", VAR_24, VAR_25);




 if (VAR_25 < VAR_17) {
  vm_pindex_t VAR_37;




  VAR_37 = FUNC_14(VAR_25);
  if (VAR_28 && (VAR_28->pindex == VAR_37)) {
   VAR_28->ref_count++;
  } else {



   VAR_31 = FUNC_18(VAR_24, VAR_25, &VAR_36);







   if (VAR_36 == 1) {
    VAR_32 = FUNC_13(VAR_31, VAR_25);
    if ((FUNC_17(VAR_32) & VAR_4) ==
        VAR_13)
     return (((void*)0));
   }
   if (VAR_36 == 2 && FUNC_17(VAR_31) != 0) {
    VAR_28 =
        FUNC_5(FUNC_17(VAR_31) & ~VAR_5);
    VAR_28->ref_count++;
   } else {




    VAR_28 = FUNC_9(VAR_24, VAR_37, ((void*)0));
    if (VAR_28 == ((void*)0))
     return (VAR_28);
   }
  }
  VAR_33 = (pt_entry_t *)FUNC_4(FUNC_8(VAR_28));
  VAR_33 = &VAR_33[FUNC_16(VAR_25)];
 } else {
  VAR_28 = ((void*)0);
  VAR_31 = FUNC_18(VAR_22, VAR_25, &VAR_36);
  FUNC_3(VAR_31 != ((void*)0),
      ("pmap_enter_quick_locked: Invalid page entry, va: 0x%lx",
       VAR_25));
  FUNC_3(VAR_36 == 2,
      ("pmap_enter_quick_locked: Invalid level %d", VAR_36));
  VAR_33 = FUNC_15(VAR_31, VAR_25);
 }




 if (FUNC_17(VAR_33) != 0) {
  if (VAR_28 != ((void*)0)) {
   VAR_28->ref_count--;
   VAR_28 = ((void*)0);
  }
  return (VAR_28);
 }




 if ((VAR_26->oflags & VAR_20) == 0 &&
     !FUNC_21(VAR_24, VAR_25, VAR_26, VAR_29)) {
  if (VAR_28 != ((void*)0)) {
   FUNC_7(&VAR_30);
   if (FUNC_22(VAR_24, VAR_25, VAR_28, &VAR_30)) {
    FUNC_12(VAR_24, VAR_25);
    FUNC_23(&VAR_30, 1);
   }
   VAR_28 = ((void*)0);
  }
  return (VAR_28);
 }




 FUNC_19(VAR_24, 1);

 VAR_35 = FUNC_8(VAR_26);
 VAR_34 = VAR_35 | VAR_3 | FUNC_1(VAR_26->md.pv_memattr) |
     FUNC_0(VAR_1) | VAR_14;
 if ((VAR_27 & VAR_19) == 0 || VAR_26->md.pv_memattr == VAR_11)
  VAR_34 |= VAR_9;
 if (VAR_25 < VAR_17)
  VAR_34 |= FUNC_0(VAR_2) | VAR_6;
 else
  VAR_34 |= VAR_8;
 if (VAR_24 != VAR_22)
  VAR_34 |= VAR_10;




 if ((VAR_26->oflags & VAR_20) == 0) {
  VAR_34 |= VAR_7;
  VAR_34 &= ~VAR_0;
 }


 if ((VAR_27 & VAR_19) && VAR_24 != VAR_22 &&
     VAR_26->md.pv_memattr == VAR_18)
  FUNC_10(FUNC_4(VAR_35), VAR_16);

 FUNC_20(VAR_33, VAR_34);
 FUNC_11(VAR_21);

 return (VAR_28);
}
