
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_write_args {struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; struct pfs_vdata* v_data; } ;
struct uio {int dummy; } ;
struct sbuf {int dummy; } ;
struct proc {int dummy; } ;
struct pfs_vdata {int pvd_pid; struct pfs_node* pvd_pn; } ;
struct pfs_node {int pn_flags; int * pn_fill; int pn_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pfs_node*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct proc*) ;
 int VAR_6 ;
 int FUNC_6 (struct pfs_node*) ;
 int FUNC_7 (int ,struct pfs_node*,int ,struct proc**) ;
 int FUNC_8 (int ,struct proc*,struct pfs_node*,struct sbuf*,struct uio*) ;
 int FUNC_9 (struct sbuf*) ;
 int FUNC_10 (struct sbuf*,struct uio*,int*) ;

__attribute__((used)) static int
FUNC_11(struct vop_write_args *VAR_7)
{
 struct vnode *VAR_8 = VAR_7->a_vp;
 struct pfs_vdata *VAR_9 = VAR_8->v_data;
 struct pfs_node *VAR_10 = VAR_9->pvd_pn;
 struct uio *VAR_11 = VAR_7->a_uio;
 struct proc *VAR_12;
 struct sbuf VAR_13;
 int VAR_14;

 FUNC_2(("%s", VAR_10->pn_name));
 FUNC_6(VAR_10);

 if (VAR_8->v_type != VAR_5)
  FUNC_1 (VAR_1);
 FUNC_0(VAR_10);

 if (!(VAR_10->pn_flags & VAR_4))
  FUNC_1 (VAR_0);

 if (VAR_10->pn_fill == ((void*)0))
  FUNC_1 (VAR_2);





 if (!FUNC_7(VAR_6, VAR_10, VAR_9->pvd_pid, &VAR_12))
  FUNC_1 (VAR_2);
 if (VAR_12 != ((void*)0)) {
  FUNC_5(VAR_12);
  FUNC_4(VAR_12);
 }

 if (VAR_10->pn_flags & VAR_3) {
  VAR_14 = FUNC_8(VAR_6, VAR_12, VAR_10, ((void*)0), VAR_11);
  if (VAR_12 != ((void*)0))
   FUNC_3(VAR_12);
  FUNC_1 (VAR_14);
 }

 FUNC_10(&VAR_13, VAR_11, &VAR_14);
 if (VAR_14) {
  if (VAR_12 != ((void*)0))
   FUNC_3(VAR_12);
  FUNC_1 (VAR_14);
 }

 VAR_14 = FUNC_8(VAR_6, VAR_12, VAR_10, &VAR_13, VAR_11);

 FUNC_9(&VAR_13);
 if (VAR_12 != ((void*)0))
  FUNC_3(VAR_12);
 FUNC_1 (VAR_14);
}
