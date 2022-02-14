
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcf_result {int dummy; } ;
struct TYPE_6__ {int lastuse; } ;
struct TYPE_5__ {int drops; } ;
struct TYPE_4__ {int packets; int bytes; } ;
struct tcf_gact {int tcfg_ptype; int tcf_action; int tcf_lock; TYPE_3__ tcf_tm; TYPE_2__ tcf_qstats; TYPE_1__ tcf_bstats; } ;
struct tc_action {struct tcf_gact* priv; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcf_gact*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tcf_gact*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2, struct tc_action *VAR_3, struct tcf_result *VAR_4)
{
 struct tcf_gact *VAR_5 = VAR_3->priv;
 int VAR_6 = VAR_0;

 FUNC_2(&VAR_5->tcf_lock);






 VAR_6 = VAR_5->tcf_action;

 VAR_5->tcf_bstats.bytes += FUNC_1(VAR_2);
 VAR_5->tcf_bstats.packets++;
 if (VAR_6 == VAR_0)
  VAR_5->tcf_qstats.drops++;
 VAR_5->tcf_tm.lastuse = VAR_1;
 FUNC_3(&VAR_5->tcf_lock);

 return VAR_6;
}
