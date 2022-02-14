
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct file {int * f_ops; int * f_vnode; } ;
typedef int cap_rights_t ;
struct TYPE_2__ {int p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,struct thread*) ;
 int FUNC_1 (int ,int,int *,struct file**,int *) ;

int
FUNC_2(struct thread *VAR_2, int VAR_3, cap_rights_t *VAR_4, struct file **VAR_5)
{
 struct file *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2->td_proc->p_fd, VAR_3, VAR_4, &VAR_6, ((void*)0));
 if (VAR_7 != 0)
  return (VAR_7);
 if (VAR_6->f_vnode == ((void*)0) || VAR_6->f_ops == &VAR_1) {
  FUNC_0(VAR_6, VAR_2);
  return (VAR_0);
 }
 *VAR_5 = VAR_6;
 return (0);
}
