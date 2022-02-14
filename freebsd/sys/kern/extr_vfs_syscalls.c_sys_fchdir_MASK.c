
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct mount* v_mountedhere; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct file {struct vnode* f_vnode; } ;
struct fchdir_args {int fd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mount*,int,struct vnode**) ;
 int FUNC_3 (struct vnode*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct vnode*,struct thread*) ;
 int FUNC_5 (struct file*,struct thread*) ;
 int FUNC_6 (struct thread*,int ,int *,struct file**) ;
 int FUNC_7 (struct thread*,struct vnode*) ;
 scalar_t__ FUNC_8 (struct mount*,int ) ;
 int FUNC_9 (struct mount*) ;
 int FUNC_10 (struct vnode*,int) ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*) ;

int
FUNC_13(struct thread *VAR_3, struct fchdir_args *VAR_4)
{
 struct vnode *VAR_5, *VAR_6;
 struct mount *VAR_7;
 struct file *VAR_8;
 int VAR_9;

 FUNC_0(VAR_4->fd);
 VAR_9 = FUNC_6(VAR_3, VAR_4->fd, &VAR_2,
     &VAR_8);
 if (VAR_9 != 0)
  return (VAR_9);
 VAR_5 = VAR_8->f_vnode;
 FUNC_12(VAR_5);
 FUNC_5(VAR_8, VAR_3);
 FUNC_10(VAR_5, VAR_1 | VAR_0);
 FUNC_1(VAR_5);
 VAR_9 = FUNC_4(VAR_5, VAR_3);
 while (!VAR_9 && (VAR_7 = VAR_5->v_mountedhere) != ((void*)0)) {
  if (FUNC_8(VAR_7, 0))
   continue;
  VAR_9 = FUNC_2(VAR_7, VAR_1, &VAR_6);
  FUNC_9(VAR_7);
  if (VAR_9 != 0)
   break;
  FUNC_11(VAR_5);
  VAR_5 = VAR_6;
 }
 if (VAR_9 != 0) {
  FUNC_11(VAR_5);
  return (VAR_9);
 }
 FUNC_3(VAR_5, 0);
 FUNC_7(VAR_3, VAR_5);
 return (0);
}
