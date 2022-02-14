
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcmsg {int tcm_info; int tcm_handle; int tcm_parent; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct TYPE_7__ {int classid; } ;
struct hfsc_class {scalar_t__ level; TYPE_4__* qdisc; TYPE_3__ cl_common; TYPE_2__* cl_parent; } ;
struct Qdisc {int dummy; } ;
struct TYPE_8__ {int handle; } ;
struct TYPE_5__ {int classid; } ;
struct TYPE_6__ {TYPE_1__ cl_common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct hfsc_class*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int
FUNC_4(struct Qdisc *VAR_3, unsigned long VAR_4, struct sk_buff *VAR_5,
  struct tcmsg *VAR_6)
{
 struct hfsc_class *VAR_7 = (struct hfsc_class *)VAR_4;
 struct nlattr *VAR_8;

 VAR_6->tcm_parent = VAR_7->cl_parent ? VAR_7->cl_parent->cl_common.classid :
       VAR_2;
 VAR_6->tcm_handle = VAR_7->cl_common.classid;
 if (VAR_7->level == 0)
  VAR_6->tcm_info = VAR_7->qdisc->handle;

 VAR_8 = FUNC_3(VAR_5, VAR_1);
 if (VAR_8 == ((void*)0))
  goto nla_put_failure;
 if (FUNC_0(VAR_5, VAR_7) < 0)
  goto nla_put_failure;
 FUNC_2(VAR_5, VAR_8);
 return VAR_5->len;

 nla_put_failure:
 FUNC_1(VAR_5, VAR_8);
 return -VAR_0;
}
