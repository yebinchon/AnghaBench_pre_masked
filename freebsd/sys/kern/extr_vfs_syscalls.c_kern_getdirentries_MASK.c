
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; int v_vflag; TYPE_1__* v_mount; } ;
struct uio {size_t uio_resid; int uio_iovcnt; int uio_segflg; scalar_t__ uio_offset; struct thread* uio_td; int uio_rw; struct iovec* uio_iov; } ;
struct thread {size_t* td_retval; int td_ucred; } ;
struct iovec {char* iov_base; size_t iov_len; } ;
struct file {int f_flag; struct vnode* f_data; struct vnode* f_vnode; int f_cred; } ;
typedef size_t ssize_t ;
typedef scalar_t__ off_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
struct TYPE_2__ {int mnt_flag; struct vnode* mnt_vnodecovered; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct vnode*,struct uio*,int ,int*,int *,int *) ;
 int FUNC_3 (struct vnode*,int ) ;
 int FUNC_4 (struct vnode*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct file*,struct thread*) ;
 scalar_t__ FUNC_6 (struct file*,int ) ;
 int FUNC_7 (struct file*,scalar_t__,int ) ;
 int FUNC_8 (struct thread*,int,int *,struct file**) ;
 int FUNC_9 (int ,struct vnode*) ;
 int FUNC_10 (struct vnode*,int) ;
 int FUNC_11 (struct vnode*) ;

int
FUNC_12(struct thread *VAR_11, int VAR_12, char *VAR_13, size_t VAR_14,
    off_t *VAR_15, ssize_t *VAR_16, enum uio_seg VAR_17)
{
 struct vnode *VAR_18;
 struct file *VAR_19;
 struct uio VAR_20;
 struct iovec VAR_21;
 off_t VAR_22;
 int VAR_23, VAR_24;
 off_t VAR_25;

 FUNC_0(VAR_12);
 if (VAR_14 > VAR_3)
  return (VAR_1);
 VAR_20.uio_resid = VAR_14;
 VAR_23 = FUNC_8(VAR_11, VAR_12, &VAR_10, &VAR_19);
 if (VAR_23 != 0)
  return (VAR_23);
 if ((VAR_19->f_flag & VAR_2) == 0) {
  FUNC_5(VAR_19, VAR_11);
  return (VAR_0);
 }
 VAR_18 = VAR_19->f_vnode;
 VAR_25 = FUNC_6(VAR_19, 0);
unionread:
 if (VAR_18->v_type != VAR_8) {
  VAR_23 = VAR_1;
  goto fail;
 }
 VAR_21.iov_base = VAR_13;
 VAR_21.iov_len = VAR_14;
 VAR_20.uio_iov = &VAR_21;
 VAR_20.uio_iovcnt = 1;
 VAR_20.uio_rw = VAR_7;
 VAR_20.uio_segflg = VAR_17;
 VAR_20.uio_td = VAR_11;
 FUNC_10(VAR_18, VAR_5 | VAR_4);
 FUNC_1(VAR_18);
 VAR_22 = VAR_20.uio_offset = VAR_25;




  VAR_23 = FUNC_2(VAR_18, &VAR_20, VAR_19->f_cred, &VAR_24, ((void*)0),
      ((void*)0));
 VAR_25 = VAR_20.uio_offset;
 if (VAR_23 != 0) {
  FUNC_3(VAR_18, 0);
  goto fail;
 }
 if (VAR_14 == VAR_20.uio_resid &&
     (VAR_18->v_vflag & VAR_9) &&
     (VAR_18->v_mount->mnt_flag & VAR_6)) {
  struct vnode *VAR_26 = VAR_18;

  VAR_18 = VAR_18->v_mount->mnt_vnodecovered;
  FUNC_4(VAR_18);
  VAR_19->f_vnode = VAR_18;
  VAR_19->f_data = VAR_18;
  VAR_25 = 0;
  FUNC_11(VAR_26);
  goto unionread;
 }
 FUNC_3(VAR_18, 0);
 *VAR_15 = VAR_22;
 if (VAR_16 != ((void*)0))
  *VAR_16 = VAR_20.uio_resid;
 VAR_11->td_retval[0] = VAR_14 - VAR_20.uio_resid;
fail:
 FUNC_7(VAR_19, VAR_25, 0);
 FUNC_5(VAR_19, VAR_11);
 return (VAR_23);
}
