
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_advlock_args {int a_flags; int a_fl; int a_op; int a_id; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct unionfs_node_status {scalar_t__ uns_lower_opencnt; int uns_lower_openmode; int uns_upper_opencnt; } ;
struct unionfs_node {int un_lowervp; struct vnode* un_uppervp; } ;
struct thread {int td_ucred; } ;


 int FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vnode* VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct vnode*,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,struct thread*) ;
 int FUNC_4 (struct vnode*,int ,int ,struct thread*,int *) ;
 int FUNC_5 (struct vnode*,int ) ;
 struct unionfs_node* FUNC_6 (struct vnode*) ;
 struct thread* VAR_4 ;
 int FUNC_7 (struct unionfs_node*,int,int ,struct thread*) ;
 int FUNC_8 (struct unionfs_node*,struct thread*,struct unionfs_node_status**) ;
 int FUNC_9 (struct unionfs_node*,struct unionfs_node_status*) ;
 int FUNC_10 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_11(struct vop_advlock_args *VAR_5)
{
 int VAR_6;
 struct unionfs_node *VAR_7;
 struct unionfs_node_status *VAR_8;
 struct vnode *VAR_9;
 struct vnode *VAR_10;
 struct thread *VAR_11;

 FUNC_1("unionfs_advlock: enter\n");

 FUNC_0(VAR_5->a_vp);

 VAR_9 = VAR_5->a_vp;
 VAR_11 = VAR_4;

 FUNC_10(VAR_9, VAR_0 | VAR_2);

 VAR_7 = FUNC_6(VAR_5->a_vp);
 VAR_10 = VAR_7->un_uppervp;

 if (VAR_10 == VAR_3) {
  VAR_6 = FUNC_7(VAR_7, 1, VAR_11->td_ucred, VAR_11);
  if (VAR_6 != 0)
   goto unionfs_advlock_abort;
  VAR_10 = VAR_7->un_uppervp;

  FUNC_8(VAR_7, VAR_11, &VAR_8);
  if (VAR_8->uns_lower_opencnt > 0) {

   VAR_6 = FUNC_4(VAR_10, VAR_8->uns_lower_openmode,
    VAR_11->td_ucred, VAR_11, ((void*)0));
   if (VAR_6)
    goto unionfs_advlock_abort;
   VAR_8->uns_upper_opencnt++;
   FUNC_3(VAR_7->un_lowervp, VAR_8->uns_lower_openmode, VAR_11->td_ucred, VAR_11);
   VAR_8->uns_lower_opencnt--;
  } else
   FUNC_9(VAR_7, VAR_8);
 }

 FUNC_5(VAR_9, VAR_1);

 VAR_6 = FUNC_2(VAR_10, VAR_5->a_id, VAR_5->a_op, VAR_5->a_fl, VAR_5->a_flags);

 FUNC_1("unionfs_advlock: leave (%d)\n", VAR_6);

 return VAR_6;

unionfs_advlock_abort:
 FUNC_5(VAR_9, VAR_1);

 FUNC_1("unionfs_advlock: leave (%d)\n", VAR_6);

 return VAR_6;
}
