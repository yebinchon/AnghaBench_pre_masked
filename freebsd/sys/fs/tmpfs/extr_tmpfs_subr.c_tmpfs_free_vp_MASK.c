
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int * v_data; } ;
struct tmpfs_node {int tn_vpstate; int * tn_vnode; } ;


 int FUNC_0 (struct tmpfs_node*) ;
 int VAR_0 ;
 struct tmpfs_node* FUNC_1 (struct vnode*) ;
 int FUNC_2 (int **) ;

void
FUNC_3(struct vnode *VAR_1)
{
 struct tmpfs_node *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2);
 VAR_2->tn_vnode = ((void*)0);
 if ((VAR_2->tn_vpstate & VAR_0) != 0)
  FUNC_2(&VAR_2->tn_vnode);
 VAR_2->tn_vpstate &= ~VAR_0;
 VAR_1->v_data = ((void*)0);
}
