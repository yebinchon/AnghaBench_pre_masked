
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {struct tc_u_hnode* data; TYPE_1__* q; struct tc_u_hnode* root; } ;
struct tc_u_hnode {scalar_t__ refcnt; struct tc_u_hnode* next; struct tc_u_hnode* hlist; } ;
struct tc_u_common {scalar_t__ refcnt; struct tc_u_common* next; struct tc_u_common* hlist; } ;
struct TYPE_2__ {int * u32_node; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tc_u_hnode*) ;
 int FUNC_2 (struct tcf_proto*,struct tc_u_hnode*) ;
 int FUNC_3 (struct tcf_proto*,struct tc_u_hnode*) ;

__attribute__((used)) static void FUNC_4(struct tcf_proto *VAR_0)
{
 struct tc_u_common *VAR_1 = VAR_0->data;
 struct tc_u_hnode *VAR_2 = VAR_0->root;

 FUNC_0(VAR_2 == ((void*)0));

 if (VAR_2 && --VAR_2->refcnt == 0)
  FUNC_3(VAR_0, VAR_2);

 if (--VAR_1->refcnt == 0) {
  struct tc_u_hnode *VAR_3;

  VAR_0->q->u32_node = ((void*)0);

  for (VAR_3 = VAR_1->hlist; VAR_3; VAR_3 = VAR_3->next) {
   VAR_3->refcnt--;
   FUNC_2(VAR_0, VAR_3);
  }

  while ((VAR_3 = VAR_1->hlist) != ((void*)0)) {
   VAR_1->hlist = VAR_3->next;

   FUNC_0(VAR_3->refcnt != 0);

   FUNC_1(VAR_3);
  }

  FUNC_1(VAR_1);
 }

 VAR_0->data = ((void*)0);
}
