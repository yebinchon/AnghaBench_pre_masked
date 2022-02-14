
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_pathconf_args {int a_retval; int a_name; int a_vp; } ;
struct vnode {int dummy; } ;
struct unionfs_node {struct vnode* un_lowervp; struct vnode* un_uppervp; } ;


 int FUNC_0 (int ) ;
 struct vnode* VAR_0 ;
 int FUNC_1 (struct vnode*,int ,int ) ;
 struct unionfs_node* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct vop_pathconf_args *VAR_1)
{
 struct unionfs_node *VAR_2;
 struct vnode *VAR_3;

 FUNC_0(VAR_1->a_vp);

 VAR_2 = FUNC_2(VAR_1->a_vp);
 VAR_3 = (VAR_2->un_uppervp != VAR_0 ? VAR_2->un_uppervp : VAR_2->un_lowervp);

 return (FUNC_1(VAR_3, VAR_1->a_name, VAR_1->a_retval));
}
