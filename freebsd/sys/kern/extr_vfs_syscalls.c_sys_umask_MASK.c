
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct umask_args {int newmask; } ;
struct thread {int* td_retval; TYPE_1__* td_proc; } ;
struct filedesc {int fd_cmask; } ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;

int
FUNC_2(struct thread *VAR_1, struct umask_args *VAR_2)
{
 struct filedesc *VAR_3;

 VAR_3 = VAR_1->td_proc->p_fd;
 FUNC_0(VAR_3);
 VAR_1->td_retval[0] = VAR_3->fd_cmask;
 VAR_3->fd_cmask = VAR_2->newmask & VAR_0;
 FUNC_1(VAR_3);
 return (0);
}
