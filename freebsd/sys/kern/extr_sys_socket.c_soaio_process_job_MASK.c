
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio {int uio_iovcnt; size_t uio_resid; int uio_rw; struct thread* uio_td; int uio_segflg; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct ucred {int dummy; } ;
struct TYPE_3__ {long ru_msgrcv; long ru_msgsnd; } ;
struct thread {struct ucred* td_ucred; TYPE_1__ td_ru; } ;
struct sockbuf {int sb_aiojobq; } ;
struct socket {int so_options; int so_state; struct sockbuf so_rcv; } ;
struct TYPE_4__ {size_t aio_nbytes; scalar_t__ aio_buf; } ;
struct kaiocb {size_t aio_done; int msgrcv; int msgsnd; TYPE_2__ uaiocb; int userproc; struct ucred* cred; struct file* fd_file; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
struct file {int f_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (struct sockbuf*) ;
 int FUNC_4 (struct sockbuf*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct kaiocb*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct kaiocb*) ;
 int FUNC_8 (struct kaiocb*,size_t,int) ;
 int FUNC_9 (struct kaiocb*,int ) ;
 int FUNC_10 (struct kaiocb*) ;
 struct thread* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int ,int ) ;
 int VAR_15 ;
 int FUNC_12 (int ,struct socket*) ;
 int FUNC_13 (int ,struct socket*) ;
 scalar_t__ FUNC_14 (struct socket*,struct sockbuf*) ;
 int VAR_16 ;
 int FUNC_15 (struct socket*,int *,struct uio*,int *,int *,int*) ;
 int FUNC_16 (struct socket*,int *,struct uio*,int *,int *,int,struct thread*) ;

__attribute__((used)) static void
FUNC_17(struct socket *VAR_17, struct sockbuf *VAR_18, struct kaiocb *VAR_19)
{
 struct ucred *VAR_20;
 struct thread *VAR_21;
 struct file *VAR_22;
 struct uio VAR_23;
 struct iovec VAR_24;
 size_t VAR_25, VAR_26;
 long VAR_27;
 int VAR_28, VAR_29;

 FUNC_4(VAR_18);
 FUNC_10(VAR_19);
 VAR_21 = VAR_12;
 VAR_22 = VAR_19->fd_file;
retry:
 VAR_20 = VAR_21->td_ucred;
 VAR_21->td_ucred = VAR_19->cred;

 VAR_26 = VAR_19->aio_done;
 VAR_25 = VAR_19->uaiocb.aio_nbytes - VAR_26;
 VAR_24.iov_base = (void *)((uintptr_t)VAR_19->uaiocb.aio_buf + VAR_26);
 VAR_24.iov_len = VAR_25;
 VAR_23.uio_iov = &VAR_24;
 VAR_23.uio_iovcnt = 1;
 VAR_23.uio_offset = 0;
 VAR_23.uio_resid = VAR_25;
 VAR_23.uio_segflg = VAR_10;
 VAR_23.uio_td = VAR_21;
 VAR_29 = VAR_5;







 if (VAR_18 == &VAR_17->so_rcv) {
  VAR_23.uio_rw = VAR_9;
  VAR_27 = VAR_21->td_ru.ru_msgrcv;





   VAR_28 = FUNC_15(VAR_17, ((void*)0), &VAR_23, ((void*)0), ((void*)0), &VAR_29);
  if (VAR_21->td_ru.ru_msgrcv != VAR_27)
   VAR_19->msgrcv = 1;
 } else {
  if (!FUNC_5(&VAR_18->sb_aiojobq))
   VAR_29 |= VAR_4;
  VAR_23.uio_rw = VAR_11;
  VAR_27 = VAR_21->td_ru.ru_msgsnd;




   VAR_28 = FUNC_16(VAR_17, ((void*)0), &VAR_23, ((void*)0), ((void*)0), VAR_29, VAR_21);
  if (VAR_21->td_ru.ru_msgsnd != VAR_27)
   VAR_19->msgsnd = 1;
  if (VAR_28 == VAR_1 && (VAR_17->so_options & VAR_7) == 0) {
   FUNC_1(VAR_19->userproc);
   FUNC_11(VAR_19->userproc, VAR_6);
   FUNC_2(VAR_19->userproc);
  }
 }

 VAR_26 += VAR_25 - VAR_23.uio_resid;
 VAR_19->aio_done = VAR_26;
 VAR_21->td_ucred = VAR_20;

 if (VAR_28 == VAR_3) {
  FUNC_0(VAR_26 != VAR_19->uaiocb.aio_nbytes);
  FUNC_3(VAR_18);
  if (VAR_26 == 0 || !(VAR_17->so_state & VAR_8)) {
   VAR_13++;
   if (FUNC_14(VAR_17, VAR_18)) {
    VAR_14++;
    FUNC_4(VAR_18);
    goto retry;
   }

   if (!FUNC_9(VAR_19, VAR_16)) {
    FUNC_4(VAR_18);
    if (VAR_26 != 0)
     FUNC_8(VAR_19, VAR_26, 0);
    else
     FUNC_7(VAR_19);
    FUNC_3(VAR_18);
   } else {
    FUNC_6(&VAR_18->sb_aiojobq, VAR_19, VAR_15);
   }
   return;
  }
  FUNC_4(VAR_18);
 }
 if (VAR_26 != 0 && (VAR_28 == VAR_2 || VAR_28 == VAR_0 ||
     VAR_28 == VAR_3))
  VAR_28 = 0;
 if (VAR_28)
  FUNC_8(VAR_19, -1, VAR_28);
 else
  FUNC_8(VAR_19, VAR_26, 0);
 FUNC_3(VAR_18);
}
