
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct thread {int dummy; } ;
struct perf_sample {int raw_size; int raw_data; int cpu; } ;
struct perf_event_attr {size_t type; } ;
struct perf_evsel {int tp_format; struct perf_event_attr attr; } ;
struct machine {int dummy; } ;
struct addr_location {struct thread* thread; } ;
struct TYPE_4__ {scalar_t__ fields; } ;
struct TYPE_3__ {int use_callchain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct perf_event_attr*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (struct perf_evsel*,union perf_event*,struct perf_sample*,struct machine*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (union perf_event*,struct perf_sample*,struct machine*,struct thread*,struct perf_event_attr*) ;
 int FUNC_5 (union perf_event*,struct perf_sample*,struct perf_evsel*,struct machine*,struct thread*) ;
 int FUNC_6 (struct perf_sample*,struct thread*,struct perf_evsel*) ;
 int FUNC_7 (char*) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void FUNC_8(union perf_event *VAR_8, struct perf_sample *VAR_9,
     struct perf_evsel *VAR_10, struct machine *VAR_11,
     struct addr_location *VAR_12)
{
 struct perf_event_attr *VAR_13 = &VAR_10->attr;
 struct thread *VAR_14 = VAR_12->thread;

 if (VAR_6[VAR_13->type].fields == 0)
  return;

 FUNC_6(VAR_9, VAR_14, VAR_10);

 if (FUNC_2(VAR_13)) {
  FUNC_5(VAR_8, VAR_9, VAR_10, VAR_11, VAR_14);
  return;
 }

 if (FUNC_0(VAR_5))
  FUNC_1(VAR_10->tp_format, VAR_9->cpu,
        VAR_9->raw_data, VAR_9->raw_size);
 if (FUNC_0(VAR_0))
  FUNC_4(VAR_8, VAR_9, VAR_11, VAR_14, VAR_13);

 if (FUNC_0(VAR_2)) {
  if (!VAR_7.use_callchain)
   FUNC_7(" ");
  else
   FUNC_7("\n");
  FUNC_3(VAR_10, VAR_8, VAR_9, VAR_11,
         FUNC_0(VAR_3), FUNC_0(VAR_1),
         FUNC_0(VAR_4));
 }

 FUNC_7("\n");
}
