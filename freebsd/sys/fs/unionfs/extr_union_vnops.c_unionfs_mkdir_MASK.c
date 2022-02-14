
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vop_mkdir_args {int a_vpp; TYPE_1__* a_dvp; int a_vap; struct componentname* a_cnp; } ;
struct vnode {int dummy; } ;
struct vattr {int va_flags; } ;
struct unionfs_node {struct vnode* un_uppervp; } ;
struct thread {int dummy; } ;
struct componentname {int cn_lkflags; int cn_flags; int cn_cred; } ;
struct TYPE_4__ {int v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct vnode* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct vnode*,struct vattr*,int ) ;
 int FUNC_3 (struct vnode*,struct vnode**,struct componentname*,int ) ;
 int FUNC_4 (struct vnode*,int ) ;
 struct unionfs_node* FUNC_5 (TYPE_1__*) ;
 struct thread* VAR_6 ;
 int FUNC_6 (int ,struct vnode*,struct vnode*,TYPE_1__*,int ,struct componentname*,struct thread*) ;
 int FUNC_7 (struct vnode*) ;

__attribute__((used)) static int
FUNC_8(struct vop_mkdir_args *VAR_7)
{
 int VAR_8;
 int VAR_9;
 struct unionfs_node *VAR_10;
 struct componentname *VAR_11;
 struct thread *VAR_12;
 struct vnode *VAR_13;
 struct vnode *VAR_14;
 struct vattr VAR_15;

 FUNC_1("unionfs_mkdir: enter\n");

 FUNC_0(VAR_7->a_dvp);

 VAR_8 = VAR_0;
 VAR_10 = FUNC_5(VAR_7->a_dvp);
 VAR_11 = VAR_7->a_cnp;
 VAR_9 = VAR_11->cn_lkflags;
 VAR_12 = VAR_6;
 VAR_13 = VAR_10->un_uppervp;

 if (VAR_13 != VAR_4) {

  if (!(VAR_11->cn_flags & VAR_1)) {
   VAR_8 = FUNC_2(VAR_13, &VAR_15, VAR_11->cn_cred);
   if (VAR_8 != 0)
    return (VAR_8);
   if (VAR_15.va_flags & VAR_5)
    VAR_11->cn_flags |= VAR_1;
  }

  if ((VAR_8 = FUNC_3(VAR_13, &VAR_14, VAR_11, VAR_7->a_vap)) == 0) {
   FUNC_4(VAR_14, VAR_3);
   VAR_11->cn_lkflags = VAR_2;
   VAR_8 = FUNC_6(VAR_7->a_dvp->v_mount, VAR_14, VAR_4,
       VAR_7->a_dvp, VAR_7->a_vpp, VAR_11, VAR_12);
   VAR_11->cn_lkflags = VAR_9;
   FUNC_7(VAR_14);
  }
 }

 FUNC_1("unionfs_mkdir: leave (%d)\n", VAR_8);

 return (VAR_8);
}
