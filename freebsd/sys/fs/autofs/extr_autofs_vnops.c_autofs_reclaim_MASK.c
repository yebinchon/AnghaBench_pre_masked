
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_reclaim_args {struct vnode* a_vp; } ;
struct vnode {struct autofs_node* v_data; } ;
struct autofs_node {int an_vnode_lock; int * an_vnode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct vop_reclaim_args *VAR_0)
{
 struct vnode *VAR_1;
 struct autofs_node *VAR_2;

 VAR_1 = VAR_0->a_vp;
 VAR_2 = VAR_1->v_data;





 FUNC_0(&VAR_2->an_vnode_lock);
 VAR_2->an_vnode = ((void*)0);
 VAR_1->v_data = ((void*)0);
 FUNC_1(&VAR_2->an_vnode_lock);

 return (0);
}
