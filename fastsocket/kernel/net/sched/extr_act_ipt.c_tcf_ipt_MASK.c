
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct xt_target_param {TYPE_6__* target; int targinfo; int hooknum; int * out; int in; } ;
struct tcf_result {int dummy; } ;
struct TYPE_14__ {int drops; } ;
struct TYPE_9__ {int packets; int bytes; } ;
struct TYPE_8__ {int lastuse; } ;
struct tcf_ipt {int tcf_lock; TYPE_7__ tcf_qstats; TYPE_5__* tcfi_t; int tcfi_hook; TYPE_2__ tcf_bstats; TYPE_1__ tcf_tm; } ;
struct tc_action {struct tcf_ipt* priv; } ;
struct sk_buff {int dev; } ;
struct TYPE_13__ {int (* target ) (struct sk_buff*,struct xt_target_param*) ;} ;
struct TYPE_10__ {TYPE_6__* target; } ;
struct TYPE_11__ {TYPE_3__ kernel; } ;
struct TYPE_12__ {int data; TYPE_4__ u; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*,struct xt_target_param*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_7, struct tc_action *VAR_8,
     struct tcf_result *VAR_9)
{
 int VAR_10 = 0, VAR_11 = 0;
 struct tcf_ipt *VAR_12 = VAR_8->priv;
 struct xt_target_param VAR_13;

 if (FUNC_3(VAR_7, VAR_0))
  return VAR_4;

 FUNC_4(&VAR_12->tcf_lock);

 VAR_12->tcf_tm.lastuse = VAR_6;
 VAR_12->tcf_bstats.bytes += FUNC_2(VAR_7);
 VAR_12->tcf_bstats.packets++;




 VAR_13.in = VAR_7->dev;
 VAR_13.out = ((void*)0);
 VAR_13.hooknum = VAR_12->tcfi_hook;
 VAR_13.target = VAR_12->tcfi_t->u.kernel.target;
 VAR_13.targinfo = VAR_12->tcfi_t->data;
 VAR_10 = VAR_13.target->target(VAR_7, &VAR_13);

 switch (VAR_10) {
 case 129:
  VAR_11 = VAR_1;
  break;
 case 128:
  VAR_11 = VAR_3;
  VAR_12->tcf_qstats.drops++;
  break;
 case 130:
  VAR_11 = VAR_2;
  break;
 default:
  if (FUNC_0())
   FUNC_1("tc filter: Bogus netfilter code"
      " %d assume ACCEPT\n", VAR_10);
  VAR_11 = VAR_5;
  break;
 }
 FUNC_5(&VAR_12->tcf_lock);
 return VAR_11;

}
