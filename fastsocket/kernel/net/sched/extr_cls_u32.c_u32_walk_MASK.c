
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct tcf_proto*,unsigned long,struct tcf_walker*) ;} ;
struct tcf_proto {scalar_t__ prio; struct tc_u_common* data; } ;
struct tc_u_knode {struct tc_u_knode* next; } ;
struct tc_u_hnode {scalar_t__ prio; unsigned int divisor; struct tc_u_knode** ht; struct tc_u_hnode* next; } ;
struct tc_u_common {struct tc_u_hnode* hlist; } ;


 scalar_t__ FUNC_0 (struct tcf_proto*,unsigned long,struct tcf_walker*) ;
 scalar_t__ FUNC_1 (struct tcf_proto*,unsigned long,struct tcf_walker*) ;

__attribute__((used)) static void FUNC_2(struct tcf_proto *VAR_0, struct tcf_walker *VAR_1)
{
 struct tc_u_common *VAR_2 = VAR_0->data;
 struct tc_u_hnode *VAR_3;
 struct tc_u_knode *VAR_4;
 unsigned VAR_5;

 if (VAR_1->stop)
  return;

 for (VAR_3 = VAR_2->hlist; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->prio != VAR_0->prio)
   continue;
  if (VAR_1->count >= VAR_1->skip) {
   if (VAR_1->fn(VAR_0, (unsigned long)VAR_3, VAR_1) < 0) {
    VAR_1->stop = 1;
    return;
   }
  }
  VAR_1->count++;
  for (VAR_5 = 0; VAR_5 <= VAR_3->divisor; VAR_5++) {
   for (VAR_4 = VAR_3->ht[VAR_5]; VAR_4; VAR_4 = VAR_4->next) {
    if (VAR_1->count < VAR_1->skip) {
     VAR_1->count++;
     continue;
    }
    if (VAR_1->fn(VAR_0, (unsigned long)VAR_4, VAR_1) < 0) {
     VAR_1->stop = 1;
     return;
    }
    VAR_1->count++;
   }
  }
 }
}
