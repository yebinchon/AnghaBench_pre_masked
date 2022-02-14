
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {struct tc_u_hnode* root; } ;
struct tc_u_knode {int dummy; } ;
struct tc_u_hnode {int refcnt; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct tcf_proto*,struct tc_u_knode*) ;
 int FUNC_2 (struct tcf_proto*,struct tc_u_hnode*) ;

__attribute__((used)) static int FUNC_3(struct tcf_proto *VAR_2, unsigned long VAR_3)
{
 struct tc_u_hnode *VAR_4 = (struct tc_u_hnode*)VAR_3;

 if (VAR_4 == ((void*)0))
  return 0;

 if (FUNC_0(VAR_4->handle))
  return FUNC_1(VAR_2, (struct tc_u_knode*)VAR_4);

 if (VAR_2->root == VAR_4)
  return -VAR_1;

 if (VAR_4->refcnt == 1) {
  VAR_4->refcnt--;
  FUNC_2(VAR_2, VAR_4);
 } else {
  return -VAR_0;
 }

 return 0;
}
