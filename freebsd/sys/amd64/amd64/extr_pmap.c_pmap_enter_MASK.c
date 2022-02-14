
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_50__ TYPE_4__ ;
typedef struct TYPE_49__ TYPE_3__ ;
typedef struct TYPE_48__ TYPE_30__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_29__ ;
typedef struct TYPE_45__ TYPE_1__ ;
typedef struct TYPE_44__ TYPE_13__ ;


typedef int vm_prot_t ;
typedef TYPE_2__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int u_int ;
struct rwlock {int dummy; } ;
typedef TYPE_3__* pv_entry_t ;
typedef int pt_entry_t ;
typedef TYPE_4__* pmap_t ;
typedef int pd_entry_t ;
typedef scalar_t__ int8_t ;
typedef int boolean_t ;
struct TYPE_45__ {int wired_count; } ;
struct TYPE_50__ {scalar_t__ pm_type; TYPE_1__ pm_stats; } ;
struct TYPE_49__ {int pv_va; } ;
struct TYPE_48__ {int clean_sva; int clean_eva; } ;
struct TYPE_44__ {int pv_gen; int pv_list; int pat_mode; } ;
struct TYPE_47__ {int oflags; scalar_t__ psind; scalar_t__ ref_count; int aflags; int flags; TYPE_13__ md; } ;
struct TYPE_46__ {int pv_list; } ;


 int FUNC_0 (struct rwlock**,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__* FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_3__*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 TYPE_2__* FUNC_9 (TYPE_4__*,int ,struct rwlock**) ;
 int FUNC_10 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_11 (TYPE_4__*,struct rwlock**) ;
 TYPE_4__* VAR_24 ;
 TYPE_30__ VAR_25 ;
 TYPE_29__* FUNC_12 (int) ;
 int FUNC_13 (char*,int) ;
 int VAR_26 ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_16 (TYPE_4__*,int*,int,struct rwlock**) ;
 int FUNC_17 (TYPE_4__*,int,int,int,TYPE_2__*,struct rwlock**) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*,int) ;
 int FUNC_20 (TYPE_4__*) ;
 int* FUNC_21 (TYPE_4__*,int) ;
 int FUNC_22 (int) ;
 int* FUNC_23 (int*,int) ;
 int FUNC_24 (TYPE_4__*,int) ;
 int FUNC_25 (TYPE_4__*,int*,int,struct rwlock**) ;
 scalar_t__ FUNC_26 (TYPE_4__*) ;
 TYPE_3__* FUNC_27 (TYPE_13__*,TYPE_4__*,int) ;
 int FUNC_28 (TYPE_4__*,int) ;
 int FUNC_29 (TYPE_4__*) ;
 int FUNC_30 (TYPE_4__*) ;
 int FUNC_31 (int*) ;
 int FUNC_32 (int*,int) ;
 int FUNC_33 (int*,int) ;
 int VAR_27 ;
 int FUNC_34 (struct rwlock*) ;
 int FUNC_35 (int) ;
 int FUNC_36 (TYPE_2__*,int) ;
 int FUNC_37 (TYPE_2__*,int) ;
 int FUNC_38 (TYPE_2__*) ;
 scalar_t__ FUNC_39 (TYPE_2__*) ;

