
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cbq_sched_data {int now; int pmask; int wd_expires; int delay_timer; } ;
struct TYPE_3__ {int overactions; } ;
struct cbq_class {int undertime; int delayed; int avgidle; int ewma_log; int minidle; int penalized; int cpriority; TYPE_1__ xstats; scalar_t__ penalty; scalar_t__ offtime; int qdisc; } ;
typedef int psched_time_t ;
typedef int psched_tdiff_t ;
typedef int ktime_t ;
struct TYPE_4__ {int state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 struct cbq_sched_data* FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct cbq_class *VAR_2)
{
 struct cbq_sched_data *VAR_3 = FUNC_9(VAR_2->qdisc);
 psched_tdiff_t VAR_4 = VAR_2->undertime - VAR_3->now;

 if (FUNC_11(VAR_1,
       &FUNC_10(VAR_2->qdisc)->state))
  return;

 if (!VAR_2->delayed) {
  psched_time_t VAR_5 = VAR_3->now;
  ktime_t VAR_6;

  VAR_4 += VAR_2->offtime;
  if (VAR_2->avgidle < 0)
   VAR_4 -= (-VAR_2->avgidle) - ((-VAR_2->avgidle) >> VAR_2->ewma_log);
  if (VAR_2->avgidle < VAR_2->minidle)
   VAR_2->avgidle = VAR_2->minidle;
  VAR_2->undertime = VAR_3->now + VAR_4;

  if (VAR_4 > 0) {
   VAR_5 += VAR_4 + VAR_2->penalty;
   VAR_2->penalized = VAR_5;
   VAR_2->cpriority = VAR_0;
   VAR_3->pmask |= (1<<VAR_0);

   VAR_6 = FUNC_6(0, 0);
   VAR_6 = FUNC_5(VAR_6, FUNC_0(VAR_5));
   if (FUNC_4(&VAR_3->delay_timer) &&
       FUNC_8(FUNC_7(
     FUNC_1(&VAR_3->delay_timer),
     VAR_6)) > 0)
    FUNC_3(&VAR_3->delay_timer, VAR_6);
   FUNC_2(&VAR_3->delay_timer);
   VAR_2->delayed = 1;
   VAR_2->xstats.overactions++;
   return;
  }
  VAR_4 = 1;
 }
 if (VAR_3->wd_expires == 0 || VAR_3->wd_expires > VAR_4)
  VAR_3->wd_expires = VAR_4;
}
