
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct thread {size_t* td_retval; TYPE_1__* td_proc; int td_ucred; } ;
struct prison {int dummy; } ;
struct TYPE_11__ {scalar_t__ seq; } ;
struct TYPE_8__ {scalar_t__ msg_qbytes; size_t msg_cbytes; int msg_rtime; int msg_lrpid; int msg_qnum; TYPE_5__ msg_perm; struct msg* __msg_last; struct msg* __msg_first; } ;
struct msqid_kernel {int cred; TYPE_2__ u; } ;
struct msg {size_t msg_ts; long msg_type; short msg_spot; struct msg* msg_next; } ;
struct TYPE_10__ {int msgmni; size_t msgssz; short msgseg; } ;
struct TYPE_9__ {short next; } ;
struct TYPE_7__ {int p_pid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int *,void*,size_t) ;
 int FUNC_6 (struct thread*,TYPE_5__*,int ) ;
 int FUNC_7 (int ,struct msg*) ;
 int FUNC_8 (int ,struct msqid_kernel*) ;
 struct prison* FUNC_9 (int ) ;
 int FUNC_10 (struct msg*) ;
 TYPE_4__ VAR_13 ;
 TYPE_3__* VAR_14 ;
 int * VAR_15 ;
 int FUNC_11 (struct msqid_kernel*,int *,int,char*,int ) ;
 int VAR_16 ;
 int FUNC_12 (struct prison*,struct msqid_kernel*) ;
 struct msqid_kernel* VAR_17 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,int ,int) ;
 int VAR_18 ;
 int FUNC_17 (struct msqid_kernel*) ;

