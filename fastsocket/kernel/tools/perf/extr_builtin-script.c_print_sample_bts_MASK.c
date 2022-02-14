
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union perf_event {int dummy; } perf_event ;
struct thread {int dummy; } ;
struct perf_sample {int dummy; } ;
struct perf_event_attr {int dummy; } ;
struct perf_evsel {struct perf_event_attr attr; } ;
struct machine {int dummy; } ;
struct TYPE_2__ {int use_callchain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct perf_evsel*,union perf_event*,struct perf_sample*,struct machine*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (union perf_event*,struct perf_sample*,struct machine*,struct thread*,struct perf_event_attr*) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_4(union perf_event *VAR_6,
        struct perf_sample *VAR_7,
        struct perf_evsel *VAR_8,
        struct machine *VAR_9,
        struct thread *VAR_10)
{
 struct perf_event_attr *VAR_11 = &VAR_8->attr;


 if (FUNC_0(VAR_2)) {
  if (!VAR_5.use_callchain)
   FUNC_3(" ");
  else
   FUNC_3("\n");
  FUNC_1(VAR_8, VAR_6, VAR_7, VAR_9,
         FUNC_0(VAR_3), FUNC_0(VAR_1),
         FUNC_0(VAR_4));
 }

 FUNC_3(" => ");


 if (FUNC_0(VAR_0))
  FUNC_2(VAR_6, VAR_7, VAR_9, VAR_10, VAR_11);

 FUNC_3("\n");
}
