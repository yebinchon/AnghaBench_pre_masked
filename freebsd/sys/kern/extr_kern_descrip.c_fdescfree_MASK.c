
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {struct proc* td_proc; } ;
struct proc {struct filedesc* p_fd; int * p_fdtol; } ;
struct filedesc {struct vnode* fd_jdir; struct vnode* fd_rdir; struct vnode* fd_cdir; int fd_refcnt; } ;


 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 scalar_t__ FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 (struct thread*,struct filedesc*,int) ;
 int FUNC_8 (struct proc*,int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (struct vnode*) ;

void
FUNC_11(struct thread *VAR_1)
{
 struct proc *VAR_2;
 struct filedesc *VAR_3;
 struct vnode *VAR_4, *VAR_5, *VAR_6;

 VAR_2 = VAR_1->td_proc;
 VAR_3 = VAR_2->p_fd;
 FUNC_2(VAR_3 != ((void*)0));






 if (VAR_2->p_fdtol != ((void*)0))
  FUNC_6(VAR_1);

 FUNC_3(VAR_2);
 VAR_2->p_fd = ((void*)0);
 FUNC_4(VAR_2);

 if (FUNC_9(&VAR_3->fd_refcnt) == 0)
  return;

 FUNC_0(VAR_3);
 VAR_4 = VAR_3->fd_cdir;
 VAR_3->fd_cdir = ((void*)0);
 VAR_6 = VAR_3->fd_rdir;
 VAR_3->fd_rdir = ((void*)0);
 VAR_5 = VAR_3->fd_jdir;
 VAR_3->fd_jdir = ((void*)0);
 FUNC_1(VAR_3);

 if (VAR_4 != ((void*)0))
  FUNC_10(VAR_4);
 if (VAR_6 != ((void*)0))
  FUNC_10(VAR_6);
 if (VAR_5 != ((void*)0))
  FUNC_10(VAR_5);

 FUNC_7(VAR_1, VAR_3, 1);
}
