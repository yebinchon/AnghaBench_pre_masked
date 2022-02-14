
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; struct mount* v_mount; } ;
struct TYPE_3__ {struct vnode* vp; } ;
struct TYPE_4__ {TYPE_1__ vop_args; } ;
struct vn_io_fault_args {int flags; TYPE_2__ args; struct ucred* cred; int kind; } ;
struct uio {int uio_iovcnt; int uio_resid; int uio_segflg; int uio_rw; struct thread* uio_td; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct iovec {int iov_len; void* iov_base; } ;
typedef int ssize_t ;
typedef scalar_t__ off_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef enum uio_rw { ____Placeholder_uio_rw } uio_rw ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct mount*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct vnode*,struct uio*,int,struct ucred*) ;
 int FUNC_3 (struct vnode*,int ) ;
 int FUNC_4 (struct vnode*,struct uio*,int,struct ucred*) ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (struct vnode*,struct uio*) ;
 int FUNC_6 (struct ucred*,struct ucred*,struct vnode*) ;
 int FUNC_7 (struct ucred*,struct ucred*,struct vnode*) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (struct vnode*,struct uio*,struct vn_io_fault_args*,struct thread*) ;
 int FUNC_10 (struct vnode*,int) ;
 void* FUNC_11 (struct vnode*,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct vnode*,void*) ;
 void* FUNC_13 (struct vnode*,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct vnode*,struct mount**,int) ;

int
FUNC_15(enum uio_rw VAR_14, struct vnode *VAR_15, void *VAR_16, int VAR_17, off_t VAR_18,
    enum uio_seg VAR_19, int VAR_20, struct ucred *VAR_21,
    struct ucred *VAR_22, ssize_t *VAR_23, struct thread *VAR_24)
{
 struct uio VAR_25;
 struct iovec VAR_26;
 struct mount *VAR_27;
 struct ucred *VAR_28;
 void *VAR_29;
 struct vn_io_fault_args VAR_30;
 int VAR_31, VAR_32;

 if (VAR_18 < 0 && VAR_15->v_type != VAR_11)
  return (VAR_0);
 VAR_25.uio_iov = &VAR_26;
 VAR_25.uio_iovcnt = 1;
 VAR_26.iov_base = VAR_16;
 VAR_26.iov_len = VAR_17;
 VAR_25.uio_resid = VAR_17;
 VAR_25.uio_offset = VAR_18;
 VAR_25.uio_segflg = VAR_19;
 VAR_25.uio_rw = VAR_14;
 VAR_25.uio_td = VAR_24;
 VAR_31 = 0;

 if ((VAR_20 & VAR_2) == 0) {
  if ((VAR_20 & VAR_4) == 0) {
   if (VAR_14 == VAR_9) {
    VAR_29 = FUNC_11(VAR_15, VAR_18,
        VAR_18 + VAR_17);
   } else {
    VAR_29 = FUNC_13(VAR_15, VAR_18,
        VAR_18 + VAR_17);
   }
  } else
   VAR_29 = ((void*)0);
  VAR_27 = ((void*)0);
  if (VAR_14 == VAR_10) {
   if (VAR_15->v_type != VAR_11 &&
       (VAR_31 = FUNC_14(VAR_15, &VAR_27, VAR_13 | VAR_8))
       != 0)
    goto out;
   if (FUNC_1(VAR_27) ||
       ((VAR_27 == ((void*)0)) && FUNC_1(VAR_15->v_mount)))
    VAR_32 = VAR_7;
   else
    VAR_32 = VAR_5;
  } else
   VAR_32 = VAR_7;
  FUNC_10(VAR_15, VAR_32 | VAR_6);
 } else
  VAR_29 = ((void*)0);

 FUNC_0(VAR_15, "IO_NODELOCKED with no vp lock held");
 if (VAR_31 == 0) {
  if (VAR_22 != ((void*)0))
   VAR_28 = VAR_22;
  else
   VAR_28 = VAR_21;
  if (FUNC_5(VAR_15, &VAR_25)) {
   VAR_30.kind = VAR_12;
   VAR_30.cred = VAR_28;
   VAR_30.flags = VAR_20;
   VAR_30.args.vop_args.vp = VAR_15;
   VAR_31 = FUNC_9(VAR_15, &VAR_25, &VAR_30, VAR_24);
  } else if (VAR_14 == VAR_9) {
   VAR_31 = FUNC_2(VAR_15, &VAR_25, VAR_20, VAR_28);
  } else {
   VAR_31 = FUNC_4(VAR_15, &VAR_25, VAR_20, VAR_28);
  }
 }
 if (VAR_23)
  *VAR_23 = VAR_25.uio_resid;
 else
  if (VAR_25.uio_resid && VAR_31 == 0)
   VAR_31 = VAR_1;
 if ((VAR_20 & VAR_2) == 0) {
  FUNC_3(VAR_15, 0);
  if (VAR_27 != ((void*)0))
   FUNC_8(VAR_27);
 }
 out:
 if (VAR_29 != ((void*)0))
  FUNC_12(VAR_15, VAR_29);
 return (VAR_31);
}