int
FUNC_18(struct thread *VAR_19, int VAR_20, void *VAR_21, size_t VAR_22, long VAR_23,
    int VAR_24, long *VAR_25)
{
 size_t VAR_26;
 struct msqid_kernel *VAR_27;
 struct msg *VAR_28;
 struct prison *VAR_29;
 int VAR_30, VAR_31 = 0;
 short VAR_32;

 VAR_29 = FUNC_9(VAR_19->td_ucred);
 if (VAR_29 == ((void*)0))
  return (VAR_5);

 FUNC_0(VAR_20);
 VAR_30 = FUNC_3(VAR_20);

 if (VAR_30 < 0 || VAR_30 >= VAR_13.msgmni) {
  FUNC_2(("msqid (%d) out of range (0<=msqid<%d)\n", VAR_30,
      VAR_13.msgmni));
  return (VAR_3);
 }

 VAR_27 = &VAR_17[VAR_30];
 FUNC_13(&VAR_16);
 FUNC_1(&VAR_27->u.msg_perm);
 if (VAR_27->u.msg_qbytes == 0) {
  FUNC_2(("no such message queue id\n"));
  VAR_31 = VAR_3;
  goto done2;
 }
 if (VAR_27->u.msg_perm.seq != FUNC_4(VAR_20)) {
  FUNC_2(("wrong sequence number\n"));
  VAR_31 = VAR_3;
  goto done2;
 }

 if ((VAR_31 = FUNC_12(VAR_29, VAR_27))) {
  FUNC_2(("requester can't see prison\n"));
  goto done2;
 }

 if ((VAR_31 = FUNC_6(VAR_19, &VAR_27->u.msg_perm, VAR_7))) {
  FUNC_2(("requester doesn't have read access\n"));
  goto done2;
 }







 VAR_28 = ((void*)0);
 while (VAR_28 == ((void*)0)) {
  if (VAR_23 == 0) {
   VAR_28 = VAR_27->u.__msg_first;
   if (VAR_28 != ((void*)0)) {
    if (VAR_22 < VAR_28->msg_ts &&
        (VAR_24 & VAR_8) == 0) {
     FUNC_2(("first message on the queue "
         "is too big (want %zu, got %d)\n",
         VAR_22, VAR_28->msg_ts));
     VAR_31 = VAR_0;
     goto done2;
    }






    if (VAR_27->u.__msg_first ==
        VAR_27->u.__msg_last) {
     VAR_27->u.__msg_first = ((void*)0);
     VAR_27->u.__msg_last = ((void*)0);
    } else {
     VAR_27->u.__msg_first = VAR_28->msg_next;
     if (VAR_27->u.__msg_first == ((void*)0))
      FUNC_15("msg_first/last screwed up #1");
    }
   }
  } else {
   struct msg *VAR_33;
   struct msg **VAR_34;

   VAR_33 = ((void*)0);
   VAR_34 = &(VAR_27->u.__msg_first);
   while ((VAR_28 = *VAR_34) != ((void*)0)) {
    if (VAR_23 == VAR_28->msg_type ||
        VAR_28->msg_type <= -VAR_23) {
     FUNC_2(("found message type %ld, "
         "requested %ld\n",
         VAR_28->msg_type, VAR_23));
     if (VAR_22 < VAR_28->msg_ts &&
         (VAR_24 & VAR_8) == 0) {
      FUNC_2(("requested message "
          "on the queue is too big "
          "(want %zu, got %hu)\n",
          VAR_22, VAR_28->msg_ts));
      VAR_31 = VAR_0;
      goto done2;
     }






     *VAR_34 = VAR_28->msg_next;
     if (VAR_28 == VAR_27->u.__msg_last) {
      if (VAR_33 == ((void*)0)) {
       if (VAR_34 !=
           &VAR_27->u.__msg_first)
        FUNC_15("__msg_first/last screwed up #2");
       VAR_27->u.__msg_first =
           ((void*)0);
       VAR_27->u.__msg_last =
           ((void*)0);
      } else {
       if (VAR_34 ==
           &VAR_27->u.__msg_first)
        FUNC_15("__msg_first/last screwed up #3");
       VAR_27->u.__msg_last =
           VAR_33;
      }
     }
     break;
    }
    VAR_33 = VAR_28;
    VAR_34 = &(VAR_28->msg_next);
   }
  }







  if (VAR_28 != ((void*)0))
   break;





  if ((VAR_24 & VAR_6) != 0) {
   FUNC_2(("no appropriate message found (msgtyp=%ld)\n",
       VAR_23));

   VAR_31 = VAR_4;
   goto done2;
  }





  FUNC_2(("msgrcv:  goodnight\n"));
  VAR_31 = FUNC_11(VAR_27, &VAR_16, (VAR_10 - 4) | VAR_9,
      "msgrcv", 0);
  FUNC_2(("msgrcv:  good morning (error=%d)\n", VAR_31));

  if (VAR_31 != 0) {
   FUNC_2(("msgrcv:  interrupted system call\n"));
   VAR_31 = VAR_2;
   goto done2;
  }





  if (VAR_27->u.msg_qbytes == 0 ||
      VAR_27->u.msg_perm.seq != FUNC_4(VAR_20)) {
   FUNC_2(("msqid deleted\n"));
   VAR_31 = VAR_1;
   goto done2;
  }
 }







 VAR_27->u.msg_cbytes -= VAR_28->msg_ts;
 VAR_27->u.msg_qnum--;
 VAR_27->u.msg_lrpid = VAR_19->td_proc->p_pid;
 VAR_27->u.msg_rtime = VAR_18;

 FUNC_16(VAR_27->cred, VAR_11, 1);
 FUNC_16(VAR_27->cred, VAR_12, VAR_28->msg_ts);







 FUNC_2(("found a message, msgsz=%zu, msg_ts=%hu\n", VAR_22,
     VAR_28->msg_ts));
 if (VAR_22 > VAR_28->msg_ts)
  VAR_22 = VAR_28->msg_ts;
 *VAR_25 = VAR_28->msg_type;





 VAR_32 = VAR_28->msg_spot;
 for (VAR_26 = 0; VAR_26 < VAR_22; VAR_26 += VAR_13.msgssz) {
  size_t VAR_35;

  if (VAR_22 - VAR_26 > VAR_13.msgssz)
   VAR_35 = VAR_13.msgssz;
  else
   VAR_35 = VAR_22 - VAR_26;
  if (VAR_32 <= -1)
   FUNC_15("next too low #3");
  if (VAR_32 >= VAR_13.msgseg)
   FUNC_15("next out of range #3");
  FUNC_14(&VAR_16);
  VAR_31 = FUNC_5(&VAR_15[VAR_32 * VAR_13.msgssz], VAR_21, VAR_35);
  FUNC_13(&VAR_16);
  if (VAR_31 != 0) {
   FUNC_2(("error (%d) copying out message segment\n",
       VAR_31));
   FUNC_10(VAR_28);
   FUNC_17(VAR_27);
   goto done2;
  }
  VAR_21 = (char *)VAR_21 + VAR_35;
  VAR_32 = VAR_14[VAR_32].next;
 }





 FUNC_10(VAR_28);
 FUNC_17(VAR_27);
 VAR_19->td_retval[0] = VAR_22;
done2:
 FUNC_14(&VAR_16);
 return (VAR_31);
}
