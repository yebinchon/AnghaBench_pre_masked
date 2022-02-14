
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vop_symlink_args {int a_vpp; TYPE_1__* a_dvp; int a_target; int a_vap; struct componentname* a_cnp; } ;
struct vnode {int dummy; } ;
struct unionfs_node {struct vnode* un_uppervp; } ;
struct thread {int dummy; } ;
struct componentname {int cn_lkflags; } ;
struct TYPE_4__ {int v_mount; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct vnode* VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct vnode*,struct vnode**,struct componentname*,int ,int ) ;
 int FUNC_3 (struct vnode*,int ) ;
 struct unionfs_node* FUNC_4 (TYPE_1__*) ;
 struct thread* VAR_4 ;
 int FUNC_5 (int ,struct vnode*,struct vnode*,TYPE_1__*,int ,struct componentname*,struct thread*) ;
 int FUNC_6 (struct vnode*) ;

__attribute__((used)) static int
FUNC_7(struct vop_symlink_args *VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct unionfs_node *VAR_8;
 struct componentname *VAR_9;
 struct thread *VAR_10;
 struct vnode *VAR_11;
 struct vnode *VAR_12;

 FUNC_1("unionfs_symlink: enter\n");

 FUNC_0(VAR_5->a_dvp);

 VAR_6 = VAR_0;
 VAR_8 = FUNC_4(VAR_5->a_dvp);
 VAR_9 = VAR_5->a_cnp;
 VAR_7 = VAR_9->cn_lkflags;
 VAR_10 = VAR_4;
 VAR_11 = VAR_8->un_uppervp;

 if (VAR_11 != VAR_3) {
  VAR_6 = FUNC_2(VAR_11, &VAR_12, VAR_9, VAR_5->a_vap, VAR_5->a_target);
  if (VAR_6 == 0) {
   FUNC_3(VAR_12, VAR_2);
   VAR_9->cn_lkflags = VAR_1;
   VAR_6 = FUNC_5(VAR_5->a_dvp->v_mount, VAR_12, VAR_3,
       VAR_5->a_dvp, VAR_5->a_vpp, VAR_9, VAR_10);
   VAR_9->cn_lkflags = VAR_7;
   FUNC_6(VAR_12);
  }
 }

 FUNC_1("unionfs_symlink: leave (%d)\n", VAR_6);

 return (VAR_6);
}
