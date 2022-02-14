
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct uio {int uio_iovcnt; int uio_resid; scalar_t__ uio_offset; struct thread* uio_td; int uio_segflg; int uio_rw; struct iovec* uio_iov; } ;
struct thread {int dummy; } ;
struct iovec {int iov_len; char* iov_base; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct vnode*,int,char const*,struct uio*,int *,int *,struct thread*) ;
 int FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (struct vnode*,int) ;

int
FUNC_4(struct vnode *VAR_5, int VAR_6, int VAR_7,
    const char *VAR_8, int *VAR_9, char *VAR_10, struct thread *VAR_11)
{
 struct uio VAR_12;
 struct iovec VAR_13;
 int VAR_14;

 VAR_13.iov_len = *VAR_9;
 VAR_13.iov_base = VAR_10;

 VAR_12.uio_iov = &VAR_13;
 VAR_12.uio_iovcnt = 1;
 VAR_12.uio_rw = VAR_3;
 VAR_12.uio_segflg = VAR_4;
 VAR_12.uio_td = VAR_11;
 VAR_12.uio_offset = 0;
 VAR_12.uio_resid = *VAR_9;

 if ((VAR_6 & VAR_0) == 0)
  FUNC_3(VAR_5, VAR_2 | VAR_1);

 FUNC_0(VAR_5, "IO_NODELOCKED with no vp lock held");


 VAR_14 = FUNC_1(VAR_5, VAR_7, VAR_8, &VAR_12, ((void*)0), ((void*)0),
     VAR_11);

 if ((VAR_6 & VAR_0) == 0)
  FUNC_2(VAR_5, 0);

 if (VAR_14 == 0) {
  *VAR_9 = *VAR_9 - VAR_12.uio_resid;
 }

 return (VAR_14);
}
