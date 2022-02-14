
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_type; int v_mount; } ;
struct uio {int uio_iovcnt; scalar_t__ uio_resid; int uio_offset; int uio_rw; struct thread* uio_td; int uio_segflg; struct iovec* uio_iov; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct smbnode {scalar_t__ n_size; int n_fid; } ;
struct smbmount {int sm_share; } ;
struct smb_cred {int dummy; } ;
struct iovec {scalar_t__ iov_len; char* iov_base; } ;
struct buf {scalar_t__ b_iocmd; scalar_t__ b_bcount; char* b_data; int b_blkno; int b_error; scalar_t__ b_dirtyend; scalar_t__ b_dirtyoff; int b_flags; scalar_t__ b_resid; int b_ioflags; } ;
typedef int off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct smbmount* FUNC_0 (int ) ;

 struct smbnode* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct uio*,int ) ;
 struct uio* FUNC_6 (int,int ,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct smb_cred*,struct thread*,struct ucred*) ;
 int FUNC_9 (int ,int ,struct uio*,struct smb_cred*) ;
 int FUNC_10 (int ,int ,struct uio*,struct smb_cred*) ;
 int FUNC_11 (struct smb_cred*) ;
 struct smb_cred* FUNC_12 () ;

int
FUNC_13(struct vnode *VAR_16, struct buf *VAR_17, struct ucred *VAR_18, struct thread *VAR_19)
{
 struct smbmount *VAR_20 = FUNC_0(VAR_16->v_mount);
 struct smbnode *VAR_21 = FUNC_1(VAR_16);
 struct uio *VAR_22;
 struct iovec VAR_23;
 struct smb_cred *VAR_24;
 int VAR_25 = 0;

 VAR_22 = FUNC_6(sizeof(struct uio), VAR_11, VAR_12);
 VAR_22->uio_iov = &VAR_23;
 VAR_22->uio_iovcnt = 1;
 VAR_22->uio_segflg = VAR_14;
 VAR_22->uio_td = VAR_19;

 VAR_24 = FUNC_12();
 FUNC_8(VAR_24, VAR_19, VAR_18);

 if (VAR_17->b_iocmd == VAR_1) {
     VAR_23.iov_len = VAR_22->uio_resid = VAR_17->b_bcount;
     VAR_23.iov_base = VAR_17->b_data;
     VAR_22->uio_rw = VAR_13;
     switch (VAR_16->v_type) {
       case 128:
  VAR_22->uio_offset = ((off_t)VAR_17->b_blkno) * VAR_9;
  VAR_25 = FUNC_9(VAR_20->sm_share, VAR_21->n_fid, VAR_22, VAR_24);
  if (VAR_25)
   break;
  if (VAR_22->uio_resid) {
   int VAR_26 = VAR_22->uio_resid;
   int VAR_27 = VAR_17->b_bcount - VAR_26;
   if (VAR_26 > 0)
       FUNC_4((char *)VAR_17->b_data + VAR_27, VAR_26);
  }
  break;
     default:
  FUNC_7("smbfs_doio:  type %x unexpected\n",VAR_16->v_type);
  break;
     }
     if (VAR_25) {
  VAR_17->b_error = VAR_25;
  VAR_17->b_ioflags |= VAR_0;
     }
 } else {
     if (((VAR_17->b_blkno * VAR_9) + VAR_17->b_dirtyend) > VAR_21->n_size)
  VAR_17->b_dirtyend = VAR_21->n_size - (VAR_17->b_blkno * VAR_9);

     if (VAR_17->b_dirtyend > VAR_17->b_dirtyoff) {
  VAR_23.iov_len = VAR_22->uio_resid = VAR_17->b_dirtyend - VAR_17->b_dirtyoff;
  VAR_22->uio_offset = ((off_t)VAR_17->b_blkno) * VAR_9 + VAR_17->b_dirtyoff;
  VAR_23.iov_base = (char *)VAR_17->b_data + VAR_17->b_dirtyoff;
  VAR_22->uio_rw = VAR_15;
  VAR_25 = FUNC_10(VAR_20->sm_share, VAR_21->n_fid, VAR_22, VAR_24);
  if (VAR_25 == VAR_10
      || (!VAR_25 && (VAR_17->b_flags & VAR_6))) {
   VAR_17->b_flags &= ~(VAR_5|VAR_7);
   if ((VAR_17->b_flags & VAR_2) == 0)
       VAR_17->b_flags |= VAR_4;
   if ((VAR_17->b_flags & VAR_8) == 0) {
       FUNC_2(VAR_17);
       VAR_17->b_flags &= ~VAR_3;
   }
   if ((VAR_17->b_flags & VAR_2) == 0)
       VAR_17->b_flags |= VAR_4;
  } else {
   if (VAR_25) {
    VAR_17->b_ioflags |= VAR_0;
    VAR_17->b_error = VAR_25;
   }
   VAR_17->b_dirtyoff = VAR_17->b_dirtyend = 0;
  }
     } else {
  VAR_17->b_resid = 0;
  FUNC_3(VAR_17);
  FUNC_5(VAR_22, VAR_11);
  FUNC_11(VAR_24);
  return 0;
     }
 }
 VAR_17->b_resid = VAR_22->uio_resid;
 FUNC_3(VAR_17);
 FUNC_5(VAR_22, VAR_11);
 FUNC_11(VAR_24);
 return VAR_25;
}
