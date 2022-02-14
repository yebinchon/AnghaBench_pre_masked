
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int * vm_object_t ;
struct vop_getpages_args {int a_count; scalar_t__* a_rahead; scalar_t__* a_rbehind; TYPE_1__** a_m; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int * v_object; int v_mount; } ;
struct uio {int uio_iovcnt; int uio_resid; struct thread* uio_td; int uio_rw; int uio_segflg; int uio_offset; struct iovec* uio_iov; } ;
struct ucred {int dummy; } ;
struct thread {struct ucred* td_ucred; } ;
struct nfsnode {int n_flag; } ;
struct nfsmount {int nm_flag; int nm_state; int nm_mtx; } ;
struct iovec {int iov_len; scalar_t__ iov_base; } ;
struct buf {scalar_t__ b_data; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_8__ {scalar_t__ dirty; int pindex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct nfsnode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct nfsnode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct nfsmount* FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct nfsnode* FUNC_9 (struct vnode*) ;
 struct thread* VAR_11 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct nfsmount*,struct vnode*,struct ucred*,struct thread*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_13 (struct vnode*,struct uio*,struct ucred*) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_14 (scalar_t__,TYPE_1__**,int) ;
 int FUNC_15 (scalar_t__,int) ;
 int FUNC_16 (char*,...) ;
 struct buf* FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,struct buf*) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_19 (struct vnode*,TYPE_1__**,int,scalar_t__*,scalar_t__*,int ,int ) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*,int ,int) ;
 int FUNC_23 (TYPE_1__*) ;

int
FUNC_24(struct vop_getpages_args *VAR_20)
{
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 struct uio VAR_28;
 struct iovec VAR_29;
 vm_offset_t VAR_30;
 struct buf *VAR_31;
 struct vnode *VAR_32;
 struct thread *VAR_33;
 struct ucred *VAR_34;
 struct nfsmount *VAR_35;
 vm_object_t VAR_36;
 vm_page_t *VAR_37;
 struct nfsnode *VAR_38;

 VAR_32 = VAR_20->a_vp;
 VAR_38 = FUNC_9(VAR_32);
 VAR_33 = VAR_11;
 VAR_34 = VAR_11->td_ucred;
 VAR_35 = FUNC_4(VAR_32->v_mount);
 VAR_37 = VAR_20->a_m;
 VAR_27 = VAR_20->a_count;

 if ((VAR_36 = VAR_32->v_object) == ((void*)0)) {
  FUNC_16("ncl_getpages: called with non-merged cache vnode\n");
  return (VAR_8);
 }

 if (VAR_16 && !VAR_15) {
  FUNC_2(VAR_38);
  if ((VAR_38->n_flag & VAR_3) && (VAR_32->v_type == VAR_10)) {
   FUNC_3(VAR_38);
   FUNC_16("ncl_getpages: called on non-cacheable vnode\n");
   return (VAR_8);
  } else
   FUNC_3(VAR_38);
 }

 FUNC_10(&VAR_35->nm_mtx);
 if ((VAR_35->nm_flag & VAR_1) != 0 &&
     (VAR_35->nm_state & VAR_2) == 0) {
  FUNC_11(&VAR_35->nm_mtx);

  (void)FUNC_12(VAR_35, VAR_32, VAR_34, VAR_33);
 } else
  FUNC_11(&VAR_35->nm_mtx);

 if (VAR_17)
  return (FUNC_19(VAR_32, VAR_37, VAR_27, VAR_20->a_rbehind,
      VAR_20->a_rahead, VAR_12, VAR_13));
 FUNC_7(VAR_36);
 if (!FUNC_21(VAR_37[VAR_27 - 1]) && --VAR_27 == 0)
  goto out;
 FUNC_8(VAR_36);





 VAR_31 = FUNC_17(VAR_14, VAR_0);

 VAR_30 = (vm_offset_t) VAR_31->b_data;
 FUNC_14(VAR_30, VAR_37, VAR_27);
 FUNC_6(VAR_18);
 FUNC_5(VAR_19, VAR_27);

 VAR_26 = VAR_27 << VAR_4;
 VAR_29.iov_base = (caddr_t) VAR_30;
 VAR_29.iov_len = VAR_26;
 VAR_28.uio_iov = &VAR_29;
 VAR_28.uio_iovcnt = 1;
 VAR_28.uio_offset = FUNC_0(VAR_37[0]->pindex);
 VAR_28.uio_resid = VAR_26;
 VAR_28.uio_segflg = VAR_7;
 VAR_28.uio_rw = VAR_6;
 VAR_28.uio_td = VAR_33;

 VAR_22 = FUNC_13(VAR_32, &VAR_28, VAR_34);
 FUNC_15(VAR_30, VAR_27);

 FUNC_18(VAR_14, VAR_31);

 if (VAR_22 && (VAR_28.uio_resid == VAR_26)) {
  FUNC_16("ncl_getpages: error %d\n", VAR_22);
  return (VAR_8);
 }







 VAR_24 = VAR_26 - VAR_28.uio_resid;
 FUNC_7(VAR_36);
 for (VAR_21 = 0, VAR_25 = 0; VAR_21 < VAR_27; VAR_21++, VAR_25 = VAR_23) {
  vm_page_t VAR_39;
  VAR_23 = VAR_25 + VAR_5;
  VAR_39 = VAR_37[VAR_21];

  if (VAR_23 <= VAR_24) {



   FUNC_23(VAR_39);
   FUNC_1(VAR_39->dirty == 0,
       ("nfs_getpages: page %p is dirty", VAR_39));
  } else if (VAR_24 > VAR_25) {



   FUNC_20(VAR_39);
   FUNC_22(VAR_39, 0, VAR_24 - VAR_25);
   FUNC_1(VAR_39->dirty == 0,
       ("nfs_getpages: page %p is dirty", VAR_39));
  } else {
   ;
  }
 }
out:
 FUNC_8(VAR_36);
 if (VAR_20->a_rbehind)
  *VAR_20->a_rbehind = 0;
 if (VAR_20->a_rahead)
  *VAR_20->a_rahead = 0;
 return (VAR_9);
}
