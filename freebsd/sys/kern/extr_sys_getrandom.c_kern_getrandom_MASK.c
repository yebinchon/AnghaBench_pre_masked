
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_iovcnt; size_t uio_resid; struct thread* uio_td; int uio_rw; int uio_segflg; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct thread {size_t* td_retval; } ;
struct iovec {size_t iov_len; void* iov_base; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uio*,int) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_6, void *VAR_7, size_t VAR_8,
    unsigned int VAR_9)
{
 struct uio VAR_10;
 struct iovec VAR_11;
 int VAR_12;

 if ((VAR_9 & ~VAR_2) != 0)
  return (VAR_0);
 if (VAR_8 > VAR_3)
  return (VAR_0);

 if (VAR_8 == 0) {
  VAR_6->td_retval[0] = 0;
  return (0);
 }

 VAR_11.iov_base = VAR_7;
 VAR_11.iov_len = VAR_8;
 VAR_10.uio_iov = &VAR_11;
 VAR_10.uio_iovcnt = 1;
 VAR_10.uio_offset = 0;
 VAR_10.uio_resid = VAR_8;
 VAR_10.uio_segflg = VAR_5;
 VAR_10.uio_rw = VAR_4;
 VAR_10.uio_td = VAR_6;

 VAR_12 = FUNC_0(&VAR_10, (VAR_9 & VAR_1) != 0);
 if (VAR_12 == 0)
  VAR_6->td_retval[0] = VAR_8 - VAR_10.uio_resid;
 return (VAR_12);
}
