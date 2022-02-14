
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_unlock_args {int a_flags; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct unionfs_node {struct vnode* un_uppervp; struct vnode* un_lowervp; } ;


 int FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 struct vnode* VAR_1 ;
 int FUNC_1 (struct vnode*,int) ;
 struct unionfs_node* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vop_unlock_args*) ;

__attribute__((used)) static int
FUNC_6(struct vop_unlock_args *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 struct vnode *VAR_6;
 struct vnode *VAR_7;
 struct vnode *VAR_8;
 struct unionfs_node *VAR_9;

 FUNC_0(VAR_2->a_vp);

 VAR_3 = 0;
 VAR_5 = 0;
 VAR_4 = VAR_2->a_flags | VAR_0;
 VAR_6 = VAR_2->a_vp;

 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9 == ((void*)0))
  goto unionfs_unlock_null_vnode;
 VAR_7 = VAR_9->un_lowervp;
 VAR_8 = VAR_9->un_uppervp;

 if (VAR_7 != VAR_1) {
  FUNC_4(VAR_7);
  VAR_3 = FUNC_1(VAR_7, VAR_4);
 }

 if (VAR_3 == 0 && VAR_8 != VAR_1) {
  FUNC_4(VAR_8);
  VAR_5 = 1;
  VAR_3 = FUNC_1(VAR_8, VAR_4);
 }

 if (VAR_7 != VAR_1)
  FUNC_3(VAR_7);
 if (VAR_5 != 0)
  FUNC_3(VAR_8);

 return VAR_3;

unionfs_unlock_null_vnode:
 return (FUNC_5(VAR_2));
}
