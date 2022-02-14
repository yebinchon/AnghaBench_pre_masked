
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_close_args {int a_td; struct vnode* a_vp; } ;
struct vnode {struct pfs_vdata* v_data; } ;
struct proc {int dummy; } ;
struct pfs_vdata {scalar_t__ pvd_pid; struct pfs_node* pvd_pn; } ;
struct pfs_node {int * pn_close; int pn_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct proc*) ;
 struct proc* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct pfs_node*) ;
 int FUNC_5 (int ,struct proc*,struct pfs_node*) ;
 int FUNC_6 (struct vnode*) ;

__attribute__((used)) static int
FUNC_7(struct vop_close_args *VAR_1)
{
 struct vnode *VAR_2 = VAR_1->a_vp;
 struct pfs_vdata *VAR_3 = VAR_2->v_data;
 struct pfs_node *VAR_4 = VAR_3->pvd_pn;
 struct proc *VAR_5;
 int VAR_6;

 FUNC_1(("%s", VAR_4->pn_name));
 FUNC_4(VAR_4);





 if (FUNC_6(VAR_2) > 1 || VAR_4->pn_close == ((void*)0))
  FUNC_0 (0);

 if (VAR_3->pvd_pid != VAR_0) {
  VAR_5 = FUNC_3(VAR_3->pvd_pid);
 } else {
  VAR_5 = ((void*)0);
 }

 VAR_6 = FUNC_5(VAR_1->a_td, VAR_5, VAR_4);

 if (VAR_5 != ((void*)0))
  FUNC_2(VAR_5);

 FUNC_0 (VAR_6);
}
