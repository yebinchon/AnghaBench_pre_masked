
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_reclaim_args {struct vnode* a_vp; } ;
struct vnode {struct mqfs_vdata* v_data; int v_mount; } ;
struct mqfs_vdata {struct mqfs_node* mv_node; } ;
struct mqfs_node {int dummy; } ;
struct mqfs_info {int mi_lock; } ;


 int FUNC_0 (struct mqfs_vdata*,int ) ;
 struct mqfs_info* FUNC_1 (int ) ;
 int FUNC_2 (struct mqfs_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct mqfs_vdata*) ;

__attribute__((used)) static int
FUNC_6(struct vop_reclaim_args *VAR_2)
{
 struct mqfs_info *VAR_3 = FUNC_1(VAR_2->a_vp->v_mount);
 struct vnode *VAR_4 = VAR_2->a_vp;
 struct mqfs_node *VAR_5;
 struct mqfs_vdata *VAR_6;

 VAR_6 = VAR_4->v_data;
 VAR_5 = VAR_6->mv_node;
 FUNC_3(&VAR_3->mi_lock);
 VAR_4->v_data = ((void*)0);
 FUNC_0(VAR_6, VAR_0);
 FUNC_5(VAR_1, VAR_6);
 FUNC_2(VAR_5);
 FUNC_4(&VAR_3->mi_lock);
 return (0);
}
