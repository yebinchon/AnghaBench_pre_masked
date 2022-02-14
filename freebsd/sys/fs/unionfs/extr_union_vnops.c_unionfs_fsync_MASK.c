
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_fsync_args {int a_td; int a_waitfor; int a_vp; } ;
struct vnode {int dummy; } ;
struct unionfs_node_status {scalar_t__ uns_upper_opencnt; } ;
struct unionfs_node {struct vnode* un_lowervp; struct vnode* un_uppervp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct vnode* VAR_1 ;
 int FUNC_1 (struct vnode*,int ,int ) ;
 struct unionfs_node* FUNC_2 (int ) ;
 int FUNC_3 (struct unionfs_node*,int ,struct unionfs_node_status**) ;
 int FUNC_4 (struct unionfs_node*,struct unionfs_node_status*) ;

__attribute__((used)) static int
FUNC_5(struct vop_fsync_args *VAR_2)
{
 struct unionfs_node *VAR_3;
 struct unionfs_node_status *VAR_4;
 struct vnode *VAR_5;

 FUNC_0(VAR_2->a_vp);

 VAR_3 = FUNC_2(VAR_2->a_vp);
 FUNC_3(VAR_3, VAR_2->a_td, &VAR_4);
 VAR_5 = (VAR_4->uns_upper_opencnt ? VAR_3->un_uppervp : VAR_3->un_lowervp);
 FUNC_4(VAR_3, VAR_4);

 if (VAR_5 == VAR_1)
  return (VAR_0);

 return (FUNC_1(VAR_5, VAR_2->a_waitfor, VAR_2->a_td));
}
