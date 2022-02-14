
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_rename_args {struct vnode* a_tvp; struct vnode* a_fdvp; struct vnode* a_fvp; struct vnode* a_tdvp; } ;
struct vop_generic_args {int dummy; } ;
struct vnode {scalar_t__ v_mount; } ;
struct null_node {int null_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct null_node* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vop_generic_args*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;

__attribute__((used)) static int
FUNC_4(struct vop_rename_args *VAR_2)
{
 struct vnode *VAR_3 = VAR_2->a_tdvp;
 struct vnode *VAR_4 = VAR_2->a_fvp;
 struct vnode *VAR_5 = VAR_2->a_fdvp;
 struct vnode *VAR_6 = VAR_2->a_tvp;
 struct null_node *VAR_7;


 if ((VAR_4->v_mount != VAR_3->v_mount) ||
     (VAR_6 && (VAR_4->v_mount != VAR_6->v_mount))) {
  if (VAR_3 == VAR_6)
   FUNC_3(VAR_3);
  else
   FUNC_2(VAR_3);
  if (VAR_6)
   FUNC_2(VAR_6);
  FUNC_3(VAR_5);
  FUNC_3(VAR_4);
  return (VAR_0);
 }

 if (VAR_6 != ((void*)0)) {
  VAR_7 = FUNC_0(VAR_6);
  VAR_7->null_flags |= VAR_1;
 }
 return (FUNC_1((struct vop_generic_args *)VAR_2));
}
