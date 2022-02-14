
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_iovcnt; struct thread* uio_td; int uio_rw; int uio_segflg; int uio_resid; struct iovec* uio_iov; } ;
struct thread {int dummy; } ;
struct iovec {int iov_len; int iov_base; } ;
struct cloudabi_sys_random_get_args {int buf_len; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uio*,int) ;

int
FUNC_1(struct thread *VAR_2,
    struct cloudabi_sys_random_get_args *VAR_3)
{
 struct iovec VAR_4 = {
  .iov_base = VAR_3->buf,
  .iov_len = VAR_3->buf_len
 };
 struct uio VAR_5 = {
  .uio_iov = &VAR_4,
  .uio_iovcnt = 1,
  .uio_resid = VAR_4.iov_len,
  .uio_segflg = VAR_1,
  .uio_rw = VAR_0,
  .uio_td = VAR_2
 };

 return (FUNC_0(&VAR_5, 0));
}
