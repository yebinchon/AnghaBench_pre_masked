
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct perf_event_context {int dummy; } ;
struct perf_event {void* tstamp_stopped; void* tstamp_running; void* tstamp_enabled; } ;


 int FUNC_0 (struct perf_event*,struct perf_event_context*) ;
 void* FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_0,
          struct perf_event_context *VAR_1)
{
 u64 VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_0);
 VAR_0->tstamp_enabled = VAR_2;
 VAR_0->tstamp_running = VAR_2;
 VAR_0->tstamp_stopped = VAR_2;
}
