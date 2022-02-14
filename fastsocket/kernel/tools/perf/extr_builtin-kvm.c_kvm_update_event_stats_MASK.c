
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kvm_event_stats {int stats; int time; } ;


 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct kvm_event_stats *VAR_0, u64 VAR_1)
{
 VAR_0->time += VAR_1;
 FUNC_0(&VAR_0->stats, VAR_1);
}
