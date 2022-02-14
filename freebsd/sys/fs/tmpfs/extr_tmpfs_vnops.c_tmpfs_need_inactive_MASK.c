
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_need_inactive_args {struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; struct vm_object* v_object; } ;
struct vm_object {scalar_t__ generation; scalar_t__ cleangeneration; } ;
struct tmpfs_node {scalar_t__ tn_links; } ;


 struct tmpfs_node* FUNC_0 (struct vnode*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct vop_need_inactive_args *VAR_1)
{
 struct vnode *VAR_2;
 struct tmpfs_node *VAR_3;
 struct vm_object *VAR_4;

 VAR_2 = VAR_1->a_vp;
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3->tn_links == 0)
  goto need;
 if (VAR_2->v_type == VAR_0) {
  VAR_4 = VAR_2->v_object;
  if (VAR_4->generation != VAR_4->cleangeneration)
   goto need;
 }
 return (0);
need:
 return (1);
}
