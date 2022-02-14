
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vop_access_args {int a_accmode; int a_cred; TYPE_3__* a_vp; struct thread* a_td; } ;
struct vnode {int dummy; } ;
struct vattr {int dummy; } ;
struct unionfs_node {struct vnode* un_lowervp; struct vnode* un_uppervp; } ;
struct unionfs_mount {scalar_t__ um_copymode; TYPE_2__* um_uppervp; } ;
struct thread {int dummy; } ;
typedef int accmode_t ;
struct TYPE_9__ {int mnt_flag; } ;
struct TYPE_8__ {int v_type; TYPE_4__* v_mount; } ;
struct TYPE_7__ {TYPE_1__* v_mount; } ;
struct TYPE_6__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 struct unionfs_mount* FUNC_1 (TYPE_4__*) ;
 struct vnode* VAR_3 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;


 int FUNC_3 (struct vnode*,int,int ,struct thread*) ;
 int VAR_6 ;

 struct unionfs_node* FUNC_4 (TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_5 (int,struct vattr*,int ) ;
 int FUNC_6 (struct unionfs_mount*,struct vnode*,struct vattr*,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_7(struct vop_access_args *VAR_8)
{
 struct unionfs_mount *VAR_9;
 struct unionfs_node *VAR_10;
 struct vnode *VAR_11;
 struct vnode *VAR_12;
 struct thread *VAR_13;
 struct vattr VAR_14;
 accmode_t VAR_15;
 int VAR_16;

 FUNC_2("unionfs_access: enter\n");

 FUNC_0(VAR_8->a_vp);

 VAR_9 = FUNC_1(VAR_8->a_vp->v_mount);
 VAR_10 = FUNC_4(VAR_8->a_vp);
 VAR_11 = VAR_10->un_uppervp;
 VAR_12 = VAR_10->un_lowervp;
 VAR_13 = VAR_8->a_td;
 VAR_15 = VAR_8->a_accmode;
 VAR_16 = VAR_0;

 if ((VAR_15 & VAR_7) &&
     (VAR_8->a_vp->v_mount->mnt_flag & VAR_2)) {
  switch (VAR_8->a_vp->v_type) {
  case 128:
  case 130:
  case 129:
   return (VAR_1);
  default:
   break;
  }
 }

 if (VAR_11 != VAR_3) {
  VAR_16 = FUNC_3(VAR_11, VAR_15, VAR_8->a_cred, VAR_13);

  FUNC_2("unionfs_access: leave (%d)\n", VAR_16);

  return (VAR_16);
 }

 if (VAR_12 != VAR_3) {
  if (VAR_15 & VAR_7) {
   if (VAR_9->um_uppervp->v_mount->mnt_flag & VAR_2) {
    switch (VAR_8->a_vp->v_type) {
    case 128:
    case 130:
    case 129:
     return (VAR_1);
    default:
     break;
    }
   } else if (VAR_8->a_vp->v_type == 128 || VAR_8->a_vp->v_type == 130) {

    if (VAR_9->um_copymode != VAR_4) {
     VAR_16 = FUNC_6(VAR_9,
         VAR_12, &VAR_14, VAR_8->a_cred, VAR_13);
     if (VAR_16 != 0)
      return (VAR_16);

     VAR_16 = FUNC_5(
         VAR_15, &VAR_14, VAR_8->a_cred);
     if (VAR_16 != 0)
      return (VAR_16);
    }
   }
   VAR_15 &= ~(VAR_7 | VAR_5);
   VAR_15 |= VAR_6;
  }
  VAR_16 = FUNC_3(VAR_12, VAR_15, VAR_8->a_cred, VAR_13);
 }

 FUNC_2("unionfs_access: leave (%d)\n", VAR_16);

 return (VAR_16);
}
