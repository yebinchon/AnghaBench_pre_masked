
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef size_t u_int ;
struct l2_dtable {TYPE_2__* l2_bucket; } ;
typedef int pt_entry_t ;
typedef TYPE_3__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_9__ {struct l2_dtable** pm_l2; TYPE_1__* pm_l1; } ;
struct TYPE_8__ {int* l2b_kva; } ;
struct TYPE_7__ {int* l1_kva; } ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* VAR_11 ;
 scalar_t__ FUNC_5 (int) ;
 size_t FUNC_6 (int) ;

__attribute__((used)) static vm_paddr_t
FUNC_7(pmap_t VAR_12, vm_offset_t VAR_13)
{
 struct l2_dtable *VAR_14;
 pd_entry_t VAR_15;
 pt_entry_t *VAR_16, VAR_17;
 vm_paddr_t VAR_18;
 u_int VAR_19;

 if (VAR_12 != VAR_11)
  FUNC_4(VAR_12);
 VAR_19 = FUNC_1(VAR_13);
 VAR_15 = VAR_12->pm_l1->l1_kva[VAR_19];
 if (FUNC_5(VAR_15)) {



  FUNC_0(VAR_12 == VAR_11, ("unexpected section"));

  if (VAR_15 & VAR_4)
   VAR_18 = (VAR_15 & VAR_0) | (VAR_13 & VAR_1);
  else
   VAR_18 = (VAR_15 & VAR_2) | (VAR_13 & VAR_3);
 } else {





  VAR_14 = VAR_12->pm_l2[FUNC_3(VAR_19)];
  if (VAR_14 == ((void*)0) ||
      (VAR_16 = VAR_14->l2_bucket[FUNC_2(VAR_19)].l2b_kva) == ((void*)0))
   return (0);
  VAR_17 = VAR_16[FUNC_6(VAR_13)];
  if (VAR_17 == 0)
   return (0);
  if ((VAR_17 & VAR_10) == VAR_9)
   VAR_18 = (VAR_17 & VAR_5) | (VAR_13 & VAR_6);
  else
   VAR_18 = (VAR_17 & VAR_7) | (VAR_13 & VAR_8);
 }
 return (VAR_18);
}
