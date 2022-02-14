
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmspace {scalar_t__ vm_daddr; int vm_dsize; } ;
struct thread {void** td_retval; TYPE_1__* td_proc; } ;
struct linux_brk_args {scalar_t__ dsend; } ;
typedef void* register_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {struct vmspace* p_vmspace; } ;


 uintptr_t FUNC_0 (int ) ;
 int FUNC_1 (struct thread*,uintptr_t*) ;

int
FUNC_2(struct thread *VAR_0, struct linux_brk_args *VAR_1)
{
 struct vmspace *VAR_2 = VAR_0->td_proc->p_vmspace;
 uintptr_t VAR_3, VAR_4;

 VAR_4 = (uintptr_t)VAR_2->vm_daddr + FUNC_0(VAR_2->vm_dsize);
 VAR_3 = (uintptr_t)VAR_1->dsend;
 if ((caddr_t)VAR_3 > VAR_2->vm_daddr && !FUNC_1(VAR_0, &VAR_3))
  VAR_0->td_retval[0] = (register_t)VAR_3;
 else
  VAR_0->td_retval[0] = (register_t)VAR_4;

 return (0);
}
