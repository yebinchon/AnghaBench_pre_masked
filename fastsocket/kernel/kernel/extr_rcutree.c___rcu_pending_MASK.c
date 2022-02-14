
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_state {int jiffies_force_qs; int gpnum; int completed; } ;
struct rcu_data {scalar_t__ completed; scalar_t__ gpnum; int n_rp_need_nothing; int n_rp_need_fqs; int n_rp_gp_started; int n_rp_gp_completed; int n_rp_cpu_needs_gp; int n_rp_cb_ready; int n_rp_qs_pending; scalar_t__ qs_pending; int n_rcu_pending; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct rcu_state*,struct rcu_data*) ;
 scalar_t__ FUNC_2 (struct rcu_data*) ;
 scalar_t__ FUNC_3 (struct rcu_state*,struct rcu_data*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (struct rcu_state*) ;

__attribute__((used)) static int FUNC_5(struct rcu_state *VAR_1, struct rcu_data *VAR_2)
{
 VAR_2->n_rcu_pending++;


 FUNC_1(VAR_1, VAR_2);


 if (VAR_2->qs_pending) {
  VAR_2->n_rp_qs_pending++;
  return 1;
 }


 if (FUNC_2(VAR_2)) {
  VAR_2->n_rp_cb_ready++;
  return 1;
 }


 if (FUNC_3(VAR_1, VAR_2)) {
  VAR_2->n_rp_cpu_needs_gp++;
  return 1;
 }


 if (FUNC_0(VAR_1->completed) != VAR_2->completed) {
  VAR_2->n_rp_gp_completed++;
  return 1;
 }


 if (FUNC_0(VAR_1->gpnum) != VAR_2->gpnum) {
  VAR_2->n_rp_gp_started++;
  return 1;
 }


 if (FUNC_4(VAR_1) &&
     ((long)(FUNC_0(VAR_1->jiffies_force_qs) - VAR_0) < 0)) {
  VAR_2->n_rp_need_fqs++;
  return 1;
 }


 VAR_2->n_rp_need_nothing++;
 return 0;
}
