
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcf_result {int dummy; } ;
struct TYPE_6__ {int drops; int overlimits; } ;
struct TYPE_5__ {scalar_t__ bps; } ;
struct TYPE_4__ {int packets; int bytes; } ;
struct tcf_police {scalar_t__ tcfp_ewma_rate; scalar_t__ tcf_action; scalar_t__ tcfp_mtu; int tcfp_result; long tcfp_burst; long tcfp_ptoks; long tcfp_toks; int tcf_lock; TYPE_3__ tcf_qstats; int tcfp_t_c; scalar_t__ tcfp_P_tab; int * tcfp_R_tab; TYPE_2__ tcf_rate_est; TYPE_1__ tcf_bstats; } ;
struct tc_action {struct tcf_police* priv; } ;
struct sk_buff {int dummy; } ;
typedef int psched_time_t ;


 scalar_t__ FUNC_0 (struct tcf_police*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct tcf_police*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 long FUNC_3 (int ,int ,long) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_1, struct tc_action *VAR_2,
     struct tcf_result *VAR_3)
{
 struct tcf_police *VAR_4 = VAR_2->priv;
 psched_time_t VAR_5;
 long VAR_6;
 long VAR_7 = 0;

 FUNC_5(&VAR_4->tcf_lock);

 VAR_4->tcf_bstats.bytes += FUNC_4(VAR_1);
 VAR_4->tcf_bstats.packets++;

 if (VAR_4->tcfp_ewma_rate &&
     VAR_4->tcf_rate_est.bps >= VAR_4->tcfp_ewma_rate) {
  VAR_4->tcf_qstats.overlimits++;
  if (VAR_4->tcf_action == VAR_0)
   VAR_4->tcf_qstats.drops++;
  FUNC_6(&VAR_4->tcf_lock);
  return VAR_4->tcf_action;
 }

 if (FUNC_4(VAR_1) <= VAR_4->tcfp_mtu) {
  if (VAR_4->tcfp_R_tab == ((void*)0)) {
   FUNC_6(&VAR_4->tcf_lock);
   return VAR_4->tcfp_result;
  }

  VAR_5 = FUNC_2();
  VAR_6 = FUNC_3(VAR_5, VAR_4->tcfp_t_c,
         VAR_4->tcfp_burst);
  if (VAR_4->tcfp_P_tab) {
   VAR_7 = VAR_6 + VAR_4->tcfp_ptoks;
   if (VAR_7 > (long)FUNC_1(VAR_4, VAR_4->tcfp_mtu))
    VAR_7 = (long)FUNC_1(VAR_4, VAR_4->tcfp_mtu);
   VAR_7 -= FUNC_1(VAR_4, FUNC_4(VAR_1));
  }
  VAR_6 += VAR_4->tcfp_toks;
  if (VAR_6 > (long)VAR_4->tcfp_burst)
   VAR_6 = VAR_4->tcfp_burst;
  VAR_6 -= FUNC_0(VAR_4, FUNC_4(VAR_1));
  if ((VAR_6|VAR_7) >= 0) {
   VAR_4->tcfp_t_c = VAR_5;
   VAR_4->tcfp_toks = VAR_6;
   VAR_4->tcfp_ptoks = VAR_7;
   FUNC_6(&VAR_4->tcf_lock);
   return VAR_4->tcfp_result;
  }
 }

 VAR_4->tcf_qstats.overlimits++;
 if (VAR_4->tcf_action == VAR_0)
  VAR_4->tcf_qstats.drops++;
 FUNC_6(&VAR_4->tcf_lock);
 return VAR_4->tcf_action;
}
