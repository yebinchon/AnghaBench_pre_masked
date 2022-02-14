
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct vop_setattr_args {int a_cred; TYPE_4__* a_vp; struct vattr* a_vap; } ;
struct vnode {scalar_t__ v_type; } ;
struct TYPE_8__ {scalar_t__ tv_sec; } ;
struct TYPE_7__ {scalar_t__ tv_sec; } ;
struct vattr {scalar_t__ va_flags; scalar_t__ va_uid; scalar_t__ va_gid; scalar_t__ va_mode; scalar_t__ va_size; TYPE_3__ va_mtime; TYPE_2__ va_atime; } ;
struct unionfs_node {struct vnode* un_uppervp; struct vnode* un_lowervp; } ;
struct thread {int dummy; } ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ gid_t ;
struct TYPE_9__ {TYPE_1__* v_mount; } ;
struct TYPE_6__ {int mnt_flag; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 struct vnode* VAR_2 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct vnode*,struct vattr*,int ) ;
 scalar_t__ VAR_4 ;
 struct unionfs_node* FUNC_3 (TYPE_4__*) ;
 struct thread* VAR_5 ;
 int FUNC_4 (struct unionfs_node*,int,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_5(struct vop_setattr_args *VAR_6)
{
 int VAR_7;
 struct unionfs_node *VAR_8;
 struct vnode *VAR_9;
 struct vnode *VAR_10;
 struct thread *VAR_11;
 struct vattr *VAR_12;

 FUNC_1("unionfs_setattr: enter\n");

 FUNC_0(VAR_6->a_vp);

 VAR_7 = VAR_0;
 VAR_8 = FUNC_3(VAR_6->a_vp);
 VAR_9 = VAR_8->un_uppervp;
 VAR_10 = VAR_8->un_lowervp;
 VAR_11 = VAR_5;
 VAR_12 = VAR_6->a_vap;

 if ((VAR_6->a_vp->v_mount->mnt_flag & VAR_1) &&
     (VAR_12->va_flags != VAR_3 || VAR_12->va_uid != (uid_t)VAR_3 ||
      VAR_12->va_gid != (gid_t)VAR_3 || VAR_12->va_atime.tv_sec != VAR_3 ||
      VAR_12->va_mtime.tv_sec != VAR_3 || VAR_12->va_mode != (mode_t)VAR_3))
  return (VAR_0);

 if (VAR_9 == VAR_2 && VAR_10->v_type == VAR_4) {
  VAR_7 = FUNC_4(VAR_8, (VAR_12->va_size != 0),
      VAR_6->a_cred, VAR_11);
  if (VAR_7 != 0)
   return (VAR_7);
  VAR_9 = VAR_8->un_uppervp;
 }

 if (VAR_9 != VAR_2)
  VAR_7 = FUNC_2(VAR_9, VAR_12, VAR_6->a_cred);

 FUNC_1("unionfs_setattr: leave (%d)\n", VAR_7);

 return (VAR_7);
}
