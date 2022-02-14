
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct uio {char* iov_base; unsigned int iov_len; int uio_iovcnt; unsigned int uio_resid; struct thread* uio_td; int uio_rw; int uio_segflg; scalar_t__ uio_offset; struct uio* uio_iov; } ;
struct thread {int td_ucred; } ;
struct iovec {char* iov_base; unsigned int iov_len; int uio_iovcnt; unsigned int uio_resid; struct thread* uio_td; int uio_rw; int uio_segflg; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct _buf {struct vnode* ptr; } ;
typedef scalar_t__ off_t ;
typedef int auio ;
typedef int aiov ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vnode*,struct uio*,int,int ) ;
 int FUNC_1 (struct vnode*,int ) ;
 int FUNC_2 (struct uio*,int) ;
 struct thread* VAR_6 ;
 int FUNC_3 (struct vnode*,int) ;

int
FUNC_4(struct _buf *VAR_7, char *VAR_8, unsigned VAR_9, unsigned VAR_10)
{
 struct vnode *VAR_11 = VAR_7->ptr;
 struct thread *VAR_12 = VAR_6;
 struct uio VAR_13;
 struct iovec VAR_14;
 int VAR_15;

 FUNC_2(&VAR_14, sizeof(VAR_14));
 FUNC_2(&VAR_13, sizeof(VAR_13));

 VAR_14.iov_base = VAR_8;
 VAR_14.iov_len = VAR_9;

 VAR_13.uio_iov = &VAR_14;
 VAR_13.uio_offset = (off_t)VAR_10;
 VAR_13.uio_segflg = VAR_5;
 VAR_13.uio_rw = VAR_4;
 VAR_13.uio_iovcnt = 1;
 VAR_13.uio_resid = VAR_9;
 VAR_13.uio_td = VAR_12;

 FUNC_3(VAR_11, VAR_3 | VAR_2);
 VAR_15 = FUNC_0(VAR_11, &VAR_13, VAR_1 | VAR_0, VAR_12->td_ucred);
 FUNC_1(VAR_11, 0);
 return (VAR_15 != 0 ? -1 : VAR_9 - VAR_13.uio_resid);
}
