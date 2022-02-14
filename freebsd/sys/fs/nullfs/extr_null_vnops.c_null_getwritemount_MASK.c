
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_getwritemount_args {int ** a_mpp; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct null_node {struct vnode* null_lowervp; } ;


 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*,int **) ;
 struct null_node* FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;

__attribute__((used)) static int
FUNC_6(struct vop_getwritemount_args *VAR_0)
{
 struct null_node *VAR_1;
 struct vnode *VAR_2;
 struct vnode *VAR_3;

 VAR_3 = VAR_0->a_vp;
 FUNC_0(VAR_3);
 VAR_1 = FUNC_3(VAR_3);
 if (VAR_1 && (VAR_2 = VAR_1->null_lowervp)) {
  FUNC_5(VAR_2);
  FUNC_1(VAR_3);
  FUNC_2(VAR_2, VAR_0->a_mpp);
  FUNC_4(VAR_2);
 } else {
  FUNC_1(VAR_3);
  *(VAR_0->a_mpp) = ((void*)0);
 }
 return (0);
}
