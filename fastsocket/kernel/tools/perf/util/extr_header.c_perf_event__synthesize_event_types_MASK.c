
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_trace_event_type {int name; int event_id; } ;
struct perf_tool {int dummy; } ;
struct machine {int dummy; } ;
typedef int perf_event__handler_t ;


 int FUNC_0 (struct perf_tool*,int ,int ,int ,struct machine*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct perf_trace_event_type* VAR_1 ;

int FUNC_2(struct perf_tool *VAR_2,
           perf_event__handler_t VAR_3,
           struct machine *VAR_4)
{
 struct perf_trace_event_type *VAR_5;
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = &VAR_1[VAR_6];

  VAR_7 = FUNC_0(VAR_2, VAR_5->event_id,
       VAR_5->name, VAR_3,
       VAR_4);
  if (VAR_7) {
   FUNC_1("failed to create perf header event type\n");
   return VAR_7;
  }
 }

 return VAR_7;
}
