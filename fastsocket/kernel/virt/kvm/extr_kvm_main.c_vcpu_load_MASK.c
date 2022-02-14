
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pid {int dummy; } ;
struct kvm_vcpu {int preempt_notifier; struct pid* pid; int mutex; } ;
struct TYPE_5__ {TYPE_1__* pids; } ;
struct TYPE_4__ {struct pid* pid; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 () ;
 struct pid* FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct pid*) ;
 int FUNC_7 (struct pid*,struct pid*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(struct kvm_vcpu *VAR_2)
{
 int VAR_3;

 FUNC_3(&VAR_2->mutex);
 if (FUNC_9(VAR_2->pid != VAR_1->pids[VAR_0].pid)) {

  struct pid *VAR_4 = VAR_2->pid;
  struct pid *VAR_5 = FUNC_1(VAR_1, VAR_0);
  FUNC_7(VAR_2->pid, VAR_5);
  FUNC_8();
  FUNC_6(VAR_4);
 }
 VAR_3 = FUNC_0();
 FUNC_4(&VAR_2->preempt_notifier);
 FUNC_2(VAR_2, VAR_3);
 FUNC_5();
}
