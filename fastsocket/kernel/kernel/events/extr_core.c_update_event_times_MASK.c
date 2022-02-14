
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct perf_event_context {void* time; scalar_t__ is_active; } ;
struct perf_event {scalar_t__ state; void* tstamp_enabled; void* tstamp_running; void* total_time_running; void* tstamp_stopped; void* total_time_enabled; TYPE_1__* group_leader; struct perf_event_context* ctx; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 void* FUNC_1 (struct perf_event*) ;
 void* FUNC_2 (struct perf_event*) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_1)
{
 struct perf_event_context *VAR_2 = VAR_1->ctx;
 u64 VAR_3;

 if (VAR_1->state < VAR_0 ||
     VAR_1->group_leader->state < VAR_0)
  return;
 if (FUNC_0(VAR_1))
  VAR_3 = FUNC_1(VAR_1);
 else if (VAR_2->is_active)
  VAR_3 = VAR_2->time;
 else
  VAR_3 = VAR_1->tstamp_stopped;

 VAR_1->total_time_enabled = VAR_3 - VAR_1->tstamp_enabled;

 if (VAR_1->state == VAR_0)
  VAR_3 = VAR_1->tstamp_stopped;
 else
  VAR_3 = FUNC_2(VAR_1);

 VAR_1->total_time_running = VAR_3 - VAR_1->tstamp_running;

}
