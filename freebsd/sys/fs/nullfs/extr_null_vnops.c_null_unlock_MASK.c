
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_unlock_args {struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct null_node {int dummy; } ;


 struct vnode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*,int ) ;
 struct null_node* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vop_unlock_args*) ;

__attribute__((used)) static int
FUNC_6(struct vop_unlock_args *VAR_0)
{
 struct vnode *VAR_1 = VAR_0->a_vp;
 struct null_node *VAR_2;
 struct vnode *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 != ((void*)0) && (VAR_3 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_4(VAR_3);
  VAR_4 = FUNC_1(VAR_3, 0);
  FUNC_3(VAR_3);
 } else {
  VAR_4 = FUNC_5(VAR_0);
 }

 return (VAR_4);
}