int
FUNC_40(pmap_t VAR_28, vm_offset_t VAR_29, vm_page_t VAR_30, vm_prot_t VAR_31,
    u_int VAR_32, int8_t VAR_33)
{
 struct rwlock *VAR_34;
 pd_entry_t *VAR_35;
 pt_entry_t *VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
 pt_entry_t VAR_42, VAR_43;
 pv_entry_t VAR_44;
 vm_paddr_t VAR_45, VAR_46;
 vm_page_t VAR_47, VAR_48;
 int VAR_49;
 boolean_t VAR_50;

 VAR_38 = FUNC_14(VAR_28);
 VAR_37 = FUNC_18(VAR_28);
 VAR_39 = FUNC_20(VAR_28);
 VAR_41 = FUNC_30(VAR_28);
 VAR_40 = FUNC_29(VAR_28);

 VAR_29 = FUNC_35(VAR_29);
 FUNC_1(VAR_29 <= VAR_20, ("pmap_enter: toobig"));
 FUNC_1(VAR_29 < VAR_18 || VAR_29 >= VAR_17,
     ("pmap_enter: invalid to pmap_enter page table pages (va: 0x%lx)",
     VAR_29));
 FUNC_1((VAR_30->oflags & VAR_23) != 0 || VAR_29 < VAR_25.clean_sva ||
     VAR_29 >= VAR_25.clean_eva,
     ("pmap_enter: managed mapping within the clean submap"));
 if ((VAR_30->oflags & VAR_23) == 0)
  FUNC_7(VAR_30);
 FUNC_1((VAR_32 & VAR_14) == 0,
     ("pmap_enter: flags %u has reserved bits set", VAR_32));
 VAR_46 = FUNC_8(VAR_30);
 VAR_42 = (pt_entry_t)(VAR_46 | VAR_38 | VAR_41);
 if ((VAR_32 & VAR_22) != 0)
  VAR_42 |= VAR_39;
 if ((VAR_31 & VAR_22) != 0)
  VAR_42 |= VAR_40;
 FUNC_1((VAR_42 & (VAR_39 | VAR_40)) != VAR_39,
     ("pmap_enter: flags includes VM_PROT_WRITE but prot doesn't"));
 if ((VAR_31 & VAR_21) == 0)
  VAR_42 |= VAR_26;
 if ((VAR_32 & VAR_15) != 0)
  VAR_42 |= VAR_12;
 if (VAR_29 < VAR_19)
  VAR_42 |= VAR_11;
 if (VAR_28 == VAR_24)
  VAR_42 |= VAR_37;
 VAR_42 |= FUNC_15(VAR_28, VAR_30->md.pat_mode, VAR_33 > 0);






 if ((VAR_30->oflags & VAR_23) != 0) {
  if ((VAR_42 & VAR_40) != 0)
   VAR_42 |= VAR_39;
 } else
  VAR_42 |= VAR_8;

 VAR_34 = ((void*)0);
 FUNC_3(VAR_28);
 if (VAR_33 == 1) {

  FUNC_1((VAR_29 & VAR_3) == 0, ("pmap_enter: va unaligned"));
  FUNC_1(VAR_30->psind > 0, ("pmap_enter: m->psind < psind"));
  VAR_49 = FUNC_17(VAR_28, VAR_29, VAR_42 | VAR_10, VAR_32, VAR_30, &VAR_34);
  goto out;
 }
 VAR_47 = ((void*)0);





retry:
 VAR_35 = FUNC_21(VAR_28, VAR_29);
 if (VAR_35 != ((void*)0) && (*VAR_35 & VAR_41) != 0 && ((*VAR_35 & VAR_10) == 0 ||
     FUNC_16(VAR_28, VAR_35, VAR_29, &VAR_34))) {
  VAR_36 = FUNC_23(VAR_35, VAR_29);
  if (VAR_29 < VAR_19 && VAR_47 == ((void*)0)) {
   VAR_47 = FUNC_2(*VAR_35 & VAR_7);
   VAR_47->ref_count++;
  }
 } else if (VAR_29 < VAR_19) {




  VAR_50 = (VAR_32 & VAR_13) != 0;
  VAR_47 = FUNC_9(VAR_28, FUNC_22(VAR_29),
      VAR_50 ? ((void*)0) : &VAR_34);
  if (VAR_47 == ((void*)0) && VAR_50) {
   VAR_49 = VAR_0;
   goto out;
  }
  goto retry;
 } else
  FUNC_13("pmap_enter: invalid page directory va=%#lx", VAR_29);

 VAR_43 = *VAR_36;
 VAR_44 = ((void*)0);
 if (VAR_29 < VAR_19 && VAR_28->pm_type == VAR_16)
  VAR_42 |= FUNC_24(VAR_28, VAR_29);




 if ((VAR_43 & VAR_41) != 0) {






  if ((VAR_42 & VAR_12) != 0 && (VAR_43 & VAR_12) == 0)
   VAR_28->pm_stats.wired_count++;
  else if ((VAR_42 & VAR_12) == 0 && (VAR_43 & VAR_12) != 0)
   VAR_28->pm_stats.wired_count--;




  if (VAR_47 != ((void*)0)) {
   VAR_47->ref_count--;
   FUNC_1(VAR_47->ref_count > 0,
       ("pmap_enter: missing reference to page table page,"
        " va: 0x%lx", VAR_29));
  }




  VAR_45 = VAR_43 & VAR_7;
  if (VAR_45 == VAR_46) {



   if ((VAR_43 & VAR_8) != 0 &&
       (VAR_42 & VAR_40) != 0)
    FUNC_37(VAR_30, VAR_5);
   if (((VAR_43 ^ VAR_42) & ~(VAR_39 | VAR_38)) == 0)
    goto unchanged;
   goto validate;
  }
  VAR_43 = FUNC_31(VAR_36);
  FUNC_1((VAR_43 & VAR_7) == VAR_45,
      ("pmap_enter: unexpected pa update for %#lx", VAR_29));
  if ((VAR_43 & VAR_8) != 0) {
   VAR_48 = FUNC_2(VAR_45);






   if ((VAR_43 & (VAR_39 | VAR_40)) == (VAR_39 | VAR_40))
    FUNC_38(VAR_48);
   if ((VAR_43 & VAR_38) != 0)
    FUNC_37(VAR_48, VAR_4);
   FUNC_0(&VAR_34, VAR_45);
   VAR_44 = FUNC_27(&VAR_48->md, VAR_28, VAR_29);
   FUNC_1(VAR_44 != ((void*)0),
       ("pmap_enter: no PV entry for %#lx", VAR_29));
   if ((VAR_42 & VAR_8) == 0)
    FUNC_10(VAR_28, VAR_44);
   if ((VAR_48->aflags & VAR_5) != 0 &&
       FUNC_5(&VAR_48->md.pv_list) &&
       ((VAR_48->flags & VAR_6) != 0 ||
       FUNC_5(&FUNC_12(VAR_45)->pv_list)))
    FUNC_36(VAR_48, VAR_5);
  }
  if ((VAR_43 & VAR_38) != 0)
   FUNC_19(VAR_28, VAR_29);
  VAR_43 = 0;
 } else {



  if ((VAR_42 & VAR_12) != 0)
   VAR_28->pm_stats.wired_count++;
  FUNC_28(VAR_28, 1);
 }




 if ((VAR_42 & VAR_8) != 0) {
  if (VAR_44 == ((void*)0)) {
   VAR_44 = FUNC_11(VAR_28, &VAR_34);
   VAR_44->pv_va = VAR_29;
  }
  FUNC_0(&VAR_34, VAR_46);
  FUNC_6(&VAR_30->md.pv_list, VAR_44, VAR_27);
  VAR_30->md.pv_gen++;
  if ((VAR_42 & VAR_40) != 0)
   FUNC_37(VAR_30, VAR_5);
 }




 if ((VAR_43 & VAR_41) != 0) {
validate:
  VAR_43 = FUNC_32(VAR_36, VAR_42);
  FUNC_1((VAR_43 & VAR_7) == VAR_46,
      ("pmap_enter: unexpected pa update for %#lx", VAR_29));
  if ((VAR_42 & VAR_39) == 0 && (VAR_43 & (VAR_39 | VAR_40)) ==
      (VAR_39 | VAR_40)) {
   if ((VAR_43 & VAR_8) != 0)
    FUNC_38(VAR_30);






  } else if ((VAR_43 & VAR_9) != 0 || (VAR_42 & VAR_9) == 0) {



   goto unchanged;
  }
  if ((VAR_43 & VAR_38) != 0)
   FUNC_19(VAR_28, VAR_29);
 } else
  FUNC_33(VAR_36, VAR_42);

unchanged:
 VAR_49 = VAR_1;
out:
 if (VAR_34 != ((void*)0))
  FUNC_34(VAR_34);
 FUNC_4(VAR_28);
 return (VAR_49);
}
