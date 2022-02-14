
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; } ;
struct packed_rrset_data {int dummy; } ;
struct iter_qstate {struct iter_prep_list* an_prepend_list; } ;
struct iter_prep_list {struct iter_prep_list* next; TYPE_3__* rrset; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__ entry; } ;


 scalar_t__ FUNC_0 (struct packed_rrset_data*,struct packed_rrset_data*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,struct ub_packed_rrset_key*) ;

__attribute__((used)) static int
FUNC_2(struct iter_qstate* VAR_0,
 struct ub_packed_rrset_key* VAR_1)
{
 struct iter_prep_list* VAR_2 = VAR_0->an_prepend_list;
 while(VAR_2) {
  if(FUNC_1(VAR_2->rrset, VAR_1) == 0 &&
   FUNC_0((struct packed_rrset_data*)VAR_2->rrset
   ->entry.data, (struct packed_rrset_data*)VAR_1
   ->entry.data))
   return 1;
  VAR_2 = VAR_2->next;
 }
 return 0;
}
