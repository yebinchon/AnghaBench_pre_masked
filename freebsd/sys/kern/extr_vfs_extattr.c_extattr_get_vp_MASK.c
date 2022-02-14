
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct uio {int uio_iovcnt; size_t uio_resid; struct thread* uio_td; int uio_segflg; int uio_rw; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct thread {size_t* td_retval; int td_ucred; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vnode*,int,char const*,struct uio*,size_t*,int ,struct thread*) ;
 int FUNC_1 (struct vnode*,int ) ;
 int FUNC_2 (int ,struct vnode*,int,char const*) ;
 int FUNC_3 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_4(struct vnode *VAR_6, int VAR_7, const char *VAR_8,
    void *VAR_9, size_t VAR_10, struct thread *VAR_11)
{
 struct uio VAR_12, *VAR_13;
 struct iovec VAR_14;
 ssize_t VAR_15;
 size_t VAR_16, *VAR_17;
 int VAR_18;

 if (VAR_10 > VAR_1)
  return (VAR_0);

 FUNC_3(VAR_6, VAR_3 | VAR_2);






 VAR_13 = ((void*)0);
 VAR_17 = ((void*)0);
 VAR_15 = 0;
 if (VAR_9 != ((void*)0)) {
  VAR_14.iov_base = VAR_9;
  VAR_14.iov_len = VAR_10;
  VAR_12.uio_iov = &VAR_14;
  VAR_12.uio_iovcnt = 1;
  VAR_12.uio_offset = 0;
  VAR_12.uio_resid = VAR_10;
  VAR_12.uio_rw = VAR_4;
  VAR_12.uio_segflg = VAR_5;
  VAR_12.uio_td = VAR_11;
  VAR_13 = &VAR_12;
  VAR_15 = VAR_10;
 } else
  VAR_17 = &VAR_16;
 VAR_18 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_13, VAR_17,
     VAR_11->td_ucred, VAR_11);

 if (VAR_13 != ((void*)0)) {
  VAR_15 -= VAR_12.uio_resid;
  VAR_11->td_retval[0] = VAR_15;
 } else
  VAR_11->td_retval[0] = VAR_16;



 FUNC_1(VAR_6, 0);
 return (VAR_18);
}
