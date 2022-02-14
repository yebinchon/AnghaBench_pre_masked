
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_poll_args {int a_td; int a_cred; int a_events; int a_vp; } ;
struct vnode {int dummy; } ;
struct unionfs_node_status {scalar_t__ uns_upper_opencnt; } ;
struct unionfs_node {struct vnode* un_lowervp; struct vnode* un_uppervp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vnode* VAR_4 ;
 int FUNC_1 (struct vnode*,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct unionfs_node* FUNC_3 (int ) ;
 int FUNC_4 (struct unionfs_node*,int ,struct unionfs_node_status**) ;
 int FUNC_5 (struct unionfs_node*,struct unionfs_node_status*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(struct vop_poll_args *VAR_5)
{
 struct unionfs_node *VAR_6;
 struct unionfs_node_status *VAR_7;
 struct vnode *VAR_8;

 FUNC_0(VAR_5->a_vp);

  FUNC_6(VAR_5->a_vp, VAR_1 | VAR_3);
 VAR_6 = FUNC_3(VAR_5->a_vp);
 FUNC_4(VAR_6, VAR_5->a_td, &VAR_7);
 VAR_8 = (VAR_7->uns_upper_opencnt ? VAR_6->un_uppervp : VAR_6->un_lowervp);
 FUNC_5(VAR_6, VAR_7);
 FUNC_2(VAR_5->a_vp, VAR_2);

 if (VAR_8 == VAR_4)
  return (VAR_0);

 return (FUNC_1(VAR_8, VAR_5->a_events, VAR_5->a_cred, VAR_5->a_td));
}
