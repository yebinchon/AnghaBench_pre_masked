
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct filedesc {struct vnode* fd_rdir; } ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct thread*,struct vnode*,struct vnode*,char*,char**,int ) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;

int
FUNC_8(struct thread *VAR_6, struct vnode *VAR_7, char **VAR_8, char **VAR_9)
{
 char *VAR_10;
 struct filedesc *VAR_11;
 struct vnode *VAR_12;
 int VAR_13;

 if (FUNC_2(VAR_5))
  return (VAR_1);
 if (FUNC_2(VAR_7 == ((void*)0)))
  return (VAR_0);

 VAR_10 = FUNC_4(VAR_2, VAR_3, VAR_4);
 VAR_11 = VAR_6->td_proc->p_fd;
 FUNC_0(VAR_11);
 VAR_12 = VAR_11->fd_rdir;
 FUNC_6(VAR_12);
 FUNC_1(VAR_11);
 VAR_13 = FUNC_5(VAR_6, VAR_7, VAR_12, VAR_10, VAR_8, VAR_2);
 FUNC_7(VAR_12);

 if (!VAR_13)
  *VAR_9 = VAR_10;
 else
  FUNC_3(VAR_10, VAR_3);
 return (VAR_13);
}
