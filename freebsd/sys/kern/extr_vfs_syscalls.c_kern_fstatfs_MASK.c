
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct mount* v_mount; } ;
struct thread {int dummy; } ;
struct statfs {int dummy; } ;
struct mount {int dummy; } ;
struct file {struct vnode* f_vnode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct vnode*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct thread*,int,int *,struct file**) ;
 int FUNC_5 (struct thread*,struct mount*,struct statfs*) ;
 int FUNC_6 (struct mount*) ;
 int FUNC_7 (struct vnode*,int) ;

int
FUNC_8(struct thread *VAR_3, int VAR_4, struct statfs *VAR_5)
{
 struct file *VAR_6;
 struct mount *VAR_7;
 struct vnode *VAR_8;
 int VAR_9;

 FUNC_0(VAR_4);
 VAR_9 = FUNC_4(VAR_3, VAR_4, &VAR_2, &VAR_6);
 if (VAR_9 != 0)
  return (VAR_9);
 VAR_8 = VAR_6->f_vnode;
 FUNC_7(VAR_8, VAR_1 | VAR_0);



 VAR_7 = VAR_8->v_mount;
 if (VAR_7 != ((void*)0))
  FUNC_6(VAR_7);
 FUNC_2(VAR_8, 0);
 FUNC_3(VAR_6, VAR_3);
 return (FUNC_5(VAR_3, VAR_7, VAR_5));
}
