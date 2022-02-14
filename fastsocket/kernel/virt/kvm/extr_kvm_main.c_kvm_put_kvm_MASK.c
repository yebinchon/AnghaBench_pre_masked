
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int users_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct kvm*) ;

void FUNC_2(struct kvm *VAR_0)
{
 if (FUNC_0(&VAR_0->users_count))
  FUNC_1(VAR_0);
}
