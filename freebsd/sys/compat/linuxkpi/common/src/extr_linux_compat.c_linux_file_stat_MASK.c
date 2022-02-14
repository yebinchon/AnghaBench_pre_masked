
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int td_ucred; } ;
struct stat {int dummy; } ;
struct linux_file {struct vnode* f_vnode; } ;
struct file {scalar_t__ f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vnode*,int ) ;
 int FUNC_1 (struct vnode*,int) ;
 int FUNC_2 (struct vnode*,struct stat*,int ,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_4, struct stat *VAR_5, struct ucred *VAR_6,
    struct thread *VAR_7)
{
 struct linux_file *VAR_8;
 struct vnode *VAR_9;
 int VAR_10;

 VAR_8 = (struct linux_file *)VAR_4->f_data;
 if (VAR_8->f_vnode == ((void*)0))
  return (VAR_0);

 VAR_9 = VAR_8->f_vnode;

 FUNC_1(VAR_9, VAR_2 | VAR_1);
 VAR_10 = FUNC_2(VAR_9, VAR_5, VAR_7->td_ucred, VAR_3, VAR_7);
 FUNC_0(VAR_9, 0);

 return (VAR_10);
}
