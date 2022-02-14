
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct filedesc {int dummy; } ;
struct filecaps {int dummy; } ;
struct file {struct vnode* f_vnode; int * f_ops; } ;
typedef int cap_rights_t ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct filedesc*,int,int *,struct file**,struct filecaps*) ;
 int FUNC_1 (struct filecaps*) ;
 int FUNC_2 (struct vnode*) ;

int
FUNC_3(struct thread *VAR_3, int VAR_4, cap_rights_t *VAR_5,
    struct filecaps *VAR_6, struct vnode **VAR_7)
{
 struct filedesc *VAR_8;
 struct filecaps VAR_9;
 struct file *VAR_10;
 int VAR_11;

 VAR_8 = VAR_3->td_proc->p_fd;
 VAR_11 = FUNC_0(VAR_8, VAR_4, VAR_5, &VAR_10, &VAR_9);
 if (VAR_11 != 0)
  return (VAR_11);
 if (VAR_10->f_ops == &VAR_2) {
  VAR_11 = VAR_0;
  goto out;
 }
 if (VAR_10->f_vnode == ((void*)0)) {
  VAR_11 = VAR_1;
  goto out;
 }

 *VAR_6 = VAR_9;
 *VAR_7 = VAR_10->f_vnode;
 FUNC_2(*VAR_7);

 return (0);
out:
 FUNC_1(&VAR_9);
 return (VAR_11);
}
