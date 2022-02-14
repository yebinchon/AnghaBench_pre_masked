
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef size_t u_short ;
struct l2_dtable {TYPE_2__* l2_bucket; } ;
typedef int pt_entry_t ;
typedef TYPE_3__* pmap_t ;
typedef int pd_entry_t ;
typedef int boolean_t ;
struct TYPE_7__ {struct l2_dtable** pm_l2; TYPE_1__* pm_l1; } ;
struct TYPE_6__ {int * l2b_kva; } ;
struct TYPE_5__ {int * l1_kva; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;

boolean_t
FUNC_5(pmap_t VAR_2, vm_offset_t VAR_3, pd_entry_t **VAR_4, pt_entry_t **VAR_5)
{
 struct l2_dtable *VAR_6;
 pd_entry_t *VAR_7, VAR_8;
 pt_entry_t *VAR_9;
 u_short VAR_10;

 if (VAR_2->pm_l1 == ((void*)0))
  return (VAR_0);

 VAR_10 = FUNC_0(VAR_3);
 *VAR_4 = VAR_7 = &VAR_2->pm_l1->l1_kva[VAR_10];
 VAR_8 = *VAR_7;

 if (FUNC_3(VAR_8)) {
  *VAR_5 = ((void*)0);
  return (VAR_1);
 }

 if (VAR_2->pm_l2 == ((void*)0))
  return (VAR_0);

 VAR_6 = VAR_2->pm_l2[FUNC_2(VAR_10)];

 if (VAR_6 == ((void*)0) ||
     (VAR_9 = VAR_6->l2_bucket[FUNC_1(VAR_10)].l2b_kva) == ((void*)0)) {
  return (VAR_0);
 }

 *VAR_5 = &VAR_9[FUNC_4(VAR_3)];
 return (VAR_1);
}
