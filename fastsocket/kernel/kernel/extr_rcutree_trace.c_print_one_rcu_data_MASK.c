
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct rcu_data {int blimit; int qlen; int resched_ipi; int offline_fqs; int dynticks_fqs; TYPE_1__* dynticks; int qs_pending; int passed_quiesc_completed; int passed_quiesc; int gpnum; int completed; int cpu; int beenonline; } ;
struct TYPE_2__ {int dynticks_nmi; int dynticks_nesting; int dynticks; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ,char,...) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, struct rcu_data *VAR_1)
{
 if (!VAR_1->beenonline)
  return;
 FUNC_1(VAR_0, "%3d%cc=%ld g=%ld pq=%d pqc=%ld qp=%d",
     VAR_1->cpu,
     FUNC_0(VAR_1->cpu) ? '!' : ' ',
     VAR_1->completed, VAR_1->gpnum,
     VAR_1->passed_quiesc, VAR_1->passed_quiesc_completed,
     VAR_1->qs_pending);







 FUNC_1(VAR_0, " of=%lu ri=%lu", VAR_1->offline_fqs, VAR_1->resched_ipi);
 FUNC_1(VAR_0, " ql=%ld b=%ld\n", VAR_1->qlen, VAR_1->blimit);
}
