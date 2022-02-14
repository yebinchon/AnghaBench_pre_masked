
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct file {int f_cred; struct vnode* f_vnode; } ;


 int FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vnode*,int,int ,struct thread*) ;
 int FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (struct ucred*,int ,struct vnode*) ;
 int FUNC_4 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_2, int VAR_3, struct ucred *VAR_4,
    struct thread *VAR_5)
{
 struct vnode *VAR_6;
 int VAR_7;

 VAR_6 = VAR_2->f_vnode;
 VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_2->f_cred, VAR_5);
 return (VAR_7);
}
