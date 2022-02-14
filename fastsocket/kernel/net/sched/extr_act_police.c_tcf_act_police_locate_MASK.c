
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_police {int tcf_bindcnt; int tcf_refcnt; int tcfp_mtu; int tcf_lock; int common; int * tcf_next; scalar_t__ tcf_index; int tcfp_t_c; void* tcfp_ewma_rate; int tcf_action; int tcfp_ptoks; struct qdisc_rate_table* tcfp_P_tab; struct qdisc_rate_table* tcfp_R_tab; int tcfp_burst; int tcfp_toks; void* tcfp_result; int tcf_rate_est; int tcf_bstats; } ;
struct tcf_common {int tcf_bindcnt; int tcf_refcnt; int tcfp_mtu; int tcf_lock; int common; int * tcf_next; scalar_t__ tcf_index; int tcfp_t_c; void* tcfp_ewma_rate; int tcf_action; int tcfp_ptoks; struct qdisc_rate_table* tcfp_P_tab; struct qdisc_rate_table* tcfp_R_tab; int tcfp_burst; int tcfp_toks; void* tcfp_result; int tcf_rate_est; int tcf_bstats; } ;
struct tc_police_compat {int dummy; } ;
struct TYPE_4__ {scalar_t__ rate; } ;
struct tc_police {int mtu; scalar_t__ index; int action; int burst; TYPE_2__ peakrate; TYPE_2__ rate; } ;
struct tc_action {struct tcf_police* priv; } ;
struct TYPE_3__ {int cell_log; } ;
struct qdisc_rate_table {TYPE_1__ rate; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tcf_police*,int) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,struct nlattr*) ;
 int FUNC_3 (struct tcf_police*) ;
 struct tcf_police* FUNC_4 (int,int ) ;
 struct tc_police* FUNC_5 (struct nlattr*) ;
 void* FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr**,int ,struct nlattr*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 () ;
 struct qdisc_rate_table* FUNC_10 (TYPE_2__*,struct nlattr*) ;
 int FUNC_11 (struct qdisc_rate_table*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 unsigned int FUNC_15 (scalar_t__,int ) ;
 struct tcf_police* FUNC_16 (scalar_t__,int *) ;
 scalar_t__ FUNC_17 (int *,int *) ;
 int ** VAR_15 ;
 struct tcf_police* FUNC_18 (struct tcf_police*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct nlattr *VAR_16, struct nlattr *VAR_17,
     struct tc_action *VAR_18, int VAR_19, int VAR_20)
{
 unsigned VAR_21;
 int VAR_22 = 0, VAR_23;
 struct nlattr *VAR_24[VAR_6 + 1];
 struct tc_police *VAR_25;
 struct tcf_police *VAR_26;
 struct qdisc_rate_table *VAR_27 = ((void*)0), *VAR_28 = ((void*)0);
 int VAR_29;

 if (VAR_16 == ((void*)0))
  return -VAR_1;

 VAR_23 = FUNC_8(VAR_24, VAR_6, VAR_16, VAR_14);
 if (VAR_23 < 0)
  return VAR_23;

 if (VAR_24[VAR_10] == ((void*)0))
  return -VAR_1;
 VAR_29 = FUNC_7(VAR_24[VAR_10]);
 if (VAR_29 != sizeof(*VAR_25) && VAR_29 != sizeof(struct tc_police_compat))
  return -VAR_1;
 VAR_25 = FUNC_5(VAR_24[VAR_10]);

 if (VAR_25->index) {
  struct tcf_common *VAR_30;

  VAR_30 = FUNC_16(VAR_25->index, &VAR_11);
  if (VAR_30 != ((void*)0)) {
   VAR_18->priv = VAR_30;
   VAR_26 = FUNC_18(VAR_30);
   if (VAR_20) {
    VAR_26->tcf_bindcnt += 1;
    VAR_26->tcf_refcnt += 1;
   }
   if (VAR_19)
    goto override;
   return VAR_22;
  }
 }

 VAR_26 = FUNC_4(sizeof(*VAR_26), VAR_3);
 if (VAR_26 == ((void*)0))
  return -VAR_2;
 VAR_22 = VAR_0;
 VAR_26->tcf_refcnt = 1;
 FUNC_13(&VAR_26->tcf_lock);
 if (VAR_20)
  VAR_26->tcf_bindcnt = 1;
override:
 if (VAR_25->rate.rate) {
  VAR_23 = -VAR_2;
  VAR_27 = FUNC_10(&VAR_25->rate, VAR_24[VAR_8]);
  if (VAR_27 == ((void*)0))
   goto failure;

  if (VAR_25->peakrate.rate) {
   VAR_28 = FUNC_10(&VAR_25->peakrate,
            VAR_24[VAR_7]);
   if (VAR_28 == ((void*)0))
    goto failure;
  }
 }

 FUNC_12(&VAR_26->tcf_lock);
 if (VAR_17) {
  VAR_23 = FUNC_2(&VAR_26->tcf_bstats,
         &VAR_26->tcf_rate_est,
         &VAR_26->tcf_lock, VAR_17);
  if (VAR_23)
   goto failure_unlock;
 } else if (VAR_24[VAR_5] &&
     (VAR_22 == VAR_0 ||
      !FUNC_1(&VAR_26->tcf_bstats,
       &VAR_26->tcf_rate_est))) {
  VAR_23 = -VAR_1;
  goto failure_unlock;
 }


 if (VAR_27 != ((void*)0)) {
  FUNC_11(VAR_26->tcfp_R_tab);
  VAR_26->tcfp_R_tab = VAR_27;
 }
 if (VAR_28 != ((void*)0)) {
  FUNC_11(VAR_26->tcfp_P_tab);
  VAR_26->tcfp_P_tab = VAR_28;
 }

 if (VAR_24[VAR_9])
  VAR_26->tcfp_result = FUNC_6(VAR_24[VAR_9]);
 VAR_26->tcfp_toks = VAR_26->tcfp_burst = VAR_25->burst;
 VAR_26->tcfp_mtu = VAR_25->mtu;
 if (VAR_26->tcfp_mtu == 0) {
  VAR_26->tcfp_mtu = ~0;
  if (VAR_26->tcfp_R_tab)
   VAR_26->tcfp_mtu = 255<<VAR_26->tcfp_R_tab->rate.cell_log;
 }
 if (VAR_26->tcfp_P_tab)
  VAR_26->tcfp_ptoks = FUNC_0(VAR_26, VAR_26->tcfp_mtu);
 VAR_26->tcf_action = VAR_25->action;

 if (VAR_24[VAR_5])
  VAR_26->tcfp_ewma_rate = FUNC_6(VAR_24[VAR_5]);

 FUNC_14(&VAR_26->tcf_lock);
 if (VAR_22 != VAR_0)
  return VAR_22;

 VAR_26->tcfp_t_c = FUNC_9();
 VAR_26->tcf_index = VAR_25->index ? VAR_25->index :
  FUNC_17(&VAR_12, &VAR_11);
 VAR_21 = FUNC_15(VAR_26->tcf_index, VAR_4);
 FUNC_19(&VAR_13);
 VAR_26->tcf_next = VAR_15[VAR_21];
 VAR_15[VAR_21] = &VAR_26->common;
 FUNC_20(&VAR_13);

 VAR_18->priv = VAR_26;
 return VAR_22;

failure_unlock:
 FUNC_14(&VAR_26->tcf_lock);
failure:
 if (VAR_28)
  FUNC_11(VAR_28);
 if (VAR_27)
  FUNC_11(VAR_27);
 if (VAR_22 == VAR_0)
  FUNC_3(VAR_26);
 return VAR_23;
}
