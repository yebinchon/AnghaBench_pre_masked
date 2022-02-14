
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_kvm_stat {int trace_vcpu; int total_time; int total_count; } ;
struct kvm_event {int dummy; } ;


 scalar_t__ FUNC_0 (struct kvm_event*,int) ;
 scalar_t__ FUNC_1 (struct kvm_event*,int) ;

__attribute__((used)) static void
FUNC_2(struct perf_kvm_stat *VAR_0, struct kvm_event *VAR_1)
{
 int VAR_2 = VAR_0->trace_vcpu;

 VAR_0->total_count += FUNC_0(VAR_1, VAR_2);
 VAR_0->total_time += FUNC_1(VAR_1, VAR_2);
}
