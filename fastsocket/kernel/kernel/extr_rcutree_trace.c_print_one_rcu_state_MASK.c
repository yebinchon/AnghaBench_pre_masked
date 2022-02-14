
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct rcu_state {struct rcu_node* node; int orphan_qlen; int n_force_qs_lh; scalar_t__ n_force_qs_ngp; scalar_t__ n_force_qs; scalar_t__ jiffies_force_qs; int signaled; int gpnum; int completed; } ;
struct rcu_node {int level; int grpnum; int grphi; int grplo; int qsmaskinit; int qsmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,long,int,...) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_2, struct rcu_state *VAR_3)
{
 int VAR_4 = 0;
 struct rcu_node *VAR_5;

 FUNC_0(VAR_2, "c=%ld g=%ld s=%d jfq=%ld j=%x "
        "nfqs=%lu/nfqsng=%lu(%lu) fqlh=%lu oqlen=%ld\n",
     VAR_3->completed, VAR_3->gpnum, VAR_3->signaled,
     (long)(VAR_3->jiffies_force_qs - VAR_1),
     (int)(VAR_1 & 0xffff),
     VAR_3->n_force_qs, VAR_3->n_force_qs_ngp,
     VAR_3->n_force_qs - VAR_3->n_force_qs_ngp,
     VAR_3->n_force_qs_lh, VAR_3->orphan_qlen);
 for (VAR_5 = &VAR_3->node[0]; VAR_5 - &VAR_3->node[0] < VAR_0; VAR_5++) {
  if (VAR_5->level != VAR_4) {
   FUNC_1(VAR_2, "\n");
   VAR_4 = VAR_5->level;
  }
  FUNC_0(VAR_2, "%lx/%lx %d:%d ^%d    ",
      VAR_5->qsmask, VAR_5->qsmaskinit,
      VAR_5->grplo, VAR_5->grphi, VAR_5->grpnum);
 }
 FUNC_1(VAR_2, "\n");
}
