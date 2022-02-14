
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_listextattr_args {int a_td; int a_cred; int a_size; int a_uio; int a_attrnamespace; int a_vp; } ;
struct vnode {int dummy; } ;
struct unionfs_node {int un_flag; struct vnode* un_lowervp; struct vnode* un_uppervp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct vnode* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vnode*,int ,int ,int ,int ,int ) ;
 struct unionfs_node* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct vop_listextattr_args *VAR_4)
{
 struct unionfs_node *VAR_5;
 struct vnode *VAR_6;

 FUNC_0(VAR_4->a_vp);

 VAR_5 = FUNC_2(VAR_4->a_vp);
 VAR_6 = VAR_1;

 if (VAR_5->un_flag & VAR_3)
  VAR_6 = VAR_5->un_uppervp;
 else if (VAR_5->un_flag & VAR_2)
  VAR_6 = VAR_5->un_lowervp;

 if (VAR_6 == VAR_1)
  return (VAR_0);

 return (FUNC_1(VAR_6, VAR_4->a_attrnamespace, VAR_4->a_uio,
     VAR_4->a_size, VAR_4->a_cred, VAR_4->a_td));
}
