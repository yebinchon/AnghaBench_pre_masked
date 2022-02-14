
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef size_t u_int ;
struct l2_dtable {TYPE_2__* l2_bucket; } ;
typedef int pt_entry_t ;
typedef int pt2_entry_t ;
typedef int pd_entry_t ;
struct TYPE_6__ {struct l2_dtable** pm_l2; TYPE_1__* pm_l1; } ;
struct TYPE_5__ {int* l2b_kva; } ;
struct TYPE_4__ {int* l1_kva; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__* VAR_15 ;
 scalar_t__ FUNC_4 (int) ;
 size_t FUNC_5 (int) ;

vm_paddr_t
FUNC_6(vm_offset_t VAR_16, pt2_entry_t *VAR_17)
{
 struct l2_dtable *VAR_18;
 pd_entry_t VAR_19;
 pt_entry_t *VAR_20, VAR_21;
 vm_paddr_t VAR_22;
 u_int VAR_23;

 VAR_23 = FUNC_0(VAR_16);
 VAR_19 = VAR_15->pm_l1->l1_kva[VAR_23];
 if (FUNC_4(VAR_19)) {
  if (VAR_19 & VAR_4)
   VAR_22 = (VAR_19 & VAR_0) | (VAR_16 & VAR_1);
  else
   VAR_22 = (VAR_19 & VAR_2) | (VAR_16 & VAR_3);
  VAR_21 = VAR_9 | VAR_22 |
      FUNC_3(VAR_12, VAR_13 | VAR_14);
 } else {
  VAR_18 = VAR_15->pm_l2[FUNC_2(VAR_23)];
  if (VAR_18 == ((void*)0) ||
      (VAR_20 = VAR_18->l2_bucket[FUNC_1(VAR_23)].l2b_kva) == ((void*)0)) {
   VAR_21 = 0;
   VAR_22 = 0;
   goto out;
  }
  VAR_21 = VAR_20[FUNC_5(VAR_16)];
  if (VAR_21 == 0) {
   VAR_22 = 0;
   goto out;
  }
  if ((VAR_21 & VAR_11) == VAR_10)
   VAR_22 = (VAR_21 & VAR_5) | (VAR_16 & VAR_6);
  else
   VAR_22 = (VAR_21 & VAR_7) | (VAR_16 & VAR_8);
 }
out:
 if (VAR_17 != ((void*)0))
  *VAR_17 = VAR_21;
 return (VAR_22);
}
