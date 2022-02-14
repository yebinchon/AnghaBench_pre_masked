
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {scalar_t__ f_maxfilesize; } ;
typedef struct statfs uint8_t ;
struct vop_allocate_args {scalar_t__* a_len; scalar_t__* a_offset; struct vnode* a_vp; } ;
struct vnode {int v_mount; } ;
struct vattr {scalar_t__ va_size; size_t va_blocksize; } ;
struct uio {int uio_iovcnt; size_t uio_resid; struct thread* uio_td; int uio_rw; void* uio_segflg; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct thread {int td_ucred; } ;
struct iovec {scalar_t__ iov_len; struct statfs* iov_base; } ;
typedef scalar_t__ off_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct vattr*) ;
 int FUNC_1 (int ,struct statfs*,struct thread*) ;
 int FUNC_2 (struct vnode*,struct vattr*,int ) ;
 int FUNC_3 (struct vnode*,struct uio*,int ,int ) ;
 int FUNC_4 (struct vnode*,struct vattr*,int ) ;
 int FUNC_5 (struct vnode*,struct uio*,int ,int ) ;
 int FUNC_6 (struct statfs*,scalar_t__) ;
 struct thread* VAR_9 ;
 int FUNC_7 (struct statfs*,int ) ;
 struct statfs* FUNC_8 (int,int ,int ) ;
 scalar_t__ FUNC_9 () ;

int
FUNC_10(struct vop_allocate_args *VAR_10)
{




 struct iovec VAR_11;
 struct vattr VAR_12, *VAR_13;
 struct uio VAR_14;
 off_t VAR_15, VAR_16, VAR_17, VAR_18;
 uint8_t *VAR_19;
 struct thread *VAR_20;
 struct vnode *VAR_21;
 size_t VAR_22;
 int VAR_23;

 VAR_19 = ((void*)0);
 VAR_23 = 0;
 VAR_20 = VAR_9;
 VAR_13 = &VAR_12;
 VAR_21 = VAR_10->a_vp;
 VAR_16 = *VAR_10->a_len;
 VAR_18 = *VAR_10->a_offset;

 VAR_23 = FUNC_2(VAR_21, VAR_13, VAR_20->td_ucred);
 if (VAR_23 != 0)
  goto out;
 VAR_15 = VAR_13->va_size;
 VAR_22 = VAR_13->va_blocksize;
 if (VAR_22 == 0)
  VAR_22 = VAR_0;
 if (VAR_22 > VAR_2)
  VAR_22 = VAR_2;
 VAR_19 = FUNC_8(VAR_22, VAR_4, VAR_5);
 if (VAR_18 + VAR_16 > VAR_13->va_size) {



  FUNC_0(VAR_13);
  VAR_13->va_size = VAR_18 + VAR_16;
  VAR_23 = FUNC_4(VAR_21, VAR_13, VAR_20->td_ucred);
  if (VAR_23 != 0)
   goto out;
  FUNC_0(VAR_13);
  VAR_13->va_size = VAR_15;
  VAR_23 = FUNC_4(VAR_21, VAR_13, VAR_20->td_ucred);
  if (VAR_23 != 0)
   goto out;
 }

 for (;;) {





  VAR_17 = VAR_22;
  if ((VAR_18 % VAR_22) != 0)
   VAR_17 -= (VAR_18 % VAR_22);
  if (VAR_17 > VAR_16)
   VAR_17 = VAR_16;
  if (VAR_18 < VAR_15) {
   VAR_11.iov_base = VAR_19;
   VAR_11.iov_len = VAR_17;
   VAR_14.uio_iov = &VAR_11;
   VAR_14.uio_iovcnt = 1;
   VAR_14.uio_offset = VAR_18;
   VAR_14.uio_resid = VAR_17;
   VAR_14.uio_segflg = VAR_7;
   VAR_14.uio_rw = VAR_6;
   VAR_14.uio_td = VAR_20;
   VAR_23 = FUNC_3(VAR_21, &VAR_14, 0, VAR_20->td_ucred);
   if (VAR_23 != 0)
    break;
   if (VAR_14.uio_resid > 0) {
    FUNC_6(VAR_19 + VAR_17 - VAR_14.uio_resid,
        VAR_14.uio_resid);
   }
  } else {
   FUNC_6(VAR_19, VAR_17);
  }

  VAR_11.iov_base = VAR_19;
  VAR_11.iov_len = VAR_17;
  VAR_14.uio_iov = &VAR_11;
  VAR_14.uio_iovcnt = 1;
  VAR_14.uio_offset = VAR_18;
  VAR_14.uio_resid = VAR_17;
  VAR_14.uio_segflg = VAR_7;
  VAR_14.uio_rw = VAR_8;
  VAR_14.uio_td = VAR_20;

  VAR_23 = FUNC_5(VAR_21, &VAR_14, 0, VAR_20->td_ucred);
  if (VAR_23 != 0)
   break;

  VAR_16 -= VAR_17;
  VAR_18 += VAR_17;
  if (VAR_16 == 0)
   break;
  if (FUNC_9())
   break;
 }

 out:
 *VAR_10->a_len = VAR_16;
 *VAR_10->a_offset = VAR_18;
 FUNC_7(VAR_19, VAR_4);
 return (VAR_23);
}
