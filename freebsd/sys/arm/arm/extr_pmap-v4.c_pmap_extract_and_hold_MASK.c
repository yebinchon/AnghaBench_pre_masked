
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int * vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef size_t u_int ;
struct l2_dtable {TYPE_2__* l2_bucket; } ;
typedef int pt_entry_t ;
typedef TYPE_3__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_10__ {struct l2_dtable** pm_l2; TYPE_1__* pm_l1; } ;
struct TYPE_9__ {int* l2b_kva; } ;
struct TYPE_8__ {int* l1_kva; } ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_13 ;
 TYPE_3__* VAR_14 ;
 scalar_t__ FUNC_7 (int) ;
 size_t FUNC_8 (int) ;
 int FUNC_9 (int *) ;

vm_page_t
FUNC_10(pmap_t VAR_15, vm_offset_t VAR_16, vm_prot_t VAR_17)
{
 struct l2_dtable *VAR_18;
 pd_entry_t VAR_19;
 pt_entry_t *VAR_20, VAR_21;
 vm_paddr_t VAR_22;
 vm_page_t VAR_23;
 u_int VAR_24;

 VAR_24 = FUNC_1(VAR_16);
 VAR_23 = ((void*)0);

  FUNC_5(VAR_15);
 VAR_19 = VAR_15->pm_l1->l1_kva[VAR_24];
 if (FUNC_7(VAR_19)) {



  FUNC_0(VAR_15 == VAR_14, ("huh"));

  if (VAR_19 & VAR_5)
   VAR_22 = (VAR_19 & VAR_0) | (VAR_16 & VAR_1);
  else
   VAR_22 = (VAR_19 & VAR_2) | (VAR_16 & VAR_3);
  if (VAR_19 & VAR_4 || (VAR_17 & VAR_13) == 0) {
   VAR_23 = FUNC_4(VAR_22);
   if (!FUNC_9(VAR_23))
    VAR_23 = ((void*)0);
  }
 } else {





  VAR_18 = VAR_15->pm_l2[FUNC_3(VAR_24)];

  if (VAR_18 == ((void*)0) ||
      (VAR_20 = VAR_18->l2_bucket[FUNC_2(VAR_24)].l2b_kva) == ((void*)0)) {
    FUNC_6(VAR_15);
   return (((void*)0));
  }

  VAR_20 = &VAR_20[FUNC_8(VAR_16)];
  VAR_21 = *VAR_20;

  if (VAR_21 == 0) {
    FUNC_6(VAR_15);
   return (((void*)0));
  }
  if (VAR_21 & VAR_10 || (VAR_17 & VAR_13) == 0) {
   if ((VAR_21 & VAR_12) == VAR_11)
    VAR_22 = (VAR_21 & VAR_6) | (VAR_16 & VAR_7);
   else
    VAR_22 = (VAR_21 & VAR_8) | (VAR_16 & VAR_9);
   VAR_23 = FUNC_4(VAR_22);
   if (!FUNC_9(VAR_23))
    VAR_23 = ((void*)0);
  }
 }
  FUNC_6(VAR_15);
 return (VAR_23);
}
