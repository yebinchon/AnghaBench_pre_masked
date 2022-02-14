
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct uio {int uio_iovcnt; size_t uio_resid; struct thread* uio_td; int uio_rw; int uio_segflg; int uio_offset; struct iovec* uio_iov; } ;
struct thread {struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct iovec {size_t iov_len; int iov_base; } ;
typedef int off_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct thread* VAR_4 ;
 int FUNC_2 (struct proc*,struct uio*) ;

__attribute__((used)) static int
FUNC_3(struct proc *VAR_5, vm_offset_t VAR_6,
    struct proc *VAR_7, vm_offset_t VAR_8, size_t VAR_9)
{
 struct thread *VAR_10;
 struct proc *VAR_11;
 int VAR_12;

 VAR_10 = VAR_4;
 VAR_11 = VAR_10->td_proc;

 if (VAR_11 == VAR_7) {
  struct iovec VAR_13 = {
   .iov_base = (caddr_t)VAR_8,
   .iov_len = VAR_9,
  };
  struct uio VAR_14 = {
   .uio_iov = &VAR_13,
   .uio_iovcnt = 1,
   .uio_offset = (off_t)VAR_6,
   .uio_resid = VAR_9,
   .uio_segflg = VAR_2,
   .uio_rw = VAR_1,
   .uio_td = VAR_10,
  };

  FUNC_0(VAR_5);
  VAR_12 = FUNC_2(VAR_5, &VAR_14);
  FUNC_1(VAR_5);

 } else if (VAR_11 == VAR_5) {
  struct iovec VAR_15 = {
   .iov_base = (caddr_t)VAR_6,
   .iov_len = VAR_9,
  };
  struct uio VAR_16 = {
   .uio_iov = &VAR_15,
   .uio_iovcnt = 1,
   .uio_offset = (off_t)VAR_8,
   .uio_resid = VAR_9,
   .uio_segflg = VAR_2,
   .uio_rw = VAR_3,
   .uio_td = VAR_10,
  };

  FUNC_0(VAR_7);
  VAR_12 = FUNC_2(VAR_7, &VAR_16);
  FUNC_1(VAR_7);
 } else {
  VAR_12 = VAR_0;
 }
 return (VAR_12);
}
