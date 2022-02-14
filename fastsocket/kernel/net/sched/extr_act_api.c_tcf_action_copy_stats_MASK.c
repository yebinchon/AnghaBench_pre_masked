
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_act_hdr {int tcf_qstats; int tcf_rate_est; int tcf_bstats; int tcf_lock; } ;
struct tc_action {scalar_t__ type; TYPE_1__* ops; struct tcf_act_hdr* priv; } ;
struct sk_buff {int dummy; } ;
struct gnet_dump {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* get_stats ) (struct sk_buff*,struct tc_action*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_1 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_2 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_3 (struct gnet_dump*) ;
 int FUNC_4 (struct sk_buff*,int ,int *,struct gnet_dump*) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ,int *,struct gnet_dump*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,struct tc_action*) ;

int FUNC_7(struct sk_buff *VAR_4, struct tc_action *VAR_5,
     int VAR_6)
{
 int VAR_7 = 0;
 struct gnet_dump VAR_8;
 struct tcf_act_hdr *VAR_9 = VAR_5->priv;

 if (VAR_9 == ((void*)0))
  goto errout;




 if (VAR_6) {
  if (VAR_5->type == VAR_1)
   VAR_7 = FUNC_5(VAR_4, 0,
    VAR_2, VAR_3, &VAR_9->tcf_lock, &VAR_8);
  else
   return 0;
 } else
  VAR_7 = FUNC_4(VAR_4, VAR_0,
         &VAR_9->tcf_lock, &VAR_8);

 if (VAR_7 < 0)
  goto errout;

 if (VAR_5->ops != ((void*)0) && VAR_5->ops->get_stats != ((void*)0))
  if (VAR_5->ops->get_stats(VAR_4, VAR_5) < 0)
   goto errout;

 if (FUNC_0(&VAR_8, &VAR_9->tcf_bstats) < 0 ||
     FUNC_2(&VAR_8, &VAR_9->tcf_rate_est) < 0 ||
     FUNC_1(&VAR_8, &VAR_9->tcf_qstats) < 0)
  goto errout;

 if (FUNC_3(&VAR_8) < 0)
  goto errout;

 return 0;

errout:
 return -1;
}
