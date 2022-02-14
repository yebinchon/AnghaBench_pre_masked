
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct vop_rmdir_args {TYPE_1__* a_vp; TYPE_1__* a_dvp; struct componentname* a_cnp; } ;
struct vnode {int dummy; } ;
struct unionfs_node {int un_path; struct vnode* un_lowervp; struct vnode* un_uppervp; } ;
struct unionfs_mount {scalar_t__ um_whitemode; } ;
struct thread {int dummy; } ;
struct componentname {int cn_flags; int cn_cred; } ;
struct TYPE_6__ {int v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 struct unionfs_mount* FUNC_1 (int ) ;
 struct vnode* VAR_3 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct vnode*,struct vnode*,struct componentname*) ;
 struct unionfs_node* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct thread* VAR_5 ;
 int FUNC_6 (TYPE_1__*,int ,struct thread*) ;
 int FUNC_7 (struct vnode*,struct componentname*,struct thread*,int ) ;
 int FUNC_8 (TYPE_1__*,struct componentname*,struct thread*) ;

__attribute__((used)) static int
FUNC_9(struct vop_rmdir_args *VAR_6)
{
 int VAR_7;
 struct unionfs_node *VAR_8;
 struct unionfs_node *VAR_9;
 struct unionfs_mount *VAR_10;
 struct componentname *VAR_11;
 struct thread *VAR_12;
 struct vnode *VAR_13;
 struct vnode *VAR_14;
 struct vnode *VAR_15;

 FUNC_2("unionfs_rmdir: enter\n");

 FUNC_0(VAR_6->a_dvp);
 FUNC_0(VAR_6->a_vp);

 VAR_7 = 0;
 VAR_8 = FUNC_4(VAR_6->a_dvp);
 VAR_9 = FUNC_4(VAR_6->a_vp);
 VAR_11 = VAR_6->a_cnp;
 VAR_12 = VAR_5;
 VAR_13 = VAR_8->un_uppervp;
 VAR_14 = VAR_9->un_uppervp;
 VAR_15 = VAR_9->un_lowervp;

 if (VAR_13 == VAR_3)
  return (VAR_2);

 if (VAR_13 == VAR_14)
  return (VAR_1);

 if (VAR_14 != VAR_3) {
  if (VAR_15 != VAR_3) {
   VAR_7 = FUNC_6(VAR_6->a_vp, VAR_11->cn_cred, VAR_12);
   if (VAR_7 != 0)
    return (VAR_7);
  }
  VAR_10 = FUNC_1(VAR_6->a_vp->v_mount);
  if (VAR_10->um_whitemode == VAR_4 || VAR_15 != VAR_3)
   VAR_11->cn_flags |= VAR_0;
  VAR_7 = FUNC_8(VAR_6->a_dvp, VAR_11, VAR_12);
  if (!VAR_7)
   VAR_7 = FUNC_3(VAR_13, VAR_14, VAR_11);
 }
 else if (VAR_15 != VAR_3)
  VAR_7 = FUNC_7(VAR_13, VAR_11, VAR_12, VAR_9->un_path);

 if (VAR_7 == 0) {
  FUNC_5(VAR_6->a_dvp);
  FUNC_5(VAR_6->a_vp);
 }

 FUNC_2("unionfs_rmdir: leave (%d)\n", VAR_7);

 return (VAR_7);
}
