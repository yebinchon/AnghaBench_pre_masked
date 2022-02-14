
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct thread {TYPE_2__* td_proc; scalar_t__* td_retval; int td_ucred; } ;
struct prison {int dummy; } ;
struct TYPE_14__ {scalar_t__ seq; int mode; } ;
struct TYPE_10__ {size_t msg_qbytes; size_t msg_cbytes; int msg_stime; int msg_lspid; int msg_qnum; struct msg* __msg_last; struct msg* __msg_first; TYPE_6__ msg_perm; } ;
struct msqid_kernel {TYPE_1__ u; } ;
struct msg {int msg_spot; size_t msg_ts; long msg_type; struct msg* msg_next; } ;
struct TYPE_13__ {int msgmni; size_t msgssz; short msgseg; } ;
struct TYPE_12__ {int next; } ;
struct TYPE_11__ {int p_pid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (void const*,int *,size_t) ;
 struct msg* VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (size_t,size_t) ;
 int VAR_15 ;
 int FUNC_9 (struct thread*,TYPE_6__*,int ) ;
 int FUNC_10 (int ,struct msqid_kernel*,struct msg*) ;
 int FUNC_11 (int ,struct msg*,struct msqid_kernel*) ;
 int FUNC_12 (int ,struct msqid_kernel*) ;
 struct prison* FUNC_13 (int ) ;
 int FUNC_14 (struct msg*) ;
 TYPE_5__ VAR_16 ;
 TYPE_4__* VAR_17 ;
 int * VAR_18 ;
 int FUNC_15 (struct msqid_kernel*,int *,int,char*,int ) ;
 int VAR_19 ;
 int FUNC_16 (struct prison*,struct msqid_kernel*) ;
 struct msqid_kernel* VAR_20 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int VAR_21 ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (TYPE_2__*,int ,size_t) ;
 scalar_t__ VAR_22 ;
 int FUNC_21 (TYPE_2__*,int ,size_t) ;
 int VAR_23 ;
 int FUNC_22 (struct msqid_kernel*) ;

int
FUNC_23(struct thread *VAR_24, int VAR_25, const void *VAR_26,
    size_t VAR_27, int VAR_28, long VAR_29)
{
 int VAR_30, VAR_31, VAR_32 = 0;
 struct msqid_kernel *VAR_33;
 struct msg *VAR_34;
 struct prison *VAR_35;
 short VAR_36;




 VAR_35 = FUNC_13(VAR_24->td_ucred);
 if (VAR_35 == ((void*)0))
  return (VAR_4);

 FUNC_17(&VAR_19);
 FUNC_0(VAR_25);
 VAR_30 = FUNC_3(VAR_25);

 if (VAR_30 < 0 || VAR_30 >= VAR_16.msgmni) {
  FUNC_2(("msqid (%d) out of range (0<=msqid<%d)\n", VAR_30,
      VAR_16.msgmni));
  VAR_32 = VAR_3;
  goto done2;
 }

 VAR_33 = &VAR_20[VAR_30];
 FUNC_1(&VAR_33->u.msg_perm);
 if (VAR_33->u.msg_qbytes == 0) {
  FUNC_2(("no such message queue id\n"));
  VAR_32 = VAR_3;
  goto done2;
 }
 if (VAR_33->u.msg_perm.seq != FUNC_4(VAR_25)) {
  FUNC_2(("wrong sequence number\n"));
  VAR_32 = VAR_3;
  goto done2;
 }

 if ((VAR_32 = FUNC_16(VAR_35, VAR_33))) {
  FUNC_2(("requester can't see prison\n"));
  goto done2;
 }

 if ((VAR_32 = FUNC_9(VAR_24, &VAR_33->u.msg_perm, VAR_7))) {
  FUNC_2(("requester doesn't have write access\n"));
  goto done2;
 }
 VAR_31 = FUNC_8(VAR_27, VAR_16.msgssz);
 FUNC_2(("msgsz=%zu, msgssz=%d, segs_needed=%d\n", VAR_27,
     VAR_16.msgssz, VAR_31));
 for (;;) {
  int VAR_37 = 0;






  if (VAR_27 > VAR_33->u.msg_qbytes) {
   FUNC_2(("msgsz > msqkptr->u.msg_qbytes\n"));
   VAR_32 = VAR_3;
   goto done3;
  }

  if (VAR_33->u.msg_perm.mode & VAR_8) {
   FUNC_2(("msqid is locked\n"));
   VAR_37 = 1;
  }
  if (VAR_27 + VAR_33->u.msg_cbytes > VAR_33->u.msg_qbytes) {
   FUNC_2(("msgsz + msg_cbytes > msg_qbytes\n"));
   VAR_37 = 1;
  }
  if (VAR_31 > VAR_21) {
   FUNC_2(("segs_needed > nfree_msgmaps\n"));
   VAR_37 = 1;
  }
  if (VAR_13 == ((void*)0)) {
   FUNC_2(("no more msghdrs\n"));
   VAR_37 = 1;
  }

  if (VAR_37) {
   int VAR_38;

   if ((VAR_28 & VAR_6) != 0) {
    FUNC_2(("need more resources but caller "
        "doesn't want to wait\n"));
    VAR_32 = VAR_0;
    goto done3;
   }

   if ((VAR_33->u.msg_perm.mode & VAR_8) != 0) {
    FUNC_2(("we don't own the msqid_ds\n"));
    VAR_38 = 0;
   } else {


    FUNC_2(("we own the msqid_ds\n"));
    VAR_33->u.msg_perm.mode |= VAR_8;
    VAR_38 = 1;
   }
   FUNC_2(("msgsnd:  goodnight\n"));
   VAR_32 = FUNC_15(VAR_33, &VAR_19, (VAR_10 - 4) | VAR_9,
       "msgsnd", VAR_15);
   FUNC_2(("msgsnd:  good morning, error=%d\n", VAR_32));
   if (VAR_38)
    VAR_33->u.msg_perm.mode &= ~VAR_8;
   if (VAR_32 == VAR_5) {
    FUNC_2(("msgsnd:  timed out\n"));
    continue;
   }
   if (VAR_32 != 0) {
    FUNC_2(("msgsnd:  interrupted system call\n"));
    VAR_32 = VAR_2;
    goto done3;
   }





   if (VAR_33->u.msg_qbytes == 0) {
    FUNC_2(("msqid deleted\n"));
    VAR_32 = VAR_1;
    goto done3;
   }

  } else {
   FUNC_2(("got all the resources that we need\n"));
   break;
  }
 }






 if (VAR_33->u.msg_perm.mode & VAR_8)
  FUNC_19("msg_perm.mode & MSG_LOCKED");
 if (VAR_31 > VAR_21)
  FUNC_19("segs_needed > nfree_msgmaps");
 if (VAR_27 + VAR_33->u.msg_cbytes > VAR_33->u.msg_qbytes)
  FUNC_19("msgsz + msg_cbytes > msg_qbytes");
 if (VAR_13 == ((void*)0))
  FUNC_19("no more msghdrs");






 if ((VAR_33->u.msg_perm.mode & VAR_8) != 0)
  FUNC_19("msqid_ds is already locked");
 VAR_33->u.msg_perm.mode |= VAR_8;





 VAR_34 = VAR_13;
 VAR_13 = VAR_34->msg_next;
 VAR_34->msg_spot = -1;
 VAR_34->msg_ts = VAR_27;
 VAR_34->msg_type = VAR_29;
 while (VAR_31 > 0) {
  if (VAR_21 <= 0)
   FUNC_19("not enough msgmaps");
  if (VAR_14 == -1)
   FUNC_19("nil free_msgmaps");
  VAR_36 = VAR_14;
  if (VAR_36 <= -1)
   FUNC_19("next too low #1");
  if (VAR_36 >= VAR_16.msgseg)
   FUNC_19("next out of range #1");
  FUNC_2(("allocating segment %d to message\n", VAR_36));
  VAR_14 = VAR_17[VAR_36].next;
  VAR_21--;
  VAR_17[VAR_36].next = VAR_34->msg_spot;
  VAR_34->msg_spot = VAR_36;
  VAR_31--;
 }





 if (VAR_34->msg_type < 1) {
  FUNC_14(VAR_34);
  VAR_33->u.msg_perm.mode &= ~VAR_8;
  FUNC_22(VAR_33);
  FUNC_2(("mtype (%ld) < 1\n", VAR_34->msg_type));
  VAR_32 = VAR_3;
  goto done3;
 }





 VAR_36 = VAR_34->msg_spot;
 while (VAR_27 > 0) {
  size_t VAR_39;
  if (VAR_27 > VAR_16.msgssz)
   VAR_39 = VAR_16.msgssz;
  else
   VAR_39 = VAR_27;
  if (VAR_36 <= -1)
   FUNC_19("next too low #2");
  if (VAR_36 >= VAR_16.msgseg)
   FUNC_19("next out of range #2");
  FUNC_18(&VAR_19);
  if ((VAR_32 = FUNC_7(VAR_26, &VAR_18[VAR_36 * VAR_16.msgssz],
      VAR_39)) != 0) {
   FUNC_17(&VAR_19);
   FUNC_2(("error %d copying in message segment\n",
       VAR_32));
   FUNC_14(VAR_34);
   VAR_33->u.msg_perm.mode &= ~VAR_8;
   FUNC_22(VAR_33);
   goto done3;
  }
  FUNC_17(&VAR_19);
  VAR_27 -= VAR_39;
  VAR_26 = (const char *)VAR_26 + VAR_39;
  VAR_36 = VAR_17[VAR_36].next;
 }
 if (VAR_36 != -1)
  FUNC_19("didn't use all the msg segments");





 VAR_33->u.msg_perm.mode &= ~VAR_8;





 if (VAR_33->u.msg_qbytes == 0) {
  FUNC_14(VAR_34);
  FUNC_22(VAR_33);
  VAR_32 = VAR_1;
  goto done3;
 }
 if (VAR_33->u.__msg_first == ((void*)0)) {
  VAR_33->u.__msg_first = VAR_34;
  VAR_33->u.__msg_last = VAR_34;
 } else {
  VAR_33->u.__msg_last->msg_next = VAR_34;
  VAR_33->u.__msg_last = VAR_34;
 }
 VAR_33->u.__msg_last->msg_next = ((void*)0);

 VAR_33->u.msg_cbytes += VAR_34->msg_ts;
 VAR_33->u.msg_qnum++;
 VAR_33->u.msg_lspid = VAR_24->td_proc->p_pid;
 VAR_33->u.msg_stime = VAR_23;

 FUNC_22(VAR_33);
 VAR_24->td_retval[0] = 0;
done3:
done2:
 FUNC_18(&VAR_19);
 return (VAR_32);
}
