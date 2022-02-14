
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
typedef int pt_entry_t ;
typedef TYPE_3__* pmap_t ;
typedef int pd_entry_t ;
typedef int boolean_t ;
struct TYPE_19__ {int resident_count; } ;
struct TYPE_21__ {TYPE_1__ pm_stats; } ;
struct TYPE_20__ {scalar_t__ valid; int ref_count; } ;
struct TYPE_18__ {scalar_t__ td_pinned; } ;


 int FUNC_0 (int ,char*,int,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int* VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (struct spglist*) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_33 ;
 TYPE_14__* VAR_34 ;
 size_t FUNC_6 (int) ;
 int FUNC_7 (int*) ;
 TYPE_3__* VAR_35 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int*,int) ;
 int FUNC_11 (int*,int) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (TYPE_3__*,int,int) ;
 int FUNC_14 (int,int) ;
 int VAR_36 ;
 int FUNC_15 (TYPE_3__*,int,int) ;
 int FUNC_16 (TYPE_3__*,int*,int,struct spglist*) ;
 TYPE_2__* FUNC_17 (TYPE_3__*,int) ;
 int FUNC_18 (TYPE_3__*,int,int*,int) ;
 int VAR_37 ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int) ;
 TYPE_2__* FUNC_21 (int *,int,int) ;
 int FUNC_22 (struct spglist*,int) ;
 scalar_t__ FUNC_23 (int) ;
 scalar_t__ VAR_38 ;

__attribute__((used)) static boolean_t
FUNC_24(pmap_t VAR_39, pd_entry_t *VAR_40, vm_offset_t VAR_41)
{
 pd_entry_t VAR_42, VAR_43;
 pt_entry_t *VAR_44, VAR_45;
 vm_paddr_t VAR_46;
 vm_page_t VAR_47;
 struct spglist VAR_48;
 vm_offset_t VAR_49;

 FUNC_3(VAR_39, VAR_3);
 VAR_43 = *VAR_40;
 FUNC_1((VAR_43 & (VAR_14 | VAR_20)) == (VAR_14 | VAR_20),
     ("pmap_demote_pde: oldpde is missing PG_PS and/or PG_V"));
 if ((VAR_43 & VAR_8) == 0 || (VAR_47 = FUNC_17(VAR_39, VAR_41)) ==
     ((void*)0)) {
  FUNC_1((VAR_43 & VAR_21) == 0,
      ("pmap_demote_pde: page table page for a wired mapping"
      " is missing"));






  if ((VAR_43 & VAR_8) == 0 || (VAR_47 = FUNC_21(((void*)0),
      VAR_41 >> VAR_7, VAR_30 | VAR_31 |
      VAR_32)) == ((void*)0)) {
   FUNC_4(&VAR_48);
   VAR_49 = FUNC_20(VAR_41);
   FUNC_16(VAR_39, VAR_40, VAR_49, &VAR_48);
   if ((VAR_43 & VAR_10) == 0)
    FUNC_13(VAR_39, VAR_49, VAR_43);
   FUNC_22(&VAR_48, 1);
   FUNC_0(VAR_2, "pmap_demote_pde: failure for va %#x"
       " in pmap %p", VAR_41, VAR_39);
   return (VAR_0);
  }
  if (VAR_39 != VAR_35) {
   VAR_47->ref_count = VAR_4;
   VAR_39->pm_stats.resident_count++;
  }
 }
 VAR_46 = FUNC_5(VAR_47);







 if (VAR_39 == VAR_35)
  VAR_44 = &VAR_1[FUNC_6(FUNC_20(VAR_41))];
 else if (VAR_34->td_pinned > 0 && FUNC_19(&VAR_37)) {
  if ((*VAR_22 & VAR_9) != VAR_46) {
   *VAR_22 = VAR_46 | VAR_18 | VAR_20 | VAR_8 | VAR_11;



   FUNC_7(VAR_5);
   VAR_23++;
  } else







   VAR_26++;
  VAR_44 = VAR_5;
 } else {
  FUNC_8(&VAR_28);
  if ((*VAR_27 & VAR_9) != VAR_46) {
   *VAR_27 = VAR_46 | VAR_18 | VAR_20 | VAR_8 | VAR_11;
   FUNC_12(VAR_35,
       (vm_offset_t)VAR_6);
  }
  VAR_44 = VAR_6;
 }
 VAR_42 = VAR_46 | VAR_11 | VAR_8 | (VAR_43 & VAR_19) | VAR_18 | VAR_20;
 FUNC_1((VAR_43 & VAR_8) != 0,
     ("pmap_demote_pde: oldpde is missing PG_A"));
 FUNC_1((VAR_43 & (VAR_11 | VAR_18)) != VAR_18,
     ("pmap_demote_pde: oldpde is missing PG_M"));
 VAR_45 = VAR_43 & ~VAR_14;
 if ((VAR_45 & VAR_13) != 0)
  VAR_45 ^= VAR_13 | VAR_16;





 if (VAR_47->valid == 0)
  FUNC_11(VAR_44, VAR_45);

 FUNC_1((*VAR_44 & VAR_9) == (VAR_45 & VAR_9),
     ("pmap_demote_pde: firstpte and newpte map different physical"
     " addresses"));





 if ((*VAR_44 & VAR_17) != (VAR_45 & VAR_17))
  FUNC_11(VAR_44, VAR_45);
 if (VAR_38)
  FUNC_18(VAR_39, VAR_41, VAR_40, VAR_42);
 else if (VAR_39 == VAR_35)
  FUNC_14(VAR_41, VAR_42);
 else
  FUNC_10(VAR_40, VAR_42);
 if (VAR_44 == VAR_6)
  FUNC_9(&VAR_28);




 FUNC_12(VAR_39, (vm_offset_t)FUNC_23(VAR_41));
 if ((VAR_43 & VAR_12) != 0)
  FUNC_15(VAR_39, VAR_41, VAR_43 & VAR_15);

 VAR_36++;
 FUNC_0(VAR_2, "pmap_demote_pde: success for va %#x"
     " in pmap %p", VAR_41, VAR_39);
 return (VAR_29);
}
