
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;
struct pid {int dummy; } ;
struct kvm_vcpu {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct task_struct*) ;
 struct pid* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct task_struct*,int) ;

bool FUNC_6(struct kvm_vcpu *VAR_2)
{
 struct pid *VAR_3;
 struct task_struct *VAR_4 = ((void*)0);
 bool VAR_5 = 0;

 FUNC_3();
 VAR_3 = FUNC_2(VAR_2->pid);
 if (VAR_3)
  VAR_4 = FUNC_0(VAR_2->pid, VAR_1);
 FUNC_4();
 if (!VAR_4)
  return VAR_5;
 if (VAR_4->flags & VAR_0) {
  FUNC_1(VAR_4);
  return VAR_5;
 }
 VAR_5 = FUNC_5(VAR_4, 1);
 FUNC_1(VAR_4);

 return VAR_5;
}
