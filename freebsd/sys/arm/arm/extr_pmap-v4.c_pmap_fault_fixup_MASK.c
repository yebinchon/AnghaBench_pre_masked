
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int u_long ;
typedef size_t u_int ;
struct TYPE_8__ {int pvh_attrs; } ;
struct vm_page {TYPE_1__ md; } ;
struct pv_entry {int pv_flags; } ;
struct l2_dtable {struct l2_bucket* l2_bucket; } ;
struct l2_bucket {int* l2b_kva; int l2b_phys; } ;
typedef int pt_entry_t ;
typedef TYPE_3__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_10__ {TYPE_2__* pm_l1; int pm_domain; struct l2_dtable** pm_l2; } ;
struct TYPE_9__ {int* l1_kva; int l1_domain_use_count; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 size_t FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (size_t) ;
 size_t FUNC_4 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vm_page* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 size_t FUNC_11 (scalar_t__) ;
 int FUNC_12 (int) ;
 int VAR_10 ;
 struct pv_entry* FUNC_13 (struct vm_page*,TYPE_3__*,scalar_t__) ;
 int FUNC_14 (char*,...) ;
 int VAR_11 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ VAR_12 ;
 int FUNC_17 (struct vm_page*) ;

int
FUNC_18(pmap_t VAR_13, vm_offset_t VAR_14, vm_prot_t VAR_15, int VAR_16)
{
 struct l2_dtable *VAR_17;
 struct l2_bucket *VAR_18;
 pd_entry_t *VAR_19, VAR_20;
 pt_entry_t *VAR_21, VAR_22;
 vm_paddr_t VAR_23;
 u_int VAR_24;
 int VAR_25 = 0;

 VAR_24 = FUNC_2(VAR_14);
 FUNC_15(&VAR_11);
 FUNC_6(VAR_13);
 VAR_17 = VAR_13->pm_l2[FUNC_4(VAR_24)];
 if (VAR_17 == ((void*)0))
  goto out;




 VAR_18 = &VAR_17->l2_bucket[FUNC_3(VAR_24)];
 if (VAR_18->l2b_kva == ((void*)0))
  goto out;




 VAR_21 = &VAR_18->l2b_kva[FUNC_11(VAR_14)];
 VAR_22 = *VAR_21;
 if (VAR_22 == 0)
  goto out;




 if (VAR_16 && (VAR_22 & VAR_2) == 0)
  goto out;
 if (VAR_14 == VAR_12)
  goto out;

 VAR_23 = FUNC_12(VAR_22);

 if ((VAR_15 & VAR_9) && (VAR_22 & VAR_3) == 0) {




  struct pv_entry *VAR_26;
  struct vm_page *VAR_27;


  if ((VAR_27 = FUNC_5(VAR_23)) == ((void*)0)) {
   goto out;
  }


  VAR_26 = FUNC_13(VAR_27, VAR_13, VAR_14);
  if (VAR_26 == ((void*)0)) {
   goto out;
  }
  if ((VAR_26->pv_flags & VAR_8) == 0) {
   goto out;
  }

  VAR_27->md.pvh_attrs |= VAR_7 | VAR_6;
  FUNC_17(VAR_27);
  VAR_26->pv_flags |= VAR_7 | VAR_6;
  *VAR_21 = (VAR_22 & ~VAR_5) | VAR_1 | VAR_3;
  FUNC_8(VAR_21);
  VAR_25 = 1;
 } else
 if ((VAR_22 & VAR_5) == VAR_4) {




  struct pv_entry *VAR_28;
  struct vm_page *VAR_29;


  if ((VAR_29 = FUNC_5(VAR_23)) == ((void*)0))
   goto out;


  VAR_28 = FUNC_13(VAR_29, VAR_13, VAR_14);
  if (VAR_28 == ((void*)0))
   goto out;

  VAR_29->md.pvh_attrs |= VAR_7;
  VAR_28->pv_flags |= VAR_7;


  *VAR_21 = (VAR_22 & ~VAR_5) | VAR_1;
  FUNC_8(VAR_21);
  VAR_25 = 1;
 }





 VAR_19 = &VAR_13->pm_l1->l1_kva[VAR_24];
 VAR_20 = VAR_18->l2b_phys | FUNC_1(VAR_13->pm_domain) | VAR_0;
 if (*VAR_19 != VAR_20) {
  *VAR_19 = VAR_20;
  FUNC_8(VAR_19);
  VAR_25 = 1;
 }
 FUNC_10(VAR_14);
 FUNC_9();

 VAR_25 = 1;

out:
 FUNC_16(&VAR_11);
 FUNC_7(VAR_13);
 return (VAR_25);
}
