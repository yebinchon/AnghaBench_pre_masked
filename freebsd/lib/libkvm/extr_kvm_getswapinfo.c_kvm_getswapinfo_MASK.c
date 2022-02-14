
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_swap {int dummy; } ;
typedef int kvm_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,struct kvm_swap*,int,int) ;
 int FUNC_2 (int *,struct kvm_swap*,int,int) ;
 scalar_t__ VAR_0 ;

int
FUNC_3(kvm_t *VAR_1, struct kvm_swap *VAR_2, int VAR_3, int VAR_4)
{




 if (VAR_1 == ((void*)0)) {
  VAR_0 = 0;
  return(0);
 }

 if (FUNC_0(VAR_1)) {
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 } else {
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 }
}
