
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {struct filedesc* p_fd; } ;
struct filedesc {int fd_refcnt; } ;


 struct filedesc* FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct thread*) ;

void
FUNC_2(struct thread *VAR_0)
{
 struct filedesc *VAR_1;
 struct proc *VAR_2 = VAR_0->td_proc;

 if (VAR_2->p_fd->fd_refcnt == 1)
  return;

 VAR_1 = FUNC_0(VAR_2->p_fd);
 FUNC_1(VAR_0);
 VAR_2->p_fd = VAR_1;
}
