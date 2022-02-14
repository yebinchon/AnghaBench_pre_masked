
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int timer_active; } ;
struct task_group {int load_weight; TYPE_3__ cfs_bandwidth; } ;
struct seq_file {int dummy; } ;
struct sched_entity {int vruntime; } ;
struct TYPE_5__ {int min_vruntime; } ;
struct rq {int lock; TYPE_1__ cfs; } ;
struct TYPE_6__ {int weight; } ;
struct cfs_rq {int exec_clock; int min_vruntime; int load_avg; int load_period; struct task_group* tg; int load_contribution; int throttle_count; int throttled; TYPE_2__ load; int nr_running; int nr_spread_over; scalar_t__ rb_leftmost; } ;
typedef int s64 ;
struct TYPE_8__ {int vruntime; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (struct cfs_rq*) ;
 struct sched_entity* FUNC_3 (struct cfs_rq*) ;
 int FUNC_4 (int *) ;
 struct rq* FUNC_5 (int) ;
 int FUNC_6 (struct seq_file*,int,struct task_group*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct task_group*) ;

void FUNC_10(struct seq_file *VAR_0, int VAR_1, struct cfs_rq *VAR_2)
{
 s64 VAR_3 = -1, VAR_4, VAR_5 = -1,
  VAR_6, VAR_7, VAR_8;
 struct rq *VAR_9 = FUNC_5(VAR_1);
 struct sched_entity *VAR_10;
 unsigned long VAR_11;






 FUNC_0(VAR_0, "\ncfs_rq[%d]:\n", VAR_1);

 FUNC_0(VAR_0, "  .%-30s: %Ld.%06ld\n", "exec_clock",
   FUNC_1(VAR_2->exec_clock));

 FUNC_7(&VAR_9->lock, VAR_11);
 if (VAR_2->rb_leftmost)
  VAR_3 = (FUNC_2(VAR_2))->vruntime;
 VAR_10 = FUNC_3(VAR_2);
 if (VAR_10)
  VAR_5 = VAR_10->vruntime;
 VAR_4 = VAR_2->min_vruntime;
 VAR_7 = FUNC_5(0)->cfs.min_vruntime;
 FUNC_8(&VAR_9->lock, VAR_11);
 FUNC_0(VAR_0, "  .%-30s: %Ld.%06ld\n", "MIN_vruntime",
   FUNC_1(VAR_3));
 FUNC_0(VAR_0, "  .%-30s: %Ld.%06ld\n", "min_vruntime",
   FUNC_1(VAR_4));
 FUNC_0(VAR_0, "  .%-30s: %Ld.%06ld\n", "max_vruntime",
   FUNC_1(VAR_5));
 VAR_6 = VAR_5 - VAR_3;
 FUNC_0(VAR_0, "  .%-30s: %Ld.%06ld\n", "spread",
   FUNC_1(VAR_6));
 VAR_8 = VAR_4 - VAR_7;
 FUNC_0(VAR_0, "  .%-30s: %Ld.%06ld\n", "spread0",
   FUNC_1(VAR_8));
 FUNC_0(VAR_0, "  .%-30s: %d\n", "nr_spread_over",
   VAR_2->nr_spread_over);
 FUNC_0(VAR_0, "  .%-30s: %ld\n", "nr_running", VAR_2->nr_running);
 FUNC_0(VAR_0, "  .%-30s: %ld\n", "load", VAR_2->load.weight);
}
