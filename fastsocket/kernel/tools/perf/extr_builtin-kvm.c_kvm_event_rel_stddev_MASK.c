
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_event_stats {int stats; } ;
struct kvm_event {struct kvm_event_stats* vcpu; struct kvm_event_stats total; } ;


 int FUNC_0 (int *) ;
 double FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static double FUNC_3(int VAR_0, struct kvm_event *VAR_1)
{
 struct kvm_event_stats *VAR_2 = &VAR_1->total;

 if (VAR_0 != -1)
  VAR_2 = &VAR_1->vcpu[VAR_0];

 return FUNC_1(FUNC_2(&VAR_2->stats),
    FUNC_0(&VAR_2->stats));
}
