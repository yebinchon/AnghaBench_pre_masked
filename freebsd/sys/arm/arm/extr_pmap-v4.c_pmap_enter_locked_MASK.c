
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_19__ ;


typedef int vm_prot_t ;
typedef struct vm_page* vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int u_int ;
struct TYPE_27__ {int pvh_attrs; scalar_t__ pv_memattr; int pv_kva; int pv_list; } ;
struct vm_page {int oflags; TYPE_3__ md; int object; } ;
struct pv_entry {int pv_flags; } ;
struct l2_bucket {int* l2b_kva; int l2b_phys; int l2b_occupancy; } ;
typedef int pt_entry_t ;
typedef TYPE_4__* pmap_t ;
typedef int pd_entry_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_29__ {scalar_t__ pv_pa; } ;
struct TYPE_25__ {int resident_count; } ;
struct TYPE_28__ {int pm_domain; TYPE_2__* pm_l1; TYPE_1__ pm_stats; } ;
struct TYPE_26__ {int* l1_kva; } ;
struct TYPE_24__ {int clean_sva; int clean_eva; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 size_t FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 struct vm_page* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_21 ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct vm_page*) ;
 scalar_t__ FUNC_14 (struct vm_page*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int,int ) ;
 TYPE_4__* VAR_28 ;
 TYPE_19__ VAR_29 ;
 size_t FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int) ;
 struct l2_bucket* FUNC_20 (TYPE_4__*,int) ;
 int FUNC_21 (TYPE_4__*,int,int ,int ,int) ;
 int FUNC_22 (struct vm_page*,struct pv_entry*,TYPE_4__*,int,int) ;
 int FUNC_23 (struct vm_page*,TYPE_4__*,int) ;
 int FUNC_24 (struct pv_entry*) ;
 struct l2_bucket* FUNC_25 (TYPE_4__*,int) ;
 struct pv_entry* FUNC_26 () ;
 struct l2_bucket* FUNC_27 (TYPE_4__*,int) ;
 int FUNC_28 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_29 (TYPE_4__*) ;
 int FUNC_30 (struct vm_page*,TYPE_4__*,int,int,int) ;
 struct pv_entry* FUNC_31 (struct vm_page*,TYPE_4__*,int) ;
 int FUNC_32 (TYPE_4__*,int) ;
 int FUNC_33 (TYPE_4__*,int) ;
 int FUNC_34 (char*,int,int,int,int,int) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_35 (int *,int ) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *) ;
 TYPE_5__ VAR_32 ;
 int VAR_33 ;
 int FUNC_38 (struct vm_page*,int ) ;
 int FUNC_39 (struct vm_page*) ;
 int FUNC_40 (int *) ;

