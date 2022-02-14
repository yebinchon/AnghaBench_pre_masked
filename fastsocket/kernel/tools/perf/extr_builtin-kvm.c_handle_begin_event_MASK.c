
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vcpu_event_record {int start_time; struct kvm_event* last_event; } ;
struct perf_kvm_stat {int dummy; } ;
struct kvm_event {int dummy; } ;
struct event_key {scalar_t__ key; } ;


 scalar_t__ VAR_0 ;
 struct kvm_event* FUNC_0 (struct perf_kvm_stat*,struct event_key*) ;

__attribute__((used)) static bool FUNC_1(struct perf_kvm_stat *VAR_1,
          struct vcpu_event_record *VAR_2,
          struct event_key *VAR_3, u64 VAR_4)
{
 struct kvm_event *VAR_5 = ((void*)0);

 if (VAR_3->key != VAR_0)
  VAR_5 = FUNC_0(VAR_1, VAR_3);

 VAR_2->last_event = VAR_5;
 VAR_2->start_time = VAR_4;
 return 1;
}
