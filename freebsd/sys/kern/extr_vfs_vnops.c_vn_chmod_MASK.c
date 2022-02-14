
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct file {struct vnode* f_vnode; } ;
typedef int mode_t ;


 int FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vnode*,int ) ;
 int FUNC_2 (struct thread*,struct ucred*,struct vnode*,int ) ;
 int FUNC_3 (struct vnode*,int) ;

int
FUNC_4(struct file *VAR_2, mode_t VAR_3, struct ucred *VAR_4,
    struct thread *VAR_5)
{
 struct vnode *VAR_6;

 VAR_6 = VAR_2->f_vnode;





 return (FUNC_2(VAR_5, VAR_4, VAR_6, VAR_3));
}
