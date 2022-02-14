
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int packets; int bytes; } ;
struct TYPE_4__ {int lastuse; } ;
struct tcf_skbedit {int flags; scalar_t__ queue_mapping; int tcf_action; int tcf_lock; int priority; TYPE_2__ tcf_bstats; TYPE_1__ tcf_tm; } ;
struct tcf_result {int dummy; } ;
struct tc_action {struct tcf_skbedit* priv; } ;
struct sk_buff {TYPE_3__* dev; int priority; } ;
struct TYPE_6__ {scalar_t__ real_num_tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3, struct tc_action *VAR_4,
         struct tcf_result *VAR_5)
{
 struct tcf_skbedit *VAR_6 = VAR_4->priv;

 FUNC_2(&VAR_6->tcf_lock);
 VAR_6->tcf_tm.lastuse = VAR_2;
 VAR_6->tcf_bstats.bytes += FUNC_0(VAR_3);
 VAR_6->tcf_bstats.packets++;

 if (VAR_6->flags & VAR_0)
  VAR_3->priority = VAR_6->priority;
 if (VAR_6->flags & VAR_1 &&
     VAR_3->dev->real_num_tx_queues > VAR_6->queue_mapping)
  FUNC_1(VAR_3, VAR_6->queue_mapping);

 FUNC_3(&VAR_6->tcf_lock);
 return VAR_6->tcf_action;
}
