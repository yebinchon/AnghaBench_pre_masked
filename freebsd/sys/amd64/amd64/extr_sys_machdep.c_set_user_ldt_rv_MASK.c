
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmspace {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct TYPE_2__ {int p_md; struct vmspace* p_vmspace; } ;


 struct thread* VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct vmspace *VAR_1)
{
 struct thread *VAR_2;

 VAR_2 = VAR_0;
 if (VAR_1 != VAR_2->td_proc->p_vmspace)
  return;

 FUNC_0(&VAR_2->td_proc->p_md);
}
