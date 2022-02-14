
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_setattr_args {int a_cred; struct vattr* a_vap; int a_vp; } ;
struct vnode {int dummy; } ;
struct vattr {scalar_t__ va_flags; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct file {struct vnode* f_vnode; } ;
typedef int cap_rights_t ;
struct TYPE_2__ {scalar_t__ fd_type; unsigned int fd_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct vnode*,struct vattr*,int ) ;
 int FUNC_1 (struct vnode*,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (int *,int ) ;
 struct thread* VAR_10 ;
 int FUNC_4 (struct file*,struct thread*) ;
 int FUNC_5 (struct thread*,unsigned int,int ,struct file**) ;
 int FUNC_6 (struct mount*) ;
 int FUNC_7 (struct vnode*,int) ;
 int FUNC_8 (struct vnode*,struct mount**,int) ;

__attribute__((used)) static int
FUNC_9(struct vop_setattr_args *VAR_11)
{
 struct vattr *VAR_12 = VAR_11->a_vap;
 struct vnode *VAR_13;
 struct mount *VAR_14;
 struct file *VAR_15;
 struct thread *VAR_16 = VAR_10;
 cap_rights_t VAR_17;
 unsigned VAR_18;
 int VAR_19;




 if (FUNC_2(VAR_11->a_vp)->fd_type == VAR_4)
  return (VAR_1);

 VAR_18 = FUNC_2(VAR_11->a_vp)->fd_fd;




 VAR_19 = FUNC_5(VAR_16, VAR_18,
     FUNC_3(&VAR_17, VAR_0), &VAR_15);
 if (VAR_19) {





  if (VAR_19 == VAR_2) {
   if (VAR_12->va_flags != VAR_8)
    VAR_19 = VAR_3;
   else
    VAR_19 = 0;
  }
  return (VAR_19);
 }
 VAR_13 = VAR_15->f_vnode;
 if ((VAR_19 = FUNC_8(VAR_13, &VAR_14, VAR_9 | VAR_7)) == 0) {
  FUNC_7(VAR_13, VAR_5 | VAR_6);
  VAR_19 = FUNC_0(VAR_13, VAR_11->a_vap, VAR_11->a_cred);
  FUNC_1(VAR_13, 0);
  FUNC_6(VAR_14);
 }
 FUNC_4(VAR_15, VAR_16);
 return (VAR_19);
}
