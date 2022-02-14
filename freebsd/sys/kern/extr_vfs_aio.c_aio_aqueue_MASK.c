
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_short ;
struct thread {int td_ucred; struct proc* td_proc; } ;
struct proc {struct kaioinfo* p_aioinfo; } ;
struct kevent {uintptr_t ident; int flags; intptr_t data; int udata; int filter; } ;
struct kaioinfo {scalar_t__ kaio_count; int kaio_jobqueue; int kaio_all; } ;
struct TYPE_8__ {int error; void* kernelinfo; } ;
struct TYPE_7__ {int sival_ptr; } ;
struct TYPE_10__ {scalar_t__ sigev_notify; int sigev_notify_kevent_flags; int sigev_notify_kqueue; TYPE_1__ sigev_value; int sigev_signo; } ;
struct TYPE_12__ {scalar_t__ aio_nbytes; int aio_lio_opcode; int aio_fildes; scalar_t__ aio_offset; TYPE_2__ _aiocb_private; TYPE_4__ aio_sigevent; } ;
struct kaiocb {int jobflags; int klist; struct aioliojob* lio; int cred; struct proc* userproc; TYPE_6__ uaiocb; struct aiocb* ujob; scalar_t__ seqno; struct file* fd_file; int ksi; } ;
struct file {TYPE_3__* f_ops; TYPE_5__* f_vnode; } ;
struct aioliojob {int lioj_count; } ;
struct aiocb_ops {int (* store_kernelinfo ) (struct aiocb*,int) ;int (* copyin ) (struct aiocb*,TYPE_6__*) ;int (* store_error ) (struct aiocb*,int) ;int (* store_status ) (struct aiocb*,int) ;} ;
struct aiocb {int dummy; } ;
typedef int kev ;
struct TYPE_11__ {scalar_t__ v_type; } ;
struct TYPE_9__ {int * fo_aio_queue; } ;


 int FUNC_0 (struct kaioinfo*) ;
 int FUNC_1 (struct kaioinfo*) ;
 int FUNC_2 (struct kaioinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;





 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (int *,struct kaiocb*,int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct proc*,struct kaiocb*) ;
 int FUNC_6 (struct proc*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_7 (struct file*,struct kaiocb*) ;
 int FUNC_8 (struct kaiocb*,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_9 (scalar_t__*,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_10 (int ) ;
 int VAR_28 ;
 int FUNC_11 (struct file*,struct thread*) ;
 int FUNC_12 (struct thread*,int,int *,struct file**) ;
 int FUNC_13 (struct thread*,int,int *,struct file**) ;
 int FUNC_14 (struct thread*,int,int *,struct file**) ;
 int FUNC_15 (struct file*,struct kaiocb*) ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int,struct kevent*,struct thread*,int) ;
 int FUNC_19 (int *) ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_20 (struct kevent*,int ,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int FUNC_23 (struct aiocb*,int) ;
 int FUNC_24 (struct aiocb*,int) ;
 int FUNC_25 (struct aiocb*,int) ;
 int FUNC_26 (struct aiocb*,int) ;
 int FUNC_27 (struct aiocb*,int) ;
 int FUNC_28 (struct aiocb*,int) ;
 int FUNC_29 (struct aiocb*,TYPE_6__*) ;
 int FUNC_30 (struct aiocb*,int) ;
 int FUNC_31 (struct aiocb*,int) ;
 int FUNC_32 (struct aiocb*,int) ;
 int FUNC_33 (struct aiocb*,int) ;
 struct kaiocb* FUNC_34 (int ,int) ;
 int FUNC_35 (int ,struct kaiocb*) ;

int
FUNC_36(struct thread *VAR_35, struct aiocb *VAR_36, struct aioliojob *VAR_37,
    int VAR_38, struct aiocb_ops *VAR_39)
{
 struct proc *VAR_40 = VAR_35->td_proc;
 struct file *VAR_41;
 struct kaiocb *VAR_42;
 struct kaioinfo *VAR_43;
 struct kevent VAR_44;
 int VAR_45;
 int VAR_46;
 int VAR_47, VAR_48;
 int VAR_49;
 u_short VAR_50;

 if (VAR_40->p_aioinfo == ((void*)0))
  FUNC_6(VAR_40);

 VAR_43 = VAR_40->p_aioinfo;

 VAR_39->store_status(VAR_36, -1);
 VAR_39->store_error(VAR_36, 0);
 VAR_39->store_kernelinfo(VAR_36, -1);

 if (VAR_33 >= VAR_32 ||
     VAR_43->kaio_count >= VAR_31) {
  VAR_39->store_error(VAR_36, VAR_0);
  return (VAR_0);
 }

 VAR_42 = FUNC_34(VAR_22, VAR_13 | VAR_14);
 FUNC_17(&VAR_42->klist, FUNC_1(VAR_43));

 VAR_46 = VAR_39->copyin(VAR_36, &VAR_42->uaiocb);
 if (VAR_46) {
  VAR_39->store_error(VAR_36, VAR_46);
  FUNC_35(VAR_22, VAR_42);
  return (VAR_46);
 }

 if (VAR_42->uaiocb.aio_nbytes > VAR_10) {
  FUNC_35(VAR_22, VAR_42);
  return (VAR_2);
 }

 if (VAR_42->uaiocb.aio_sigevent.sigev_notify != VAR_15 &&
     VAR_42->uaiocb.aio_sigevent.sigev_notify != VAR_17 &&
     VAR_42->uaiocb.aio_sigevent.sigev_notify != VAR_18 &&
     VAR_42->uaiocb.aio_sigevent.sigev_notify != VAR_16) {
  VAR_39->store_error(VAR_36, VAR_2);
  FUNC_35(VAR_22, VAR_42);
  return (VAR_2);
 }

 if ((VAR_42->uaiocb.aio_sigevent.sigev_notify == VAR_17 ||
      VAR_42->uaiocb.aio_sigevent.sigev_notify == VAR_18) &&
  !FUNC_4(VAR_42->uaiocb.aio_sigevent.sigev_signo)) {
  FUNC_35(VAR_22, VAR_42);
  return (VAR_2);
 }

 FUNC_19(&VAR_42->ksi);


 VAR_42->ujob = VAR_36;


 if (VAR_38 != 131)
  VAR_42->uaiocb.aio_lio_opcode = VAR_38;
 VAR_45 = VAR_42->uaiocb.aio_lio_opcode;
 VAR_47 = VAR_42->uaiocb.aio_fildes;
 switch (VAR_45) {
 case 128:
  VAR_46 = FUNC_14(VAR_35, VAR_47, &VAR_27, &VAR_41);
  break;
 case 130:
  VAR_46 = FUNC_13(VAR_35, VAR_47, &VAR_26, &VAR_41);
  break;
 case 129:
  VAR_46 = FUNC_12(VAR_35, VAR_47, &VAR_24, &VAR_41);
  break;
 case 132:
  VAR_41 = ((void*)0);
  break;
 case 131:
  VAR_46 = FUNC_12(VAR_35, VAR_47, &VAR_25, &VAR_41);
  break;
 default:
  VAR_46 = VAR_2;
 }
 if (VAR_46) {
  FUNC_35(VAR_22, VAR_42);
  VAR_39->store_error(VAR_36, VAR_46);
  return (VAR_46);
 }

 if (VAR_45 == 129 && VAR_41->f_vnode == ((void*)0)) {
  VAR_46 = VAR_2;
  goto aqueue_fail;
 }

 if ((VAR_45 == 130 || VAR_45 == 128) &&
     VAR_42->uaiocb.aio_offset < 0 &&
     (VAR_41->f_vnode == ((void*)0) || VAR_41->f_vnode->v_type != VAR_19)) {
  VAR_46 = VAR_2;
  goto aqueue_fail;
 }

 VAR_42->fd_file = VAR_41;

 FUNC_21(&VAR_20);
 VAR_49 = VAR_29++;
 VAR_42->seqno = VAR_30++;
 FUNC_22(&VAR_20);
 VAR_46 = VAR_39->store_kernelinfo(VAR_36, VAR_49);
 if (VAR_46) {
  VAR_46 = VAR_2;
  goto aqueue_fail;
 }
 VAR_42->uaiocb._aiocb_private.kernelinfo = (void *)(intptr_t)VAR_49;

 if (VAR_45 == 131) {
  FUNC_11(VAR_41, VAR_35);
  FUNC_35(VAR_22, VAR_42);
  return (0);
 }

 if (VAR_42->uaiocb.aio_sigevent.sigev_notify != VAR_15)
  goto no_kqueue;
 VAR_50 = VAR_42->uaiocb.aio_sigevent.sigev_notify_kevent_flags;
 if ((VAR_50 & ~(VAR_5 | VAR_6 | VAR_9)) != 0) {
  VAR_46 = VAR_2;
  goto aqueue_fail;
 }
 VAR_48 = VAR_42->uaiocb.aio_sigevent.sigev_notify_kqueue;
 FUNC_20(&VAR_44, 0, sizeof(VAR_44));
 VAR_44.ident = (uintptr_t)VAR_42->ujob;
 VAR_44.filter = VAR_3;
 VAR_44.flags = VAR_4 | VAR_7 | VAR_8 | VAR_50;
 VAR_44.data = (intptr_t)VAR_42;
 VAR_44.udata = VAR_42->uaiocb.aio_sigevent.sigev_value.sival_ptr;
 VAR_46 = FUNC_18(VAR_48, &VAR_44, VAR_35, VAR_13);
 if (VAR_46)
  goto aqueue_fail;

no_kqueue:

 VAR_39->store_error(VAR_36, VAR_1);
 VAR_42->uaiocb._aiocb_private.error = VAR_1;
 VAR_42->userproc = VAR_40;
 VAR_42->cred = FUNC_10(VAR_35->td_ucred);
 VAR_42->jobflags = VAR_12;
 VAR_42->lio = VAR_37;

 if (VAR_45 == 132) {
  FUNC_8(VAR_42, VAR_21);
  VAR_46 = 0;
 } else if (VAR_41->f_ops->fo_aio_queue == ((void*)0))
  VAR_46 = FUNC_7(VAR_41, VAR_42);
 else
  VAR_46 = FUNC_15(VAR_41, VAR_42);
 if (VAR_46)
  goto aqueue_fail;

 FUNC_0(VAR_43);
 VAR_42->jobflags &= ~VAR_12;
 FUNC_3(&VAR_43->kaio_all, VAR_42, VAR_23);
 VAR_43->kaio_count++;
 if (VAR_37)
  VAR_37->lioj_count++;
 FUNC_9(&VAR_33, 1);
 if (VAR_42->jobflags & VAR_11) {





  FUNC_5(VAR_40, VAR_42);
 } else
  FUNC_3(&VAR_43->kaio_jobqueue, VAR_42, VAR_34);
 FUNC_2(VAR_43);
 return (0);

aqueue_fail:
 FUNC_16(&VAR_42->klist, VAR_28, 0);
 if (VAR_41)
  FUNC_11(VAR_41, VAR_35);
 FUNC_35(VAR_22, VAR_42);
 VAR_39->store_error(VAR_36, VAR_46);
 return (VAR_46);
}
