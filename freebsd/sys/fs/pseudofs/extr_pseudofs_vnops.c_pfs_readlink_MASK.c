
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_readlink_args {struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; struct pfs_vdata* v_data; } ;
struct uio {int dummy; } ;
struct sbuf {int dummy; } ;
struct proc {int p_flag; } ;
struct pfs_vdata {scalar_t__ pvd_pid; struct pfs_node* pvd_pn; } ;
struct pfs_node {int * pn_fill; int pn_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pfs_node*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*,int ) ;
 int FUNC_7 (struct proc*) ;
 int VAR_8 ;
 struct proc* FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct pfs_node*) ;
 int FUNC_10 (int ,struct proc*,struct pfs_node*,struct sbuf*,int *) ;
 int FUNC_11 (struct sbuf*) ;
 int FUNC_12 (struct sbuf*) ;
 scalar_t__ FUNC_13 (struct sbuf*) ;
 int FUNC_14 (struct sbuf*) ;
 int FUNC_15 (struct sbuf*,char*,int,int ) ;
 int FUNC_16 (int ,int ,struct uio*) ;
 int FUNC_17 (struct vnode*) ;
 int FUNC_18 (struct vnode*) ;
 int FUNC_19 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_20(struct vop_readlink_args *VAR_9)
{
 struct vnode *VAR_10 = VAR_9->a_vp;
 struct pfs_vdata *VAR_11 = VAR_10->v_data;
 struct pfs_node *VAR_12 = VAR_11->pvd_pn;
 struct uio *VAR_13 = VAR_9->a_uio;
 struct proc *VAR_14 = ((void*)0);
 char VAR_15[VAR_5];
 struct sbuf VAR_16;
 int VAR_17, VAR_18;

 FUNC_2(("%s", VAR_12->pn_name));
 FUNC_9(VAR_12);

 if (VAR_10->v_type != VAR_7)
  FUNC_1 (VAR_0);
 FUNC_0(VAR_12);

 if (VAR_12->pn_fill == ((void*)0))
  FUNC_1 (VAR_1);

 if (VAR_11->pvd_pid != VAR_4) {
  if ((VAR_14 = FUNC_8(VAR_11->pvd_pid)) == ((void*)0))
   FUNC_1 (VAR_1);
  if (VAR_14->p_flag & VAR_6) {
   FUNC_4(VAR_14);
   FUNC_1 (VAR_1);
  }
  FUNC_7(VAR_14);
  FUNC_4(VAR_14);
 }
 FUNC_18(VAR_10);
 VAR_18 = FUNC_5(VAR_10);
 FUNC_6(VAR_10, 0);


 FUNC_15(&VAR_16, VAR_15, sizeof VAR_15, 0);

 VAR_17 = FUNC_10(VAR_8, VAR_14, VAR_12, &VAR_16, ((void*)0));

 if (VAR_14 != ((void*)0))
  FUNC_3(VAR_14);
 FUNC_19(VAR_10, VAR_18 | VAR_3);
 FUNC_17(VAR_10);

 if (VAR_17) {
  FUNC_12(&VAR_16);
  FUNC_1 (VAR_17);
 }

 if (FUNC_13(&VAR_16) != 0) {
  FUNC_12(&VAR_16);
  FUNC_1 (VAR_2);
 }

 VAR_17 = FUNC_16(FUNC_11(&VAR_16), FUNC_14(&VAR_16), VAR_13);
 FUNC_12(&VAR_16);
 FUNC_1 (VAR_17);
}
