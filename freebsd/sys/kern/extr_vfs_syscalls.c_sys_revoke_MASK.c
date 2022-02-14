
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; int * v_rdev; } ;
struct vattr {scalar_t__ va_uid; } ;
struct thread {TYPE_1__* td_ucred; } ;
struct revoke_args {int path; } ;
struct nameidata {struct vnode* ni_vp; } ;
struct TYPE_3__ {scalar_t__ cr_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct nameidata*,int ,int,int ,int ,struct thread*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct vnode*,struct vattr*,TYPE_1__*) ;
 int FUNC_3 (struct vnode*,int ) ;
 int FUNC_4 (TYPE_1__*,struct vnode*) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (struct thread*,int ) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*) ;

int
FUNC_9(struct thread *VAR_10, struct revoke_args *VAR_11)
{
 struct vnode *VAR_12;
 struct vattr VAR_13;
 struct nameidata VAR_14;
 int VAR_15;

 FUNC_1(&VAR_14, VAR_4, VAR_2 | VAR_3 | VAR_0, VAR_8,
     VAR_11->path, VAR_10);
 if ((VAR_15 = FUNC_5(&VAR_14)) != 0)
  return (VAR_15);
 VAR_12 = VAR_14.ni_vp;
 FUNC_0(&VAR_14, VAR_5);
 if (VAR_12->v_type != VAR_9 || VAR_12->v_rdev == ((void*)0)) {
  VAR_15 = VAR_1;
  goto out;
 }





 VAR_15 = FUNC_2(VAR_12, &VAR_13, VAR_10->td_ucred);
 if (VAR_15 != 0)
  goto out;
 if (VAR_10->td_ucred->cr_uid != VAR_13.va_uid) {
  VAR_15 = FUNC_6(VAR_10, VAR_6);
  if (VAR_15 != 0)
   goto out;
 }
 if (FUNC_7(VAR_12) > 1)
  FUNC_3(VAR_12, VAR_7);
out:
 FUNC_8(VAR_12);
 return (VAR_15);
}
