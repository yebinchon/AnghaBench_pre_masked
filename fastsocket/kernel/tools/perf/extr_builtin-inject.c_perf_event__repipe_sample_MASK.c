
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct perf_tool {int dummy; } ;
struct perf_sample {int dummy; } ;
struct TYPE_2__ {int (* func ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct perf_evsel*,struct machine*) ;} ;
struct perf_evsel {TYPE_1__ handler; } ;
struct machine {int dummy; } ;
typedef int (* inject_handler ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct perf_evsel*,struct machine*) ;


 int FUNC_0 (struct perf_tool*,union perf_event*,struct perf_sample*,struct perf_evsel*,struct machine*) ;
 int FUNC_1 (struct perf_tool*,union perf_event*) ;

__attribute__((used)) static int FUNC_2(struct perf_tool *VAR_0,
         union perf_event *VAR_1,
         struct perf_sample *VAR_2,
         struct perf_evsel *VAR_3,
         struct machine *VAR_4)
{
 if (VAR_3->handler.func) {
  inject_handler VAR_5 = VAR_3->handler.func;
  return VAR_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 }

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return FUNC_1(VAR_0, VAR_1);
}
