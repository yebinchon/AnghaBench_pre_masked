
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct rcu_data {int n_rp_need_nothing; int n_rp_need_fqs; int n_rp_gp_started; int n_rp_gp_completed; int n_rp_cpu_needs_gp; int n_rp_cb_ready; int n_rp_qs_pending; int n_rcu_pending; int cpu; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ,char,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, struct rcu_data *VAR_1)
{
 FUNC_1(VAR_0, "%3d%cnp=%ld "
     "qsp=%ld cbr=%ld cng=%ld gpc=%ld gps=%ld nf=%ld nn=%ld\n",
     VAR_1->cpu,
     FUNC_0(VAR_1->cpu) ? '!' : ' ',
     VAR_1->n_rcu_pending,
     VAR_1->n_rp_qs_pending,
     VAR_1->n_rp_cb_ready,
     VAR_1->n_rp_cpu_needs_gp,
     VAR_1->n_rp_gp_completed,
     VAR_1->n_rp_gp_started,
     VAR_1->n_rp_need_fqs,
     VAR_1->n_rp_need_nothing);
}
