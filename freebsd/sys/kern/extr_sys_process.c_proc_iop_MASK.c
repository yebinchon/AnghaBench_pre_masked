
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct uio {int uio_iovcnt; scalar_t__ uio_resid; int uio_rw; struct thread* uio_td; int uio_segflg; int uio_offset; struct iovec* uio_iov; } ;
struct thread {int dummy; } ;
struct proc {int dummy; } ;
struct iovec {size_t iov_len; scalar_t__ iov_base; } ;
typedef scalar_t__ ssize_t ;
typedef enum uio_rw { ____Placeholder_uio_rw } uio_rw ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct proc*,struct uio*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct thread *VAR_2, struct proc *VAR_3, vm_offset_t VAR_4, void *VAR_5,
    size_t VAR_6, enum uio_rw VAR_7)
{
 struct iovec VAR_8;
 struct uio VAR_9;
 ssize_t VAR_10;

 FUNC_0(VAR_6 < VAR_0);
 VAR_10 = (ssize_t)VAR_6;

 VAR_8.iov_base = (caddr_t)VAR_5;
 VAR_8.iov_len = VAR_6;
 VAR_9.uio_iov = &VAR_8;
 VAR_9.uio_iovcnt = 1;
 VAR_9.uio_offset = VAR_4;
 VAR_9.uio_resid = VAR_10;
 VAR_9.uio_segflg = VAR_1;
 VAR_9.uio_rw = VAR_7;
 VAR_9.uio_td = VAR_2;
 FUNC_1(VAR_3, &VAR_9);
 if (VAR_9.uio_resid == VAR_10)
  return (-1);
 return (VAR_10 - VAR_9.uio_resid);
}
