
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_setattr_args {struct vnode* a_vp; } ;
struct vnode {struct pfs_vdata* v_data; } ;
struct pfs_vdata {struct pfs_node* pvd_pn; } ;
struct pfs_node {int pn_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pfs_node*) ;

__attribute__((used)) static int
FUNC_3(struct vop_setattr_args *VAR_0)
{
 struct vnode *VAR_1 = VAR_0->a_vp;
 struct pfs_vdata *VAR_2 = VAR_1->v_data;
 struct pfs_node *VAR_3 = VAR_2->pvd_pn;

 FUNC_1(("%s", VAR_3->pn_name));
 FUNC_2(VAR_3);


 FUNC_0 (0);
}
