
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcmsg {int tcm_info; int tcm_handle; int tcm_parent; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int classid; } ;
struct qfq_class {int inv_w; int lmax; TYPE_1__* qdisc; TYPE_2__ common; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_3__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_6, unsigned long VAR_7,
     struct sk_buff *VAR_8, struct tcmsg *VAR_9)
{
 struct qfq_class *VAR_10 = (struct qfq_class *)VAR_7;
 struct nlattr *VAR_11;

 VAR_9->tcm_parent = VAR_5;
 VAR_9->tcm_handle = VAR_10->common.classid;
 VAR_9->tcm_info = VAR_10->qdisc->handle;

 VAR_11 = FUNC_3(VAR_8, VAR_2);
 if (VAR_11 == ((void*)0))
  goto nla_put_failure;
 FUNC_0(VAR_8, VAR_4, VAR_1/VAR_10->inv_w);
 FUNC_0(VAR_8, VAR_3, VAR_10->lmax);
 return FUNC_2(VAR_8, VAR_11);

nla_put_failure:
 FUNC_1(VAR_8, VAR_11);
 return -VAR_0;
}
