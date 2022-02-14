
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct vop_putpages_args {int a_count; int* a_rtvals; int a_sync; TYPE_1__** a_m; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; int v_mount; } ;
struct uio {int uio_iovcnt; int uio_resid; struct thread* uio_td; int uio_rw; int uio_segflg; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct ucred {int dummy; } ;
struct thread {int * td_ucred; } ;
struct nfsnode {int n_flag; scalar_t__ n_size; int * n_writecred; } ;
struct nfsmount {int nm_flag; int nm_state; int nm_mtx; } ;
struct iovec {int iov_len; int iov_base; } ;
typedef scalar_t__ off_t ;
struct TYPE_3__ {int pindex; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nfsnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct nfsnode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nfsmount* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (struct vnode*,struct uio*,int ,struct ucred*) ;
 scalar_t__ VAR_7 ;
 struct nfsnode* FUNC_7 (struct vnode*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ucred*) ;
 struct ucred* FUNC_10 (int *) ;
 struct thread* VAR_8 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct nfsmount*,struct vnode*,struct ucred*,struct thread*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_1__**,int*,int,scalar_t__,int) ;

int
FUNC_17(struct vop_putpages_args *VAR_15)
{
 struct uio VAR_16;
 struct iovec VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 off_t VAR_22;
 int *VAR_23;
 struct vnode *VAR_24;
 struct thread *VAR_25;
 struct ucred *VAR_26;
 struct nfsmount *VAR_27;
 struct nfsnode *VAR_28;
 vm_page_t *VAR_29;

 VAR_24 = VAR_15->a_vp;
 VAR_28 = FUNC_7(VAR_24);
 VAR_25 = VAR_8;

 if (VAR_28->n_writecred != ((void*)0))
  VAR_26 = FUNC_10(VAR_28->n_writecred);
 else
  VAR_26 = FUNC_10(VAR_8->td_ucred);
 VAR_27 = FUNC_3(VAR_24->v_mount);
 VAR_29 = VAR_15->a_m;
 VAR_21 = VAR_15->a_count;
 VAR_23 = VAR_15->a_rtvals;
 VAR_20 = FUNC_8(VAR_21);
 VAR_22 = FUNC_0(VAR_29[0]->pindex);

 FUNC_11(&VAR_27->nm_mtx);
 if ((VAR_27->nm_flag & VAR_0) != 0 &&
     (VAR_27->nm_state & VAR_1) == 0) {
  FUNC_12(&VAR_27->nm_mtx);
  (void)FUNC_13(VAR_27, VAR_24, VAR_26, VAR_25);
 } else
  FUNC_12(&VAR_27->nm_mtx);

 FUNC_1(VAR_28);
 if (VAR_10 && !VAR_9 &&
     (VAR_28->n_flag & VAR_2) && (VAR_24->v_type == VAR_7)) {
  FUNC_2(VAR_28);
  FUNC_14("ncl_putpages: called on noncache-able vnode\n");
  FUNC_1(VAR_28);
 }



 if (VAR_22 + VAR_21 > VAR_28->n_size) {
  VAR_21 = VAR_28->n_size - VAR_22;
  if (VAR_21 < 0)
   VAR_21 = 0;
 }
 FUNC_2(VAR_28);

 for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++)
  VAR_23[VAR_18] = VAR_6;

 FUNC_5(VAR_13);
 FUNC_4(VAR_14, VAR_21);

 VAR_17.iov_base = VAR_12;
 VAR_17.iov_len = VAR_21;
 VAR_16.uio_iov = &VAR_17;
 VAR_16.uio_iovcnt = 1;
 VAR_16.uio_offset = VAR_22;
 VAR_16.uio_resid = VAR_21;
 VAR_16.uio_segflg = VAR_4;
 VAR_16.uio_rw = VAR_5;
 VAR_16.uio_td = VAR_25;

 VAR_19 = FUNC_6(VAR_24, &VAR_16, FUNC_15(VAR_15->a_sync),
     VAR_26);
 FUNC_9(VAR_26);

 if (VAR_19 == 0 || !VAR_11) {
  FUNC_16(VAR_29, VAR_23, VAR_21 - VAR_16.uio_resid,
      VAR_28->n_size - VAR_22, VAR_20 * VAR_3);
 }
 return (VAR_23[0]);
}
