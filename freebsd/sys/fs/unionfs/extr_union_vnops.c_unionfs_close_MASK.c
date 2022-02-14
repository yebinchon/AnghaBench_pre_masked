
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_close_args {int a_fflag; struct thread* a_td; struct ucred* a_cred; struct vnode* a_vp; } ;
struct vnode {int v_object; } ;
struct unionfs_node_status {scalar_t__ uns_lower_opencnt; scalar_t__ uns_upper_opencnt; int uns_node_flag; } ;
struct unionfs_node {struct vnode* un_lowervp; struct vnode* un_uppervp; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vnode* VAR_5 ;
 int FUNC_1 (char*,...) ;
 int VAR_6 ;
 int FUNC_2 (struct vnode*,int ,struct ucred*,struct thread*) ;
 int FUNC_3 (struct vnode*) ;
 struct unionfs_node* FUNC_4 (struct vnode*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct unionfs_node*,struct thread*,struct unionfs_node_status**) ;
 int FUNC_7 (struct unionfs_node*,struct unionfs_node_status*) ;
 scalar_t__ FUNC_8 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_9(struct vop_close_args *VAR_7)
{
 int VAR_8;
 int VAR_9;
 struct unionfs_node *VAR_10;
 struct unionfs_node_status *VAR_11;
 struct ucred *VAR_12;
 struct thread *VAR_13;
 struct vnode *VAR_14;
 struct vnode *VAR_15;

 FUNC_1("unionfs_close: enter\n");

 FUNC_0(VAR_7->a_vp);

 VAR_9 = 0;
 VAR_14 = VAR_7->a_vp;
 VAR_10 = FUNC_4(VAR_14);
 VAR_12 = VAR_7->a_cred;
 VAR_13 = VAR_7->a_td;

 if (FUNC_3(VAR_14) != VAR_2) {
  if (FUNC_8(VAR_14, VAR_4) != 0)
   FUNC_8(VAR_14, VAR_2 | VAR_3);
  VAR_9 = 1;
 }
 FUNC_6(VAR_10, VAR_13, &VAR_11);

 if (VAR_11->uns_lower_opencnt <= 0 && VAR_11->uns_upper_opencnt <= 0) {



  if (VAR_10->un_uppervp != VAR_5)
   VAR_15 = VAR_10->un_uppervp;
  else
   VAR_15 = VAR_10->un_lowervp;
 } else if (VAR_11->uns_upper_opencnt > 0)
  VAR_15 = VAR_10->un_uppervp;
 else
  VAR_15 = VAR_10->un_lowervp;

 VAR_8 = FUNC_2(VAR_15, VAR_7->a_fflag, VAR_12, VAR_13);

 if (VAR_8 != 0)
  goto unionfs_close_abort;

 VAR_14->v_object = VAR_15->v_object;

 if (VAR_15 == VAR_10->un_uppervp) {
  VAR_11->uns_upper_opencnt--;
  if (VAR_11->uns_upper_opencnt == 0) {
   if (VAR_11->uns_node_flag & VAR_6) {
    FUNC_2(VAR_10->un_lowervp, VAR_0, VAR_12, VAR_13);
    VAR_11->uns_node_flag &= ~VAR_6;
    VAR_11->uns_lower_opencnt--;
   }
   if (VAR_11->uns_lower_opencnt > 0)
    VAR_14->v_object = VAR_10->un_lowervp->v_object;
  }
 } else
  VAR_11->uns_lower_opencnt--;

unionfs_close_abort:
 FUNC_7(VAR_10, VAR_11);

 if (VAR_9 != 0)
  FUNC_8(VAR_14, VAR_1 | VAR_3);

 FUNC_1("unionfs_close: leave (%d)\n", VAR_8);

 return (VAR_8);
}
