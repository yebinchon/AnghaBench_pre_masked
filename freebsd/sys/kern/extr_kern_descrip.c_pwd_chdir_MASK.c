
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_usecount; } ;
struct thread {TYPE_1__* td_proc; } ;
struct filedesc {struct vnode* fd_cdir; } ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int FUNC_2 (int,struct vnode*,char*) ;
 int FUNC_3 (struct vnode*) ;

void
FUNC_4(struct thread *VAR_0, struct vnode *VAR_1)
{
 struct filedesc *VAR_2;
 struct vnode *VAR_3;

 VAR_2 = VAR_0->td_proc->p_fd;
 FUNC_0(VAR_2);
 FUNC_2(VAR_1->v_usecount > 0, VAR_1,
     ("chdir to a vnode with zero usecount"));
 VAR_3 = VAR_2->fd_cdir;
 VAR_2->fd_cdir = VAR_1;
 FUNC_1(VAR_2);
 FUNC_3(VAR_3);
}
