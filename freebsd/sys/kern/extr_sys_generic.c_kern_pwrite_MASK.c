
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_iovcnt; size_t uio_resid; int uio_segflg; struct iovec* uio_iov; } ;
struct thread {int dummy; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
typedef int off_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int,struct uio*,int ) ;

int
FUNC_1(struct thread *VAR_3, int VAR_4, const void *VAR_5, size_t VAR_6,
    off_t VAR_7)
{
 struct uio VAR_8;
 struct iovec VAR_9;
 int VAR_10;

 if (VAR_6 > VAR_1)
  return (VAR_0);
 VAR_9.iov_base = (void *)(uintptr_t)VAR_5;
 VAR_9.iov_len = VAR_6;
 VAR_8.uio_iov = &VAR_9;
 VAR_8.uio_iovcnt = 1;
 VAR_8.uio_resid = VAR_6;
 VAR_8.uio_segflg = VAR_2;
 VAR_10 = FUNC_0(VAR_3, VAR_4, &VAR_8, VAR_7);
 return (VAR_10);
}
