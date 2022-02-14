
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int wq; int requests; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int VAR_3 ;

void FUNC_10(struct kvm_vcpu *VAR_4)
{
 FUNC_0(VAR_3);

 for (;;) {
  FUNC_4(&VAR_4->wq, &VAR_3, VAR_1);

  if (FUNC_2(VAR_4)) {
   FUNC_6(VAR_0, &VAR_4->requests);
   break;
  }
  if (FUNC_3(VAR_4))
   break;
  if (FUNC_7(VAR_2))
   break;

  FUNC_9(VAR_4);
  FUNC_5();
  FUNC_8(VAR_4);
 }

 FUNC_1(&VAR_4->wq, &VAR_3);
}
