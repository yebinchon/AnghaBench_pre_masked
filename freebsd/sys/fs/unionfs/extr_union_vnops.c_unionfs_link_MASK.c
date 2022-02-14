
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_link_args {struct vnode* a_tdvp; struct vnode* a_vp; struct componentname* a_cnp; } ;
struct vnode {scalar_t__ v_type; int * v_op; } ;
struct unionfs_node {struct vnode* un_uppervp; } ;
struct thread {int dummy; } ;
struct componentname {int cn_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*) ;
 struct vnode* VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct vnode*,struct vnode*,struct componentname*) ;
 scalar_t__ VAR_3 ;
 struct unionfs_node* FUNC_3 (struct vnode*) ;
 struct thread* VAR_4 ;
 int FUNC_4 (struct unionfs_node*,int,int ,struct thread*) ;
 int FUNC_5 (struct vnode*,struct componentname*,struct thread*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6(struct vop_link_args *VAR_6)
{
 int VAR_7;
 int VAR_8;
 struct unionfs_node *VAR_9;
 struct unionfs_node *VAR_10;
 struct vnode *VAR_11;
 struct vnode *VAR_12;
 struct componentname *VAR_13;
 struct thread *VAR_14;

 FUNC_1("unionfs_link: enter\n");

 FUNC_0(VAR_6->a_tdvp);
 FUNC_0(VAR_6->a_vp);

 VAR_7 = 0;
 VAR_8 = 0;
 VAR_9 = FUNC_3(VAR_6->a_tdvp);
 VAR_10 = ((void*)0);
 VAR_11 = VAR_9->un_uppervp;
 VAR_12 = VAR_2;
 VAR_13 = VAR_6->a_cnp;
 VAR_14 = VAR_4;

 if (VAR_11 == VAR_2)
  return (VAR_1);

 if (VAR_6->a_vp->v_op != &VAR_5)
  VAR_12 = VAR_6->a_vp;
 else {
  VAR_10 = FUNC_3(VAR_6->a_vp);

  if (VAR_10->un_uppervp == VAR_2) {
   if (VAR_6->a_vp->v_type != VAR_3)
    return (VAR_0);

   VAR_7 = FUNC_4(VAR_10, 1, VAR_13->cn_cred, VAR_14);
   if (VAR_7 != 0)
    return (VAR_7);
   VAR_8 = 1;
  }
  VAR_12 = VAR_10->un_uppervp;
 }

 if (VAR_8 != 0)
  VAR_7 = FUNC_5(VAR_6->a_tdvp, VAR_13, VAR_14);

 if (VAR_7 == 0)
  VAR_7 = FUNC_2(VAR_11, VAR_12, VAR_13);

 FUNC_1("unionfs_link: leave (%d)\n", VAR_7);

 return (VAR_7);
}
