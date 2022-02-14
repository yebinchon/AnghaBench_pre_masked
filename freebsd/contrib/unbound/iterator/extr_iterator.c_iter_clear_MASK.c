
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_qstate {int ** minfo; } ;
struct iter_qstate {scalar_t__* target_count; scalar_t__ num_current_queries; int outlist; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct module_qstate* VAR_0, int VAR_1)
{
 struct iter_qstate* VAR_2;
 if(!VAR_0)
  return;
 VAR_2 = (struct iter_qstate*)VAR_0->minfo[VAR_1];
 if(VAR_2) {
  FUNC_1(&VAR_2->outlist);
  if(VAR_2->target_count && --VAR_2->target_count[0] == 0)
   FUNC_0(VAR_2->target_count);
  VAR_2->num_current_queries = 0;
 }
 VAR_0->minfo[VAR_1] = ((void*)0);
}
