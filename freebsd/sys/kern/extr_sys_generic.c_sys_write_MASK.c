
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_args {scalar_t__ nbyte; int fd; scalar_t__ buf; } ;
struct uio {int uio_iovcnt; scalar_t__ uio_resid; int uio_segflg; struct iovec* uio_iov; } ;
struct thread {int dummy; } ;
struct iovec {scalar_t__ iov_len; void* iov_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ,struct uio*) ;

int
FUNC_1(struct thread *VAR_3, struct write_args *VAR_4)
{
 struct uio VAR_5;
 struct iovec VAR_6;
 int VAR_7;

 if (VAR_4->nbyte > VAR_1)
  return (VAR_0);
 VAR_6.iov_base = (void *)(uintptr_t)VAR_4->buf;
 VAR_6.iov_len = VAR_4->nbyte;
 VAR_5.uio_iov = &VAR_6;
 VAR_5.uio_iovcnt = 1;
 VAR_5.uio_resid = VAR_4->nbyte;
 VAR_5.uio_segflg = VAR_2;
 VAR_7 = FUNC_0(VAR_3, VAR_4->fd, &VAR_5);
 return (VAR_7);
}
