
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct thread {int* td_retval; TYPE_3__* td_ucred; } ;
struct prison {int dummy; } ;
struct TYPE_11__ {scalar_t__ seq; int mode; int key; int gid; int uid; } ;
struct msqid_ds {scalar_t__ msg_qbytes; TYPE_6__ msg_perm; int msg_ctime; struct msg* __msg_first; } ;
struct msqid_kernel {TYPE_1__* cred; struct msqid_ds u; } ;
struct msg {struct msg* msg_next; } ;
struct TYPE_10__ {int cr_prison; } ;
struct TYPE_9__ {int msgmni; scalar_t__ msgmnb; } ;
struct TYPE_8__ {int cr_prison; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_6 (struct thread*,TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_3__*,struct msg*) ;
 int FUNC_8 (TYPE_3__*,struct msqid_kernel*,int) ;
 struct prison* FUNC_9 (TYPE_3__*) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (struct prison*,struct msqid_kernel*) ;
 int FUNC_11 (struct msqid_kernel*) ;
 struct msqid_kernel* VAR_8 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct thread*,int ) ;
 int VAR_9 ;

int
FUNC_15(struct thread *VAR_10, int VAR_11, int VAR_12, struct msqid_ds *VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 struct msqid_kernel *VAR_17;
 struct prison *VAR_18;

 VAR_18 = FUNC_9(VAR_10->td_ucred);
 if (VAR_18 == ((void*)0))
  return (VAR_1);

 FUNC_0(VAR_12);
 FUNC_1(VAR_11);
 VAR_16 = FUNC_4(VAR_11);

 if (VAR_16 < 0 || VAR_16 >= VAR_6.msgmni) {
  FUNC_3(("msqid (%d) out of range (0<=msqid<%d)\n", VAR_16,
      VAR_6.msgmni));
  return (VAR_0);
 }

 VAR_17 = &VAR_8[VAR_16];

 FUNC_12(&VAR_7);
 if (VAR_17->u.msg_qbytes == 0) {
  FUNC_3(("no such msqid\n"));
  VAR_15 = VAR_0;
  goto done2;
 }
 if (VAR_17->u.msg_perm.seq != FUNC_5(VAR_11)) {
  FUNC_3(("wrong sequence number\n"));
  VAR_15 = VAR_0;
  goto done2;
 }

 VAR_15 = FUNC_10(VAR_18, VAR_17);
 if (VAR_15 != 0) {
  FUNC_3(("requester can't see prison\n"));
  goto done2;
 }







 VAR_15 = 0;
 VAR_14 = 0;

 switch (VAR_12) {

 case 130:
 {



  if ((VAR_15 = FUNC_6(VAR_10, &VAR_17->u.msg_perm, VAR_2)))
   goto done2;
  FUNC_11(VAR_17);
 }

  break;

 case 129:
  FUNC_2(&VAR_13->msg_perm);
  if ((VAR_15 = FUNC_6(VAR_10, &VAR_17->u.msg_perm, VAR_2)))
   goto done2;
  if (VAR_13->msg_qbytes > VAR_17->u.msg_qbytes) {
   VAR_15 = FUNC_14(VAR_10, VAR_5);
   if (VAR_15)
    goto done2;
  }
  if (VAR_13->msg_qbytes > VAR_6.msgmnb) {
   FUNC_3(("can't increase msg_qbytes beyond %d"
       "(truncating)\n", VAR_6.msgmnb));
   VAR_13->msg_qbytes = VAR_6.msgmnb;
  }
  if (VAR_13->msg_qbytes == 0) {
   FUNC_3(("can't reduce msg_qbytes to 0\n"));
   VAR_15 = VAR_0;
   goto done2;
  }
  VAR_17->u.msg_perm.uid = VAR_13->msg_perm.uid;
  VAR_17->u.msg_perm.gid = VAR_13->msg_perm.gid;
  VAR_17->u.msg_perm.mode = (VAR_17->u.msg_perm.mode & ~0777) |
      (VAR_13->msg_perm.mode & 0777);
  VAR_17->u.msg_qbytes = VAR_13->msg_qbytes;
  VAR_17->u.msg_ctime = VAR_9;
  break;

 case 128:
  if ((VAR_15 = FUNC_6(VAR_10, &VAR_17->u.msg_perm, VAR_4))) {
   FUNC_3(("requester doesn't have read access\n"));
   goto done2;
  }
  *VAR_13 = VAR_17->u;
  if (VAR_10->td_ucred->cr_prison != VAR_17->cred->cr_prison)
   VAR_13->msg_perm.key = VAR_3;
  break;

 default:
  FUNC_3(("invalid command %d\n", VAR_12));
  VAR_15 = VAR_0;
  goto done2;
 }

 if (VAR_15 == 0)
  VAR_10->td_retval[0] = VAR_14;
done2:
 FUNC_13(&VAR_7);
 return (VAR_15);
}
