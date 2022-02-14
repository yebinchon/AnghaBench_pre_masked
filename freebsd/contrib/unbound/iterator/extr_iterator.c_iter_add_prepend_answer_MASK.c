
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_packed_rrset_key {int dummy; } ;
struct module_qstate {int region; } ;
struct iter_qstate {struct iter_prep_list* an_prepend_last; struct iter_prep_list* an_prepend_list; } ;
struct iter_prep_list {struct iter_prep_list* next; struct ub_packed_rrset_key* rrset; } ;


 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct module_qstate* VAR_0, struct iter_qstate* VAR_1,
 struct ub_packed_rrset_key* VAR_2)
{
 struct iter_prep_list* VAR_3 = (struct iter_prep_list*)FUNC_0(
  VAR_0->region, sizeof(struct iter_prep_list));
 if(!VAR_3)
  return 0;
 VAR_3->rrset = VAR_2;
 VAR_3->next = ((void*)0);

 if(VAR_1->an_prepend_last)
  VAR_1->an_prepend_last->next = VAR_3;
 else VAR_1->an_prepend_list = VAR_3;
 VAR_1->an_prepend_last = VAR_3;
 return 1;
}
