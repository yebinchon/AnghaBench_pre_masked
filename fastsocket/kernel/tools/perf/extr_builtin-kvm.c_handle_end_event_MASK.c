
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vcpu_event_record {int vcpu_id; scalar_t__ start_time; struct kvm_event* last_event; } ;
struct perf_kvm_stat {int trace_vcpu; } ;
struct kvm_event {int dummy; } ;
struct event_key {scalar_t__ key; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct kvm_event* FUNC_1 (struct perf_kvm_stat*,struct event_key*) ;
 int FUNC_2 (struct kvm_event*,int,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct perf_kvm_stat *VAR_1,
        struct vcpu_event_record *VAR_2,
        struct event_key *VAR_3,
        u64 VAR_4)
{
 struct kvm_event *VAR_5;
 u64 VAR_6, VAR_7;
 int VAR_8;

 if (VAR_1->trace_vcpu == -1)
  VAR_8 = -1;
 else
  VAR_8 = VAR_2->vcpu_id;

 VAR_5 = VAR_2->last_event;
 VAR_6 = VAR_2->start_time;


 if (!VAR_6)
  return 1;







 if (!VAR_5 && VAR_3->key == VAR_0)
  return 1;

 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_1, VAR_3);

 if (!VAR_5)
  return 0;

 VAR_2->last_event = ((void*)0);
 VAR_2->start_time = 0;

 FUNC_0(VAR_4 < VAR_6);

 VAR_7 = VAR_4 - VAR_6;
 return FUNC_2(VAR_5, VAR_8, VAR_7);
}
