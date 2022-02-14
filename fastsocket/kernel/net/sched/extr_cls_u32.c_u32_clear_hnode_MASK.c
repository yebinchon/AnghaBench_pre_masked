
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tc_u_knode {struct tc_u_knode* next; } ;
struct tc_u_hnode {unsigned int divisor; struct tc_u_knode** ht; } ;


 int FUNC_0 (struct tcf_proto*,struct tc_u_knode*) ;

__attribute__((used)) static void FUNC_1(struct tcf_proto *VAR_0, struct tc_u_hnode *VAR_1)
{
 struct tc_u_knode *VAR_2;
 unsigned VAR_3;

 for (VAR_3=0; VAR_3<=VAR_1->divisor; VAR_3++) {
  while ((VAR_2 = VAR_1->ht[VAR_3]) != ((void*)0)) {
   VAR_1->ht[VAR_3] = VAR_2->next;

   FUNC_0(VAR_0, VAR_2);
  }
 }
}
