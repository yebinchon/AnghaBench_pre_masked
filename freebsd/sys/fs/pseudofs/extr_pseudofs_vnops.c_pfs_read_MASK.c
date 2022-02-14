
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_read_args {struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; struct pfs_vdata* v_data; } ;
struct uio {scalar_t__ uio_resid; scalar_t__ uio_offset; } ;
struct sbuf {int dummy; } ;
struct proc {int dummy; } ;
struct pfs_vdata {int pvd_pid; struct pfs_node* pvd_pn; } ;
struct pfs_node {int pn_flags; int * pn_fill; int pn_name; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pfs_node*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (struct proc*) ;
 int VAR_9 ;
 int FUNC_8 (struct pfs_node*) ;
 int FUNC_9 (int ,struct pfs_node*,int ,struct proc**) ;
 int FUNC_10 (int ,struct proc*,struct pfs_node*,struct sbuf*,struct uio*) ;
 int FUNC_11 (struct sbuf*) ;
 int FUNC_12 (struct sbuf*) ;
 scalar_t__ FUNC_13 (struct sbuf*) ;
 scalar_t__ FUNC_14 (struct sbuf*) ;
 struct sbuf* FUNC_15 (struct sbuf*,int *,scalar_t__,int ) ;
 int FUNC_16 (int ,scalar_t__,struct uio*) ;
 int FUNC_17 (struct vnode*) ;
 int FUNC_18 (struct vnode*) ;
 int FUNC_19 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_20(struct vop_read_args *VAR_10)
{
 struct vnode *VAR_11 = VAR_10->a_vp;
 struct pfs_vdata *VAR_12 = VAR_11->v_data;
 struct pfs_node *VAR_13 = VAR_12->pvd_pn;
 struct uio *VAR_14 = VAR_10->a_uio;
 struct proc *VAR_15;
 struct sbuf *VAR_16 = ((void*)0);
 int VAR_17, VAR_18;
 off_t VAR_19;

 FUNC_2(("%s", VAR_13->pn_name));
 FUNC_8(VAR_13);

 if (VAR_11->v_type != VAR_8)
  FUNC_1 (VAR_1);
 FUNC_0(VAR_13);

 if (!(VAR_13->pn_flags & VAR_7))
  FUNC_1 (VAR_0);

 if (VAR_13->pn_fill == ((void*)0))
  FUNC_1 (VAR_2);





 if (!FUNC_9(VAR_9, VAR_13, VAR_12->pvd_pid, &VAR_15))
  FUNC_1 (VAR_2);
 if (VAR_15 != ((void*)0)) {
  FUNC_7(VAR_15);
  FUNC_4(VAR_15);
 }

 FUNC_18(VAR_11);
 VAR_18 = FUNC_5(VAR_11);
 FUNC_6(VAR_11, 0);

 if (VAR_13->pn_flags & VAR_6) {
  FUNC_2(("%zd resid", VAR_14->uio_resid));
  VAR_17 = FUNC_10(VAR_9, VAR_15, VAR_13, ((void*)0), VAR_14);
  FUNC_2(("%zd resid", VAR_14->uio_resid));
  goto ret;
 }

 if (VAR_14->uio_resid < 0 || VAR_14->uio_offset < 0 ||
     VAR_14->uio_resid > VAR_5 - VAR_14->uio_offset) {
  VAR_17 = VAR_1;
  goto ret;
 }
 VAR_19 = VAR_14->uio_offset + VAR_14->uio_resid;
 if (VAR_19 > VAR_4)
  VAR_19 = VAR_4;

 VAR_16 = FUNC_15(VAR_16, ((void*)0), VAR_19 + 1, 0);
 if (VAR_16 == ((void*)0)) {
  VAR_17 = VAR_2;
  goto ret;
 }

 VAR_17 = FUNC_10(VAR_9, VAR_15, VAR_13, VAR_16, VAR_14);

 if (VAR_17) {
  FUNC_12(VAR_16);
  goto ret;
 }






 if (FUNC_13(VAR_16) == 0)
  VAR_19 = FUNC_14(VAR_16);
 VAR_17 = FUNC_16(FUNC_11(VAR_16), VAR_19, VAR_14);
 FUNC_12(VAR_16);
ret:
 FUNC_19(VAR_11, VAR_18 | VAR_3);
 FUNC_17(VAR_11);
 if (VAR_15 != ((void*)0))
  FUNC_3(VAR_15);
 FUNC_1 (VAR_17);
}
