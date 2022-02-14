
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvm_vcpu {int cpu; unsigned int vcpu_id; int preempted; scalar_t__ run; int wq; int * pid; struct kvm* kvm; int mutex; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct page*) ;

int FUNC_8(struct kvm_vcpu *VAR_3, struct kvm *VAR_4, unsigned VAR_5)
{
 struct page *VAR_6;
 int VAR_7;

 FUNC_6(&VAR_3->mutex);
 VAR_3->cpu = -1;
 VAR_3->kvm = VAR_4;
 VAR_3->vcpu_id = VAR_5;
 VAR_3->pid = ((void*)0);
 FUNC_2(&VAR_3->wq);

 VAR_6 = FUNC_0(VAR_1 | VAR_2);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto fail;
 }
 VAR_3->run = FUNC_7(VAR_6);

 FUNC_5(VAR_3, 0);
 FUNC_4(VAR_3, 0);
 VAR_3->preempted = 0;

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7 < 0)
  goto fail_free_run;
 return 0;

fail_free_run:
 FUNC_1((unsigned long)VAR_3->run);
fail:
 return VAR_7;
}
