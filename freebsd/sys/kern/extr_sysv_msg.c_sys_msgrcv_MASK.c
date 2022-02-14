
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct msgrcv_args {scalar_t__ msgp; int msgflg; int msgtyp; int msgsz; int msqid; } ;
typedef int mtype ;


 int FUNC_0 (char*) ;
 int FUNC_1 (long*,scalar_t__,int) ;
 int FUNC_2 (struct thread*,int ,char*,int ,int ,int ,long*) ;

int
FUNC_3(struct thread *VAR_0, struct msgrcv_args *VAR_1)
{
 int VAR_2;
 long VAR_3;

 FUNC_0(("call to msgrcv(%d, %p, %zu, %ld, %d)\n", VAR_1->msqid,
     VAR_1->msgp, VAR_1->msgsz, VAR_1->msgtyp, VAR_1->msgflg));

 if ((VAR_2 = FUNC_2(VAR_0, VAR_1->msqid,
     (char *)VAR_1->msgp + sizeof(VAR_3), VAR_1->msgsz,
     VAR_1->msgtyp, VAR_1->msgflg, &VAR_3)) != 0)
  return (VAR_2);
 if ((VAR_2 = FUNC_1(&VAR_3, VAR_1->msgp, sizeof(VAR_3))) != 0)
  FUNC_0(("error %d copying the message type\n", VAR_2));
 return (VAR_2);
}
