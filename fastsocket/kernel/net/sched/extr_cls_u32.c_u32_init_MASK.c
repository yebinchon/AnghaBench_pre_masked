
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {struct tc_u_common* data; struct tc_u_hnode* root; TYPE_1__* q; int prio; } ;
struct tc_u_hnode {int handle; struct tc_u_common* tp_c; struct tc_u_hnode* next; int prio; int refcnt; scalar_t__ divisor; } ;
struct tc_u_common {struct tc_u_hnode* hlist; int refcnt; TYPE_1__* q; } ;
struct TYPE_2__ {struct tc_u_common* u32_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tc_u_common*) ;
 int FUNC_1 (struct tc_u_hnode*) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct tcf_proto *VAR_2)
{
 struct tc_u_hnode *VAR_3;
 struct tc_u_common *VAR_4;

 VAR_4 = VAR_2->q->u32_node;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_3->divisor = 0;
 VAR_3->refcnt++;
 VAR_3->handle = VAR_4 ? FUNC_0(VAR_4) : 0x80000000;
 VAR_3->prio = VAR_2->prio;

 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
  if (VAR_4 == ((void*)0)) {
   FUNC_1(VAR_3);
   return -VAR_0;
  }
  VAR_4->q = VAR_2->q;
  VAR_2->q->u32_node = VAR_4;
 }

 VAR_4->refcnt++;
 VAR_3->next = VAR_4->hlist;
 VAR_4->hlist = VAR_3;
 VAR_3->tp_c = VAR_4;

 VAR_2->root = VAR_3;
 VAR_2->data = VAR_4;
 return 0;
}
