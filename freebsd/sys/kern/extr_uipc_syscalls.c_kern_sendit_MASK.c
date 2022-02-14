
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_iovcnt; int uio_segflg; scalar_t__ uio_resid; scalar_t__ uio_offset; struct thread* uio_td; int uio_rw; struct iovec* uio_iov; } ;
struct thread {scalar_t__* td_retval; int td_proc; int td_ucred; } ;
struct socket {int so_options; } ;
struct msghdr {int msg_iovlen; int * msg_name; struct iovec* msg_iov; } ;
struct mbuf {int dummy; } ;
struct iovec {scalar_t__ iov_len; } ;
struct file {scalar_t__ f_data; } ;
typedef scalar_t__ ssize_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct thread*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct thread*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct uio* FUNC_5 (struct uio*) ;
 int FUNC_6 (struct file*,struct thread*) ;
 int FUNC_7 (struct thread*,int,int *,struct file**,int *,int *) ;
 int FUNC_8 (int,int ,struct uio*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct mbuf*) ;
 int FUNC_11 (int ,struct socket*,int *) ;
 int FUNC_12 (int ,struct socket*) ;
 int FUNC_13 (struct socket*,int *,struct uio*,int ,struct mbuf*,int,struct thread*) ;
 int FUNC_14 (struct thread*,int ) ;

int
FUNC_15(struct thread *VAR_14, int VAR_15, struct msghdr *VAR_16, int VAR_17,
    struct mbuf *VAR_18, enum uio_seg VAR_19)
{
 struct file *VAR_20;
 struct uio VAR_21;
 struct iovec *VAR_22;
 struct socket *VAR_23;
 cap_rights_t *VAR_24;



 ssize_t VAR_25;
 int VAR_26, VAR_27;

 FUNC_0(VAR_15);
 VAR_24 = &VAR_13;
 if (VAR_16->msg_name != ((void*)0)) {
  FUNC_1(VAR_14, VAR_0, VAR_16->msg_name);
  VAR_24 = &VAR_12;
 }
 VAR_27 = FUNC_7(VAR_14, VAR_15, VAR_24, &VAR_20, ((void*)0), ((void*)0));
 if (VAR_27 != 0) {
  FUNC_10(VAR_18);
  return (VAR_27);
 }
 VAR_23 = (struct socket *)VAR_20->f_data;
 VAR_21.uio_iov = VAR_16->msg_iov;
 VAR_21.uio_iovcnt = VAR_16->msg_iovlen;
 VAR_21.uio_segflg = VAR_19;
 VAR_21.uio_rw = VAR_11;
 VAR_21.uio_td = VAR_14;
 VAR_21.uio_offset = 0;
 VAR_21.uio_resid = 0;
 VAR_22 = VAR_16->msg_iov;
 for (VAR_26 = 0; VAR_26 < VAR_16->msg_iovlen; VAR_26++, VAR_22++) {
  if ((VAR_21.uio_resid += VAR_22->iov_len) < 0) {
   VAR_27 = VAR_2;
   FUNC_10(VAR_18);
   goto bad;
  }
 }




 VAR_25 = VAR_21.uio_resid;
 VAR_27 = FUNC_13(VAR_23, VAR_16->msg_name, &VAR_21, 0, VAR_18, VAR_17, VAR_14);
 if (VAR_27 != 0) {
  if (VAR_21.uio_resid != VAR_25 && (VAR_27 == VAR_4 ||
      VAR_27 == VAR_1 || VAR_27 == VAR_5))
   VAR_27 = 0;

  if (VAR_27 == VAR_3 && !(VAR_23->so_options & VAR_10) &&
      !(VAR_17 & VAR_8)) {
   FUNC_3(VAR_14->td_proc);
   FUNC_14(VAR_14, VAR_9);
   FUNC_4(VAR_14->td_proc);
  }
 }
 if (VAR_27 == 0)
  VAR_14->td_retval[0] = VAR_25 - VAR_21.uio_resid;






bad:
 FUNC_6(VAR_20, VAR_14);
 return (VAR_27);
}
