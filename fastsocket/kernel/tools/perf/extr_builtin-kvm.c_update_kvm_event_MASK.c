
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_event {int * vcpu; int total; } ;


 int FUNC_0 (struct kvm_event*,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static bool FUNC_2(struct kvm_event *VAR_0, int VAR_1,
        u64 VAR_2)
{
 if (VAR_1 == -1) {
  FUNC_1(&VAR_0->total, VAR_2);
  return 1;
 }

 if (!FUNC_0(VAR_0, VAR_1))
  return 0;

 FUNC_1(&VAR_0->vcpu[VAR_1], VAR_2);
 return 1;
}
