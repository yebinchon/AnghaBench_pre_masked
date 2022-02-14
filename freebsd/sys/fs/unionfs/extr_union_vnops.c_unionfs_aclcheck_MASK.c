
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_aclcheck_args {int a_td; int a_cred; int a_aclp; int a_type; int a_vp; } ;
struct vnode {int dummy; } ;
struct unionfs_node {struct vnode* un_lowervp; struct vnode* un_uppervp; } ;


 int FUNC_0 (int ) ;
 struct vnode* VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct vnode*,int ,int ,int ,int ) ;
 struct unionfs_node* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct vop_aclcheck_args *VAR_1)
{
 int VAR_2;
 struct unionfs_node *VAR_3;
 struct vnode *VAR_4;

 FUNC_1("unionfs_aclcheck: enter\n");

 FUNC_0(VAR_1->a_vp);

 VAR_3 = FUNC_3(VAR_1->a_vp);
 VAR_4 = (VAR_3->un_uppervp != VAR_0 ? VAR_3->un_uppervp : VAR_3->un_lowervp);

 VAR_2 = FUNC_2(VAR_4, VAR_1->a_type, VAR_1->a_aclp, VAR_1->a_cred, VAR_1->a_td);

 FUNC_1("unionfs_aclcheck: leave (%d)\n", VAR_2);

 return (VAR_2);
}
