
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int group_node; scalar_t__ on_rq; scalar_t__ nr_wakeups_idle; scalar_t__ nr_wakeups_passive; scalar_t__ nr_wakeups_affine_attempts; scalar_t__ nr_wakeups_affine; scalar_t__ nr_wakeups_remote; scalar_t__ nr_wakeups_local; scalar_t__ nr_wakeups_migrate; scalar_t__ nr_wakeups_sync; scalar_t__ nr_wakeups; scalar_t__ nr_forced_migrations; scalar_t__ nr_failed_migrations_hot; scalar_t__ nr_failed_migrations_running; scalar_t__ nr_failed_migrations_affine; scalar_t__ nr_migrations_cold; scalar_t__ slice_max; scalar_t__ exec_max; scalar_t__ block_max; scalar_t__ block_start; scalar_t__ sum_sleep_runtime; scalar_t__ sleep_max; scalar_t__ sleep_start; scalar_t__ wait_sum; scalar_t__ wait_count; scalar_t__ wait_max; scalar_t__ wait_start; scalar_t__ nr_migrations; scalar_t__ prev_sum_exec_runtime; scalar_t__ sum_exec_runtime; scalar_t__ exec_start; } ;
struct TYPE_3__ {int run_list; } ;
struct task_struct {int preempt_notifiers; TYPE_2__ se; TYPE_1__ rt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_0)
{
 VAR_0->se.exec_start = 0;
 VAR_0->se.sum_exec_runtime = 0;
 VAR_0->se.prev_sum_exec_runtime = 0;
 VAR_0->se.nr_migrations = 0;
 FUNC_1(&VAR_0->rt.run_list);
 VAR_0->se.on_rq = 0;
 FUNC_1(&VAR_0->se.group_node);




}
