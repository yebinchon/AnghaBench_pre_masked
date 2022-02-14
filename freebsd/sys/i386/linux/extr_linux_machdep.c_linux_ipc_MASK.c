
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct thread {int * td_retval; } ;
struct linux_shmget_args {int shmflg; int size; int key; } ;
struct linux_shmdt_args {void* shmaddr; } ;
struct linux_shmctl_args {void* buf; int cmd; int shmid; } ;
struct linux_shmat_args {int shmflg; void* shmaddr; int shmid; } ;
struct linux_semop_args {int nsops; void* tsops; int semid; } ;
struct linux_semget_args {int semflg; int nsems; int key; } ;
struct l_ipc_kludge {int msgtyp; int msgp; } ;
struct linux_semctl_args {struct l_ipc_kludge arg; int cmd; int semnum; int semid; } ;
struct linux_msgsnd_args {int msgflg; int msgsz; void* msgp; int msqid; } ;
struct linux_msgrcv_args {int msgtyp; void* msgp; int msgflg; int msgsz; int msqid; } ;
struct linux_msgget_args {int msgflg; int key; } ;
struct linux_msgctl_args {void* buf; int cmd; int msqid; } ;
struct linux_ipc_args {int what; int ptr; int arg2; int arg1; int arg3; int arg5; } ;
typedef int l_uintptr_t ;
typedef int addr ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*,struct l_ipc_kludge*,int) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (struct thread*,struct linux_msgctl_args*) ;
 int FUNC_4 (struct thread*,struct linux_msgget_args*) ;
 int FUNC_5 (struct thread*,struct linux_msgrcv_args*) ;
 int FUNC_6 (struct thread*,struct linux_msgsnd_args*) ;
 int FUNC_7 (struct thread*,struct linux_semctl_args*) ;
 int FUNC_8 (struct thread*,struct linux_semget_args*) ;
 int FUNC_9 (struct thread*,struct linux_semop_args*) ;
 int FUNC_10 (struct thread*,struct linux_shmat_args*) ;
 int FUNC_11 (struct thread*,struct linux_shmctl_args*) ;
 int FUNC_12 (struct thread*,struct linux_shmdt_args*) ;
 int FUNC_13 (struct thread*,struct linux_shmget_args*) ;

int
FUNC_14(struct thread *VAR_1, struct linux_ipc_args *VAR_2)
{

 switch (VAR_2->what & 0xFFFF) {
 case 132: {
  struct linux_semop_args VAR_3;

  VAR_3.semid = VAR_2->arg1;
  VAR_3.tsops = FUNC_0(VAR_2->ptr);
  VAR_3.nsops = VAR_2->arg2;
  return (FUNC_9(VAR_1, &VAR_3));
 }
 case 133: {
  struct linux_semget_args VAR_4;

  VAR_4.key = VAR_2->arg1;
  VAR_4.nsems = VAR_2->arg2;
  VAR_4.semflg = VAR_2->arg3;
  return (FUNC_8(VAR_1, &VAR_4));
 }
 case 134: {
  struct linux_semctl_args VAR_5;
  int VAR_6;

  VAR_5.semid = VAR_2->arg1;
  VAR_5.semnum = VAR_2->arg2;
  VAR_5.cmd = VAR_2->arg3;
  VAR_6 = FUNC_1(FUNC_0(VAR_2->ptr), &VAR_5.arg, sizeof(VAR_5.arg));
  if (VAR_6)
   return (VAR_6);
  return (FUNC_7(VAR_1, &VAR_5));
 }
 case 135: {
  struct linux_msgsnd_args VAR_7;

  VAR_7.msqid = VAR_2->arg1;
  VAR_7.msgp = FUNC_0(VAR_2->ptr);
  VAR_7.msgsz = VAR_2->arg2;
  VAR_7.msgflg = VAR_2->arg3;
  return (FUNC_6(VAR_1, &VAR_7));
 }
 case 136: {
  struct linux_msgrcv_args VAR_8;

  VAR_8.msqid = VAR_2->arg1;
  VAR_8.msgsz = VAR_2->arg2;
  VAR_8.msgflg = VAR_2->arg3;
  if ((VAR_2->what >> 16) == 0) {
   struct l_ipc_kludge VAR_9;
   int VAR_10;

   if (VAR_2->ptr == 0)
    return (VAR_0);
   VAR_10 = FUNC_1(FUNC_0(VAR_2->ptr), &VAR_9, sizeof(VAR_9));
   if (VAR_10)
    return (VAR_10);
   VAR_8.msgp = FUNC_0(VAR_9.msgp);
   VAR_8.msgtyp = VAR_9.msgtyp;
  } else {
   VAR_8.msgp = FUNC_0(VAR_2->ptr);
   VAR_8.msgtyp = VAR_2->arg5;
  }
  return (FUNC_5(VAR_1, &VAR_8));
 }
 case 137: {
  struct linux_msgget_args VAR_11;

  VAR_11.key = VAR_2->arg1;
  VAR_11.msgflg = VAR_2->arg2;
  return (FUNC_4(VAR_1, &VAR_11));
 }
 case 138: {
  struct linux_msgctl_args VAR_12;

  VAR_12.msqid = VAR_2->arg1;
  VAR_12.cmd = VAR_2->arg2;
  VAR_12.buf = FUNC_0(VAR_2->ptr);
  return (FUNC_3(VAR_1, &VAR_12));
 }
 case 131: {
  struct linux_shmat_args VAR_13;
  l_uintptr_t VAR_14;
  int VAR_15;

  VAR_13.shmid = VAR_2->arg1;
  VAR_13.shmaddr = FUNC_0(VAR_2->ptr);
  VAR_13.shmflg = VAR_2->arg2;
  VAR_15 = FUNC_10(VAR_1, &VAR_13);
  if (VAR_15 != 0)
   return (VAR_15);
  VAR_14 = VAR_1->td_retval[0];
  VAR_15 = FUNC_2(&VAR_14, FUNC_0(VAR_2->arg3), sizeof(VAR_14));
  VAR_1->td_retval[0] = 0;
  return (VAR_15);
 }
 case 129: {
  struct linux_shmdt_args VAR_16;

  VAR_16.shmaddr = FUNC_0(VAR_2->ptr);
  return (FUNC_12(VAR_1, &VAR_16));
 }
 case 128: {
  struct linux_shmget_args VAR_17;

  VAR_17.key = VAR_2->arg1;
  VAR_17.size = VAR_2->arg2;
  VAR_17.shmflg = VAR_2->arg3;
  return (FUNC_13(VAR_1, &VAR_17));
 }
 case 130: {
  struct linux_shmctl_args VAR_18;

  VAR_18.shmid = VAR_2->arg1;
  VAR_18.cmd = VAR_2->arg2;
  VAR_18.buf = FUNC_0(VAR_2->ptr);
  return (FUNC_11(VAR_1, &VAR_18));
 }
 default:
  break;
 }

 return (VAR_0);
}
