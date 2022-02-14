
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct taskstats {unsigned long cpu_count; scalar_t__ blkio_delay_total; scalar_t__ swapin_delay_total; scalar_t__ freepages_delay_total; int freepages_count; int swapin_count; int blkio_count; scalar_t__ cpu_run_virtual_total; scalar_t__ cpu_delay_total; scalar_t__ cpu_scaled_run_real_total; scalar_t__ cpu_run_real_total; } ;
struct TYPE_5__ {unsigned long long sum_exec_runtime; } ;
struct TYPE_4__ {unsigned long pcount; unsigned long long run_delay; } ;
struct task_struct {TYPE_3__* delays; TYPE_2__ se; TYPE_1__ sched_info; scalar_t__ stimescaled; scalar_t__ utimescaled; scalar_t__ stime; scalar_t__ utime; } ;
typedef scalar_t__ s64 ;
struct TYPE_6__ {scalar_t__ blkio_delay; scalar_t__ swapin_delay; scalar_t__ freepages_delay; int lock; scalar_t__ freepages_count; scalar_t__ swapin_count; scalar_t__ blkio_count; } ;


 int FUNC_0 (scalar_t__,struct timespec*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct timespec*) ;

int FUNC_4(struct taskstats *VAR_0, struct task_struct *VAR_1)
{
 s64 VAR_2;
 unsigned long VAR_3;
 unsigned long long VAR_4, VAR_5;
 unsigned long VAR_6;
 struct timespec VAR_7;




 if (!VAR_1->delays)
  goto done;

 VAR_2 = (s64)VAR_0->cpu_run_real_total;
 FUNC_0(VAR_1->utime + VAR_1->stime, &VAR_7);
 VAR_2 += FUNC_3(&VAR_7);
 VAR_0->cpu_run_real_total = (VAR_2 < (s64)VAR_0->cpu_run_real_total) ? 0 : VAR_2;

 VAR_2 = (s64)VAR_0->cpu_scaled_run_real_total;
 FUNC_0(VAR_1->utimescaled + VAR_1->stimescaled, &VAR_7);
 VAR_2 += FUNC_3(&VAR_7);
 VAR_0->cpu_scaled_run_real_total =
  (VAR_2 < (s64)VAR_0->cpu_scaled_run_real_total) ? 0 : VAR_2;





 VAR_3 = VAR_1->sched_info.pcount;
 VAR_4 = VAR_1->sched_info.run_delay;
 VAR_5 = VAR_1->se.sum_exec_runtime;

 VAR_0->cpu_count += VAR_3;

 VAR_2 = (s64)VAR_0->cpu_delay_total + VAR_4;
 VAR_0->cpu_delay_total = (VAR_2 < (s64)VAR_0->cpu_delay_total) ? 0 : VAR_2;

 VAR_2 = (s64)VAR_0->cpu_run_virtual_total + VAR_5;
 VAR_0->cpu_run_virtual_total =
  (VAR_2 < (s64)VAR_0->cpu_run_virtual_total) ? 0 : VAR_2;



 FUNC_1(&VAR_1->delays->lock, VAR_6);
 VAR_2 = VAR_0->blkio_delay_total + VAR_1->delays->blkio_delay;
 VAR_0->blkio_delay_total = (VAR_2 < VAR_0->blkio_delay_total) ? 0 : VAR_2;
 VAR_2 = VAR_0->swapin_delay_total + VAR_1->delays->swapin_delay;
 VAR_0->swapin_delay_total = (VAR_2 < VAR_0->swapin_delay_total) ? 0 : VAR_2;
 VAR_2 = VAR_0->freepages_delay_total + VAR_1->delays->freepages_delay;
 VAR_0->freepages_delay_total = (VAR_2 < VAR_0->freepages_delay_total) ? 0 : VAR_2;
 VAR_0->blkio_count += VAR_1->delays->blkio_count;
 VAR_0->swapin_count += VAR_1->delays->swapin_count;
 VAR_0->freepages_count += VAR_1->delays->freepages_count;
 FUNC_2(&VAR_1->delays->lock, VAR_6);

done:
 return 0;
}
