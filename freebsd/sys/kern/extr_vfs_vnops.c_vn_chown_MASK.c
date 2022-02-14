
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct file {struct vnode* f_vnode; } ;
typedef int gid_t ;


 int FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vnode*,int ) ;
 int FUNC_2 (struct thread*,struct ucred*,struct vnode*,int ,int ) ;
 int FUNC_3 (struct vnode*,int) ;

int
FUNC_4(struct file *VAR_2, uid_t VAR_3, gid_t VAR_4, struct ucred *VAR_5,
    struct thread *VAR_6)
{
 struct vnode *VAR_7;

 VAR_7 = VAR_2->f_vnode;





 return (FUNC_2(VAR_6, VAR_5, VAR_7, VAR_3, VAR_4));
}
