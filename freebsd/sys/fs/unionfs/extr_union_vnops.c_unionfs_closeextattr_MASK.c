
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_closeextattr_args {int a_td; int a_cred; int a_commit; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct unionfs_node {int un_flag; struct vnode* un_uppervp; struct vnode* un_lowervp; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vnode* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct vnode*,int ,int ,int ) ;
 struct unionfs_node* FUNC_2 (struct vnode*) ;
 scalar_t__ FUNC_3 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_4(struct vop_closeextattr_args *VAR_8)
{
 int VAR_9;
 struct unionfs_node *VAR_10;
 struct vnode *VAR_11;
 struct vnode *VAR_12;

 FUNC_0(VAR_8->a_vp);

 VAR_11 = VAR_8->a_vp;
 VAR_10 = FUNC_2(VAR_11);
 VAR_12 = VAR_5;

 if (VAR_10->un_flag & VAR_7)
  VAR_12 = VAR_10->un_uppervp;
 else if (VAR_10->un_flag & VAR_6)
  VAR_12 = VAR_10->un_lowervp;

 if (VAR_12 == VAR_5)
  return (VAR_0);

 VAR_9 = FUNC_1(VAR_12, VAR_8->a_commit, VAR_8->a_cred, VAR_8->a_td);

 if (VAR_9 == 0) {
  if (FUNC_3(VAR_11, VAR_4) != 0)
   FUNC_3(VAR_11, VAR_2 | VAR_3);
  if (VAR_12 == VAR_10->un_uppervp)
   VAR_10->un_flag &= ~VAR_7;
  else
   VAR_10->un_flag &= ~VAR_6;
  FUNC_3(VAR_11, VAR_1 | VAR_3);
 }

 return (VAR_9);
}
