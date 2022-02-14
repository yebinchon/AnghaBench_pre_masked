
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcmsg {int tcm_info; int tcm_handle; int tcm_parent; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int classid; } ;
struct drr_class {int quantum; TYPE_1__* qdisc; TYPE_2__ common; } ;
struct Qdisc {int dummy; } ;
struct TYPE_3__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_4, unsigned long VAR_5,
     struct sk_buff *VAR_6, struct tcmsg *VAR_7)
{
 struct drr_class *VAR_8 = (struct drr_class *)VAR_5;
 struct nlattr *VAR_9;

 VAR_7->tcm_parent = VAR_3;
 VAR_7->tcm_handle = VAR_8->common.classid;
 VAR_7->tcm_info = VAR_8->qdisc->handle;

 VAR_9 = FUNC_3(VAR_6, VAR_2);
 if (VAR_9 == ((void*)0))
  goto nla_put_failure;
 FUNC_0(VAR_6, VAR_1, VAR_8->quantum);
 return FUNC_2(VAR_6, VAR_9);

nla_put_failure:
 FUNC_1(VAR_6, VAR_9);
 return -VAR_0;
}
