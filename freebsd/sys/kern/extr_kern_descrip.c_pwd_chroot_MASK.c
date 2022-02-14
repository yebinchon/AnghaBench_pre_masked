
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct filedesc {scalar_t__ fd_rdir; struct vnode* fd_jdir; } ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int VAR_0 ;
 int FUNC_2 (struct filedesc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;

int
FUNC_5(struct thread *VAR_2, struct vnode *VAR_3)
{
 struct filedesc *VAR_4;
 struct vnode *VAR_5;
 int VAR_6;

 VAR_4 = VAR_2->td_proc->p_fd;
 FUNC_0(VAR_4);
 if (VAR_0 == 0 ||
     (VAR_0 == 1 && VAR_4->fd_rdir != VAR_1)) {
  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6 != 0) {
   FUNC_1(VAR_4);
   return (VAR_6);
  }
 }
 VAR_5 = VAR_4->fd_rdir;
 FUNC_3(VAR_3);
 VAR_4->fd_rdir = VAR_3;
 if (VAR_4->fd_jdir == ((void*)0)) {
  FUNC_3(VAR_3);
  VAR_4->fd_jdir = VAR_3;
 }
 FUNC_1(VAR_4);
 FUNC_4(VAR_5);
 return (0);
}
