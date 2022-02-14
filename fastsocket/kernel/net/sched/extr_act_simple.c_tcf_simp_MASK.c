
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_result {int dummy; } ;
struct TYPE_4__ {int packets; int bytes; } ;
struct TYPE_3__ {int lastuse; } ;
struct tcf_defact {int tcf_action; int tcf_lock; TYPE_2__ tcf_bstats; scalar_t__ tcfd_defdata; TYPE_1__ tcf_tm; } ;
struct tc_action {struct tcf_defact* priv; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, struct tc_action *VAR_2, struct tcf_result *VAR_3)
{
 struct tcf_defact *VAR_4 = VAR_2->priv;

 FUNC_2(&VAR_4->tcf_lock);
 VAR_4->tcf_tm.lastuse = VAR_0;
 VAR_4->tcf_bstats.bytes += FUNC_1(VAR_1);
 VAR_4->tcf_bstats.packets++;





 FUNC_0("simple: %s_%d\n",
        (char *)VAR_4->tcfd_defdata, VAR_4->tcf_bstats.packets);
 FUNC_3(&VAR_4->tcf_lock);
 return VAR_4->tcf_action;
}
