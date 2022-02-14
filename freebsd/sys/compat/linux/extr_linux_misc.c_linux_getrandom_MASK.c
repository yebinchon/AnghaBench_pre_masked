
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_iovcnt; scalar_t__ uio_resid; struct thread* uio_td; int uio_rw; int uio_segflg; struct iovec* uio_iov; } ;
struct thread {scalar_t__* td_retval; } ;
struct linux_getrandom_args {int flags; scalar_t__ count; int buf; } ;
struct iovec {scalar_t__ iov_len; int iov_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uio*,int) ;

int
FUNC_1(struct thread *VAR_6, struct linux_getrandom_args *VAR_7)
{
 struct uio VAR_8;
 struct iovec VAR_9;
 int VAR_10;

 if (VAR_7->flags & ~(VAR_2|VAR_3))
  return (VAR_0);
 if (VAR_7->count > VAR_1)
  VAR_7->count = VAR_1;

 VAR_9.iov_base = VAR_7->buf;
 VAR_9.iov_len = VAR_7->count;

 VAR_8.uio_iov = &VAR_9;
 VAR_8.uio_iovcnt = 1;
 VAR_8.uio_resid = VAR_9.iov_len;
 VAR_8.uio_segflg = VAR_5;
 VAR_8.uio_rw = VAR_4;
 VAR_8.uio_td = VAR_6;

 VAR_10 = FUNC_0(&VAR_8, VAR_7->flags & VAR_2);
 if (VAR_10 == 0)
  VAR_6->td_retval[0] = VAR_7->count - VAR_8.uio_resid;
 return (VAR_10);
}
