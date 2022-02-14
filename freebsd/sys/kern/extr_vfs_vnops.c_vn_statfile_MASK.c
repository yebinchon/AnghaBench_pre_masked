
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct stat {int dummy; } ;
struct file {int f_cred; struct vnode* f_vnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*,int ) ;
 int FUNC_1 (struct vnode*,int) ;
 int FUNC_2 (struct vnode*,struct stat*,struct ucred*,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_2, struct stat *VAR_3, struct ucred *VAR_4,
    struct thread *VAR_5)
{
 struct vnode *VAR_6 = VAR_2->f_vnode;
 int VAR_7;

 FUNC_1(VAR_6, VAR_1 | VAR_0);
 VAR_7 = FUNC_2(VAR_6, VAR_3, VAR_4, VAR_2->f_cred, VAR_5);
 FUNC_0(VAR_6, 0);

 return (VAR_7);
}
