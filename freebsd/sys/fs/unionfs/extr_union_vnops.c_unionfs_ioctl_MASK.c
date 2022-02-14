
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_ioctl_args {int a_td; int a_cred; int a_fflag; int a_data; int a_command; int a_vp; } ;
struct vnode {int dummy; } ;
struct unionfs_node_status {scalar_t__ uns_upper_opencnt; } ;
struct unionfs_node {struct vnode* un_lowervp; struct vnode* un_uppervp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vnode* VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct vnode*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct unionfs_node* FUNC_4 (int ) ;
 int FUNC_5 (struct unionfs_node*,int ,struct unionfs_node_status**) ;
 int FUNC_6 (struct unionfs_node*,struct unionfs_node_status*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8(struct vop_ioctl_args *VAR_5)
{
 int VAR_6;
 struct unionfs_node *VAR_7;
 struct unionfs_node_status *VAR_8;
 struct vnode *VAR_9;

 FUNC_1("unionfs_ioctl: enter\n");

 FUNC_0(VAR_5->a_vp);

  FUNC_7(VAR_5->a_vp, VAR_1 | VAR_3);
 VAR_7 = FUNC_4(VAR_5->a_vp);
 FUNC_5(VAR_7, VAR_5->a_td, &VAR_8);
 VAR_9 = (VAR_8->uns_upper_opencnt ? VAR_7->un_uppervp : VAR_7->un_lowervp);
 FUNC_6(VAR_7, VAR_8);
 FUNC_3(VAR_5->a_vp, VAR_2);

 if (VAR_9 == VAR_4)
  return (VAR_0);

 VAR_6 = FUNC_2(VAR_9, VAR_5->a_command, VAR_5->a_data, VAR_5->a_fflag,
     VAR_5->a_cred, VAR_5->a_td);

 FUNC_1("unionfs_ioctl: leave (%d)\n", VAR_6);

 return (VAR_6);
}
