
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_inactive_args {struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct tmpfs_node {scalar_t__ tn_links; } ;


 struct tmpfs_node* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;

__attribute__((used)) static int
FUNC_3(struct vop_inactive_args *VAR_0)
{
 struct vnode *VAR_1;
 struct tmpfs_node *VAR_2;

 VAR_1 = VAR_0->a_vp;
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2->tn_links == 0)
  FUNC_2(VAR_1);
 else
  FUNC_1(VAR_1);
 return (0);
}
