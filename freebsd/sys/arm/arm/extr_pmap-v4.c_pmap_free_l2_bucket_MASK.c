
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_short ;
typedef scalar_t__ u_int ;
struct l2_dtable {scalar_t__ l2_occupancy; } ;
struct l2_bucket {scalar_t__ l2b_occupancy; size_t l2b_l1idx; int * l2b_kva; } ;
typedef int pt_entry_t ;
typedef TYPE_2__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_7__ {struct l2_dtable** pm_l2; int pm_domain; TYPE_1__* pm_l1; } ;
struct TYPE_6__ {int* l1_kva; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int*) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,...) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,struct l2_dtable*) ;

__attribute__((used)) static void
FUNC_6(pmap_t VAR_5, struct l2_bucket *VAR_6, u_int VAR_7)
{
 struct l2_dtable *VAR_8;
 pd_entry_t *VAR_9, VAR_10;
 pt_entry_t *VAR_11;
 u_short VAR_12;






 VAR_6->l2b_occupancy -= VAR_7;
 if (VAR_6->l2b_occupancy > 0 || VAR_5 == VAR_3)
  return;






 VAR_12 = VAR_6->l2b_l1idx;
 VAR_11 = VAR_6->l2b_kva;
 VAR_6->l2b_kva = ((void*)0);

 VAR_9 = &VAR_5->pm_l1->l1_kva[VAR_12];





 VAR_10 = *VAR_9 & (VAR_2 | VAR_0);
 if (VAR_10 == (FUNC_0(VAR_5->pm_domain) | VAR_1)) {
  *VAR_9 = 0;
  FUNC_2(VAR_9);
 }





 FUNC_3(*VAR_11);







 VAR_8 = VAR_5->pm_l2[FUNC_1(VAR_12)];
 if (--VAR_8->l2_occupancy > 0)
  return;






 VAR_5->pm_l2[FUNC_1(VAR_12)] = ((void*)0);
 FUNC_5(VAR_4, VAR_8);
}
