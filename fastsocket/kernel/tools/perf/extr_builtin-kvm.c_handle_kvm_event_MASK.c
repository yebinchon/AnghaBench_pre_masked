
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vcpu_event_record {scalar_t__ vcpu_id; } ;
struct thread {int dummy; } ;
struct perf_sample {int time; } ;
struct perf_kvm_stat {int trace_vcpu; TYPE_1__* events_ops; } ;
struct perf_evsel {int dummy; } ;
struct event_key {int key; } ;
struct TYPE_2__ {scalar_t__ (* is_end_event ) (struct perf_evsel*,struct perf_sample*,struct event_key*) ;scalar_t__ (* is_begin_event ) (struct perf_evsel*,struct perf_sample*,struct event_key*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct perf_kvm_stat*,struct vcpu_event_record*,struct event_key*,int ) ;
 int FUNC_1 (struct perf_kvm_stat*,struct vcpu_event_record*,struct event_key*,int ) ;
 struct vcpu_event_record* FUNC_2 (struct thread*,struct perf_evsel*,struct perf_sample*) ;
 scalar_t__ FUNC_3 (struct perf_evsel*,struct perf_sample*,struct event_key*) ;
 scalar_t__ FUNC_4 (struct perf_evsel*,struct perf_sample*,struct event_key*) ;

__attribute__((used)) static bool FUNC_5(struct perf_kvm_stat *VAR_1,
        struct thread *VAR_2,
        struct perf_evsel *VAR_3,
        struct perf_sample *VAR_4)
{
 struct vcpu_event_record *VAR_5;
 struct event_key VAR_6 = {.key = VAR_0};

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return 1;


 if ((VAR_1->trace_vcpu != -1) &&
     (VAR_1->trace_vcpu != VAR_5->vcpu_id))
  return 1;

 if (VAR_1->events_ops->is_begin_event(VAR_3, VAR_4, &VAR_6))
  return FUNC_0(VAR_1, VAR_5, &VAR_6, VAR_4->time);

 if (VAR_1->events_ops->is_end_event(VAR_3, VAR_4, &VAR_6))
  return FUNC_1(VAR_1, VAR_5, &VAR_6, VAR_4->time);

 return 1;
}
