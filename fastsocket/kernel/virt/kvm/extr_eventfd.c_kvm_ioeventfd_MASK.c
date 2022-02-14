
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_ioeventfd {int flags; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm*,struct kvm_ioeventfd*) ;
 int FUNC_1 (struct kvm*,struct kvm_ioeventfd*) ;

int
FUNC_2(struct kvm *VAR_1, struct kvm_ioeventfd *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  return FUNC_1(VAR_1, VAR_2);

 return FUNC_0(VAR_1, VAR_2);
}
