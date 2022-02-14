
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {struct tc_u_common* data; } ;
struct tc_u_hnode {int refcnt; struct tc_u_hnode* next; } ;
struct tc_u_common {struct tc_u_hnode* hlist; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tc_u_hnode*) ;
 int FUNC_2 (struct tcf_proto*,struct tc_u_hnode*) ;

__attribute__((used)) static int FUNC_3(struct tcf_proto *VAR_1, struct tc_u_hnode *VAR_2)
{
 struct tc_u_common *VAR_3 = VAR_1->data;
 struct tc_u_hnode **VAR_4;

 FUNC_0(VAR_2->refcnt);

 FUNC_2(VAR_1, VAR_2);

 for (VAR_4 = &VAR_3->hlist; *VAR_4; VAR_4 = &(*VAR_4)->next) {
  if (*VAR_4 == VAR_2) {
   *VAR_4 = VAR_2->next;
   FUNC_1(VAR_2);
   return 0;
  }
 }

 FUNC_0(1);
 return -VAR_0;
}
