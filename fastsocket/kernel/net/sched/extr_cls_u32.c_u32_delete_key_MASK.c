
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tc_u_knode {struct tc_u_knode* next; int handle; struct tc_u_hnode* ht_up; } ;
struct tc_u_hnode {struct tc_u_knode** ht; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tcf_proto*) ;
 int FUNC_3 (struct tcf_proto*) ;
 int FUNC_4 (struct tcf_proto*,struct tc_u_knode*) ;

__attribute__((used)) static int FUNC_5(struct tcf_proto *VAR_0, struct tc_u_knode* VAR_1)
{
 struct tc_u_knode **VAR_2;
 struct tc_u_hnode *VAR_3 = VAR_1->ht_up;

 if (VAR_3) {
  for (VAR_2 = &VAR_3->ht[FUNC_0(VAR_1->handle)]; *VAR_2; VAR_2 = &(*VAR_2)->next) {
   if (*VAR_2 == VAR_1) {
    FUNC_2(VAR_0);
    *VAR_2 = VAR_1->next;
    FUNC_3(VAR_0);

    FUNC_4(VAR_0, VAR_1);
    return 0;
   }
  }
 }
 FUNC_1(1);
 return 0;
}