__attribute__((used)) static int
FUNC_41(pmap_t VAR_34, vm_offset_t VAR_35, vm_page_t VAR_36, vm_prot_t VAR_37,
    u_int VAR_38)
{
 struct l2_bucket *VAR_39 = ((void*)0);
 struct vm_page *VAR_40;
 struct pv_entry *VAR_41 = ((void*)0);
 pt_entry_t *VAR_42, VAR_43, VAR_44;
 u_int VAR_45;
 u_int VAR_46;
 vm_paddr_t VAR_47;

 FUNC_5(VAR_34);
 FUNC_35(&VAR_31, VAR_21);
 if (VAR_35 == VAR_33) {
  VAR_47 = VAR_32.pv_pa;
  VAR_36 = ((void*)0);
 } else {
  if ((VAR_36->oflags & VAR_27) == 0) {
   if ((VAR_38 & VAR_12) == 0)
    FUNC_13(VAR_36);
   else
    FUNC_12(VAR_36->object);
  }
  VAR_47 = FUNC_14(VAR_36);
 }
 VAR_45 = 0;
 if (VAR_37 & VAR_26)
  VAR_45 |= VAR_20;
 if (VAR_37 & VAR_25)
  VAR_45 |= VAR_14;
 if ((VAR_38 & VAR_13) != 0)
  VAR_45 |= VAR_19;
 FUNC_3(1, FUNC_34("pmap_enter: pmap = %08x, va = %08x, m = %08x, prot = %x, "
     "flags = %x\n", (uint32_t) VAR_34, VAR_35, (uint32_t) VAR_36, VAR_37, VAR_38));

 if (VAR_34 == VAR_28) {
  VAR_39 = FUNC_25(VAR_34, VAR_35);
  if (VAR_39 == ((void*)0))
   VAR_39 = FUNC_27(VAR_34, VAR_35);
 } else {
do_l2b_alloc:
  VAR_39 = FUNC_20(VAR_34, VAR_35);
  if (VAR_39 == ((void*)0)) {
   if ((VAR_38 & VAR_11) == 0) {
    FUNC_7(VAR_34);
    FUNC_37(&VAR_31);
    FUNC_40(((void*)0));
    FUNC_36(&VAR_31);
    FUNC_6(VAR_34);
    goto do_l2b_alloc;
   }
   return (VAR_0);
  }
 }

 VAR_42 = &VAR_39->l2b_kva[FUNC_17(VAR_35)];

 VAR_44 = *VAR_42;
 VAR_43 = VAR_47;
 VAR_46 = 0;
 if (VAR_44) {





  if (FUNC_18(VAR_44) != VAR_47)
   VAR_40 = FUNC_4(FUNC_18(VAR_44));
  else
   VAR_40 = VAR_36;
 } else
  VAR_40 = ((void*)0);

 if ((VAR_37 & (VAR_24)) ||
     (!VAR_36 || VAR_36->md.pvh_attrs & VAR_17)) {







  VAR_43 |= VAR_3;

  VAR_45 |= VAR_17;

  if (VAR_36 && ((VAR_37 & VAR_26) != 0 ||
      (VAR_36->md.pvh_attrs & VAR_15))) {






   VAR_45 |= VAR_15;
   if (!(VAR_36->md.pvh_attrs & VAR_15))
    FUNC_39(VAR_36);
  }
  if (VAR_36 && VAR_44)
   FUNC_38(VAR_36, VAR_9);
 } else {



  VAR_43 |= VAR_6;
 }

 if (VAR_37 & VAR_26) {
  VAR_43 |= VAR_5;
  if (VAR_36 != ((void*)0) &&
      (VAR_36->oflags & VAR_27) == 0)
   FUNC_38(VAR_36, VAR_10);
 }
 if (VAR_36->md.pv_memattr != VAR_23)
  VAR_43 |= VAR_30;
 if (VAR_36 && VAR_36 == VAR_40) {



  VAR_46 = FUNC_30(VAR_36, VAR_34, VAR_35,
      VAR_20 | VAR_14 | VAR_19 |
      VAR_15 | VAR_17, VAR_45);





  if (FUNC_29(VAR_34) &&
      (VAR_46 & VAR_16) == 0 &&
      (VAR_44 & VAR_5) != 0 &&
      (VAR_37 & VAR_26) == 0 &&
      (VAR_44 & VAR_7) != VAR_6) {
   FUNC_15(VAR_35, VAR_8);
   FUNC_16(VAR_35, VAR_8);
  }
 } else {




  if (VAR_40) {





   if ((VAR_41 = FUNC_31(VAR_40, VAR_34, VAR_35))) {




       VAR_46 = VAR_41->pv_flags;






       if ((VAR_46 & VAR_16) == 0 && FUNC_19(VAR_44)) {
    if (FUNC_9(VAR_46)) {
     FUNC_28(VAR_34, VAR_35,
         VAR_8);
    } else
     if (FUNC_10(VAR_46)) {
      FUNC_21(VAR_34, VAR_35,
          VAR_8, VAR_22,
          (VAR_46 & VAR_20) == 0);
     }
       }





       if (VAR_36 && (VAR_36->oflags & VAR_27) &&
      !VAR_36->md.pv_kva &&
     FUNC_11(&VAR_36->md.pv_list)) {
    FUNC_24(VAR_41);
    VAR_41 = ((void*)0);
       }
   } else if (VAR_36 &&
     (!(VAR_36->oflags & VAR_27) || VAR_36->md.pv_kva ||
      !FUNC_11(&VAR_36->md.pv_list)))
    VAR_41 = FUNC_26();
  } else if (VAR_36 &&
      (!(VAR_36->oflags & VAR_27) || VAR_36->md.pv_kva ||
      !FUNC_11(&VAR_36->md.pv_list)))
   VAR_41 = FUNC_26();

  if (VAR_36) {
   if ((VAR_36->oflags & VAR_27)) {
    if (!FUNC_11(&VAR_36->md.pv_list) ||
        VAR_36->md.pv_kva) {
     FUNC_0(VAR_41 != ((void*)0), ("No pv"));
     VAR_45 |= VAR_18;
     FUNC_22(VAR_36, VAR_41, VAR_34, VAR_35, VAR_45);
    } else
     VAR_36->md.pv_kva = VAR_35;
   } else {
    FUNC_0(VAR_35 < VAR_29.clean_sva ||
        VAR_35 >= VAR_29.clean_eva,
  ("pmap_enter: managed mapping within the clean submap"));
     FUNC_0(VAR_41 != ((void*)0), ("No pv"));
     FUNC_22(VAR_36, VAR_41, VAR_34, VAR_35, VAR_45);
   }
  }
 }



 if (VAR_34 != VAR_28 && VAR_35 != VAR_33) {
  VAR_43 |= VAR_4;
 }




 if (VAR_44 == 0) {
  VAR_39->l2b_occupancy++;
  VAR_34->pm_stats.resident_count++;
 }





 if (VAR_43 != VAR_44) {
  boolean_t VAR_48 = FUNC_29(VAR_34);

  *VAR_42 = VAR_43;
  if (VAR_48) {




   FUNC_8(VAR_42);
   if (FUNC_2(VAR_35) != FUNC_2(VAR_33) &&
       FUNC_19(VAR_43)) {






    pd_entry_t *VAR_49, VAR_50;

    VAR_49 = &VAR_34->pm_l1->l1_kva[FUNC_2(VAR_35)];
    VAR_50 = VAR_39->l2b_phys | FUNC_1(VAR_34->pm_domain) |
        VAR_2;
    if (*VAR_49 != VAR_50) {
     *VAR_49 = VAR_50;
     FUNC_8(VAR_49);
    }
   }
  }

  if (FUNC_9(VAR_46))
   FUNC_33(VAR_34, VAR_35);
  else if (FUNC_10(VAR_46))
   FUNC_32(VAR_34, VAR_35);


  if (VAR_36)
   FUNC_23(VAR_36, VAR_34, VAR_35);
 }
 return (VAR_1);
}
