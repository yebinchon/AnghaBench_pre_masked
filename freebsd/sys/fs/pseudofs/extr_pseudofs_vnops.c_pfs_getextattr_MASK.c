
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_getextattr_args {int a_cred; int a_size; int a_uio; int a_name; int a_attrnamespace; struct vnode* a_vp; } ;
struct vnode {struct pfs_vdata* v_data; } ;
struct proc {int dummy; } ;
struct pfs_vdata {int pvd_pid; struct pfs_node* pvd_pn; } ;
struct pfs_node {int * pn_getextattr; int pn_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_2 ;
 int FUNC_3 (struct pfs_node*) ;
 int FUNC_4 (int ,struct pfs_node*,int ,struct proc**) ;
 int FUNC_5 (int ,struct proc*,struct pfs_node*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct vop_getextattr_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_vp;
 struct pfs_vdata *VAR_5 = VAR_4->v_data;
 struct pfs_node *VAR_6 = VAR_5->pvd_pn;
 struct proc *VAR_7;
 int VAR_8;

 FUNC_1(("%s", VAR_6->pn_name));
 FUNC_3(VAR_6);





 if (!FUNC_4(VAR_2, VAR_6, VAR_5->pvd_pid, &VAR_7))
  FUNC_0 (VAR_0);

 if (VAR_6->pn_getextattr == ((void*)0))
  VAR_8 = VAR_1;
 else
  VAR_8 = FUNC_5(VAR_2, VAR_7, VAR_6,
      VAR_3->a_attrnamespace, VAR_3->a_name, VAR_3->a_uio,
      VAR_3->a_size, VAR_3->a_cred);

 if (VAR_7 != ((void*)0))
  FUNC_2(VAR_7);

 FUNC_0 (VAR_8);
}
