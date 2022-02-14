
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ucred {scalar_t__ cr_prison; int cr_gid; int cr_uid; } ;
struct thread {int * td_retval; int td_proc; struct ucred* td_ucred; } ;
struct TYPE_9__ {int key; int mode; int seq; int gid; int cgid; int uid; int cuid; } ;
struct TYPE_7__ {scalar_t__ msg_qbytes; TYPE_3__ msg_perm; int msg_ctime; scalar_t__ msg_rtime; scalar_t__ msg_stime; scalar_t__ msg_lrpid; scalar_t__ msg_lspid; scalar_t__ msg_qnum; scalar_t__ msg_cbytes; int * __msg_last; int * __msg_first; } ;
struct msqid_kernel {TYPE_1__ u; TYPE_4__* cred; } ;
struct msgget_args {int key; int msgflg; } ;
struct TYPE_10__ {scalar_t__ cr_prison; } ;
struct TYPE_8__ {int msgmni; scalar_t__ msgmnb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,TYPE_3__) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 TYPE_4__* FUNC_6 (struct ucred*) ;
 int FUNC_7 (struct thread*,TYPE_3__*,int) ;
 int FUNC_8 (struct ucred*,struct msqid_kernel*) ;
 int FUNC_9 (struct ucred*,struct msqid_kernel*) ;
 int * FUNC_10 (struct ucred*) ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 struct msqid_kernel* VAR_11 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;

int
FUNC_14(struct thread *VAR_14, struct msgget_args *VAR_15)
{
 int VAR_16, VAR_17 = 0;
 int VAR_18 = VAR_15->key;
 int VAR_19 = VAR_15->msgflg;
 struct ucred *VAR_20 = VAR_14->td_ucred;
 struct msqid_kernel *VAR_21 = ((void*)0);

 FUNC_2(("msgget(0x%x, 0%o)\n", VAR_18, VAR_19));

 if (FUNC_10(VAR_20) == ((void*)0))
  return (VAR_3);

 FUNC_11(&VAR_10);
 if (VAR_18 != VAR_6) {
  for (VAR_16 = 0; VAR_16 < VAR_9.msgmni; VAR_16++) {
   VAR_21 = &VAR_11[VAR_16];
   if (VAR_21->u.msg_qbytes != 0 &&
       VAR_21->cred != ((void*)0) &&
       VAR_21->cred->cr_prison == VAR_20->cr_prison &&
       VAR_21->u.msg_perm.key == VAR_18)
    break;
  }
  if (VAR_16 < VAR_9.msgmni) {
   FUNC_2(("found public key\n"));
   if ((VAR_19 & VAR_4) && (VAR_19 & VAR_5)) {
    FUNC_2(("not exclusive\n"));
    VAR_17 = VAR_0;
    goto done2;
   }
   FUNC_0(FUNC_3(VAR_16,
       VAR_21->u.msg_perm));
   if ((VAR_17 = FUNC_7(VAR_14, &VAR_21->u.msg_perm,
       VAR_19 & 0700))) {
    FUNC_2(("requester doesn't have 0%o access\n",
        VAR_19 & 0700));
    goto done2;
   }





   goto found;
  }
 }

 FUNC_2(("need to allocate the msqid_ds\n"));
 if (VAR_18 == VAR_6 || (VAR_19 & VAR_4)) {
  for (VAR_16 = 0; VAR_16 < VAR_9.msgmni; VAR_16++) {






   VAR_21 = &VAR_11[VAR_16];
   if (VAR_21->u.msg_qbytes == 0 &&
       (VAR_21->u.msg_perm.mode & VAR_7) == 0)
    break;
  }
  if (VAR_16 == VAR_9.msgmni) {
   FUNC_2(("no more msqid_ds's available\n"));
   VAR_17 = VAR_2;
   goto done2;
  }
  FUNC_2(("msqid %d is available\n", VAR_16));
  VAR_21->u.msg_perm.key = VAR_18;
  VAR_21->u.msg_perm.cuid = VAR_20->cr_uid;
  VAR_21->u.msg_perm.uid = VAR_20->cr_uid;
  VAR_21->u.msg_perm.cgid = VAR_20->cr_gid;
  VAR_21->u.msg_perm.gid = VAR_20->cr_gid;
  VAR_21->u.msg_perm.mode = (VAR_19 & 0777);
  VAR_21->cred = FUNC_6(VAR_20);

  VAR_21->u.msg_perm.seq = (VAR_21->u.msg_perm.seq + 1) & 0x7fff;
  VAR_21->u.__msg_first = ((void*)0);
  VAR_21->u.__msg_last = ((void*)0);
  VAR_21->u.msg_cbytes = 0;
  VAR_21->u.msg_qnum = 0;
  VAR_21->u.msg_qbytes = VAR_9.msgmnb;
  VAR_21->u.msg_lspid = 0;
  VAR_21->u.msg_lrpid = 0;
  VAR_21->u.msg_stime = 0;
  VAR_21->u.msg_rtime = 0;
  VAR_21->u.msg_ctime = VAR_13;



  FUNC_1(&VAR_21->u.msg_perm);
 } else {
  FUNC_2(("didn't find it and wasn't asked to create it\n"));
  VAR_17 = VAR_1;
  goto done2;
 }

found:

 VAR_14->td_retval[0] = FUNC_3(VAR_16, VAR_21->u.msg_perm);
done2:
 FUNC_12(&VAR_10);
 return (VAR_17);
}
