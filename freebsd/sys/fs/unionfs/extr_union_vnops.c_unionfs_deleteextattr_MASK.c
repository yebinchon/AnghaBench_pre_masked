
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_deleteextattr_args {struct thread* a_td; struct ucred* a_cred; int a_name; int a_attrnamespace; TYPE_2__* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;
struct unionfs_node {int un_flag; struct vnode* un_uppervp; struct vnode* un_lowervp; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_5__ {TYPE_1__* v_mount; } ;
struct TYPE_4__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 struct vnode* VAR_3 ;
 int FUNC_1 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct vnode*,int ,struct ucred*,struct thread*) ;
 int FUNC_3 (struct vnode*,int ,int ,struct ucred*,struct thread*) ;
 int FUNC_4 (struct vnode*,struct ucred*,struct thread*) ;
 scalar_t__ VAR_6 ;
 struct unionfs_node* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct unionfs_node*,int,struct ucred*,struct thread*) ;

__attribute__((used)) static int
FUNC_8(struct vop_deleteextattr_args *VAR_7)
{
 int VAR_8;
 struct unionfs_node *VAR_9;
 struct vnode *VAR_10;
 struct vnode *VAR_11;
 struct vnode *VAR_12;
 struct ucred *VAR_13;
 struct thread *VAR_14;

 FUNC_0(VAR_7->a_vp);

 VAR_8 = VAR_1;
 VAR_9 = FUNC_5(VAR_7->a_vp);
 VAR_10 = VAR_9->un_uppervp;
 VAR_11 = VAR_9->un_lowervp;
 VAR_12 = VAR_3;
 VAR_13 = VAR_7->a_cred;
 VAR_14 = VAR_7->a_td;

 FUNC_1("unionfs_deleteextattr: enter (un_flag=%x)\n", VAR_9->un_flag);

 if (VAR_7->a_vp->v_mount->mnt_flag & VAR_2)
  return (VAR_1);

 if (VAR_9->un_flag & VAR_5)
  VAR_12 = VAR_9->un_uppervp;
 else if (VAR_9->un_flag & VAR_4)
  VAR_12 = VAR_9->un_lowervp;

 if (VAR_12 == VAR_3)
  return (VAR_0);

 if (VAR_12 == VAR_11 && VAR_11->v_type == VAR_6) {
  FUNC_2(VAR_11, 0, VAR_13, VAR_14);
  if (VAR_10 == VAR_3 &&
      (VAR_8 = FUNC_7(VAR_9, 1, VAR_13, VAR_14)) != 0) {
unionfs_deleteextattr_reopen:
   if ((VAR_9->un_flag & VAR_4) &&
       FUNC_4(VAR_11, VAR_13, VAR_14)) {



    VAR_9->un_flag &= ~VAR_4;
   }
   goto unionfs_deleteextattr_abort;
  }
  VAR_10 = VAR_9->un_uppervp;
  if ((VAR_8 = FUNC_4(VAR_10, VAR_13, VAR_14)) != 0)
   goto unionfs_deleteextattr_reopen;
  VAR_9->un_flag &= ~VAR_4;
  VAR_9->un_flag |= VAR_5;
  VAR_12 = VAR_10;
 }

 if (VAR_12 == VAR_10)
  VAR_8 = FUNC_3(VAR_12, VAR_7->a_attrnamespace, VAR_7->a_name,
      VAR_7->a_cred, VAR_7->a_td);

unionfs_deleteextattr_abort:
 FUNC_1("unionfs_deleteextattr: leave (%d)\n", VAR_8);

 return (VAR_8);
}
