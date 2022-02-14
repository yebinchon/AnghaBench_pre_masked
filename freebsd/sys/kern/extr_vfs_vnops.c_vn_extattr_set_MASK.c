
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct uio {int uio_iovcnt; int uio_resid; scalar_t__ uio_offset; struct thread* uio_td; int uio_segflg; int uio_rw; struct iovec* uio_iov; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct iovec {int iov_len; char* iov_base; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct vnode*,int,char const*,struct uio*,int *,struct thread*) ;
 int FUNC_2 (struct vnode*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (struct vnode*,int) ;
 int FUNC_5 (struct vnode*,struct mount**,int ) ;

int
FUNC_6(struct vnode *VAR_6, int VAR_7, int VAR_8,
    const char *VAR_9, int VAR_10, char *VAR_11, struct thread *VAR_12)
{
 struct uio VAR_13;
 struct iovec VAR_14;
 struct mount *VAR_15;
 int VAR_16;

 VAR_14.iov_len = VAR_10;
 VAR_14.iov_base = VAR_11;

 VAR_13.uio_iov = &VAR_14;
 VAR_13.uio_iovcnt = 1;
 VAR_13.uio_rw = VAR_4;
 VAR_13.uio_segflg = VAR_3;
 VAR_13.uio_td = VAR_12;
 VAR_13.uio_offset = 0;
 VAR_13.uio_resid = VAR_10;

 if ((VAR_7 & VAR_0) == 0) {
  if ((VAR_16 = FUNC_5(VAR_6, &VAR_15, VAR_5)) != 0)
   return (VAR_16);
  FUNC_4(VAR_6, VAR_1 | VAR_2);
 }

 FUNC_0(VAR_6, "IO_NODELOCKED with no vp lock held");


 VAR_16 = FUNC_1(VAR_6, VAR_8, VAR_9, &VAR_13, ((void*)0), VAR_12);

 if ((VAR_7 & VAR_0) == 0) {
  FUNC_3(VAR_15);
  FUNC_2(VAR_6, 0);
 }

 return (VAR_16);
}
