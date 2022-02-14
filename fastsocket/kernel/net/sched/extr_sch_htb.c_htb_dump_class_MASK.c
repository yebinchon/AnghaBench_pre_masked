
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tcmsg {int tcm_info; int tcm_handle; int tcm_parent; } ;
struct tc_htb_opt {scalar_t__ level; int prio; int quantum; int cbuffer; int ceil; int buffer; int rate; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct TYPE_13__ {TYPE_4__* q; } ;
struct TYPE_14__ {TYPE_5__ leaf; } ;
struct TYPE_11__ {int classid; } ;
struct htb_class {scalar_t__ level; int prio; int quantum; int cbuffer; TYPE_8__* ceil; int buffer; TYPE_7__* rate; TYPE_6__ un; TYPE_3__ common; TYPE_2__* parent; } ;
struct Qdisc {int dummy; } ;
typedef int spinlock_t ;
typedef int opt ;
struct TYPE_16__ {int rate; } ;
struct TYPE_15__ {int rate; } ;
struct TYPE_12__ {int handle; } ;
struct TYPE_9__ {int classid; } ;
struct TYPE_10__ {TYPE_1__ common; } ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tc_htb_opt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tc_htb_opt*,int ,int) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 int * FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct Qdisc *VAR_3, unsigned long VAR_4,
     struct sk_buff *VAR_5, struct tcmsg *VAR_6)
{
 struct htb_class *VAR_7 = (struct htb_class *)VAR_4;
 spinlock_t *VAR_8 = FUNC_5(VAR_3);
 struct nlattr *VAR_9;
 struct tc_htb_opt VAR_10;

 FUNC_6(VAR_8);
 VAR_6->tcm_parent = VAR_7->parent ? VAR_7->parent->common.classid : VAR_2;
 VAR_6->tcm_handle = VAR_7->common.classid;
 if (!VAR_7->level && VAR_7->un.leaf.q)
  VAR_6->tcm_info = VAR_7->un.leaf.q->handle;

 VAR_9 = FUNC_4(VAR_5, VAR_1);
 if (VAR_9 == ((void*)0))
  goto nla_put_failure;

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));

 VAR_10.rate = VAR_7->rate->rate;
 VAR_10.buffer = VAR_7->buffer;
 VAR_10.ceil = VAR_7->ceil->rate;
 VAR_10.cbuffer = VAR_7->cbuffer;
 VAR_10.quantum = VAR_7->quantum;
 VAR_10.prio = VAR_7->prio;
 VAR_10.level = VAR_7->level;
 FUNC_0(VAR_5, VAR_0, sizeof(VAR_10), &VAR_10);

 FUNC_3(VAR_5, VAR_9);
 FUNC_7(VAR_8);
 return VAR_5->len;

nla_put_failure:
 FUNC_7(VAR_8);
 FUNC_2(VAR_5, VAR_9);
 return -1;
}
