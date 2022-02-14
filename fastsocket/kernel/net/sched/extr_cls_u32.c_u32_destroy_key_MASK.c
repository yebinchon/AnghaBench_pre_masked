
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {int dummy; } ;
struct tc_u_knode {struct tc_u_knode* pf; TYPE_1__* ht_down; int exts; int res; } ;
struct TYPE_2__ {int refcnt; } ;


 int FUNC_0 (struct tc_u_knode*) ;
 int FUNC_1 (struct tcf_proto*,int *) ;
 int FUNC_2 (struct tcf_proto*,int *) ;

__attribute__((used)) static int FUNC_3(struct tcf_proto *VAR_0, struct tc_u_knode *VAR_1)
{
 FUNC_2(VAR_0, &VAR_1->res);
 FUNC_1(VAR_0, &VAR_1->exts);
 if (VAR_1->ht_down)
  VAR_1->ht_down->refcnt--;



 FUNC_0(VAR_1);
 return 0;
}
