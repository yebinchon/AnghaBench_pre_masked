
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct msgsnd_args {int msgflg; int msgsz; scalar_t__ msgp; int msqid; } ;
typedef int mtype ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,long*,int) ;
 int FUNC_2 (struct thread*,int ,char const*,int ,int ,long) ;

int
FUNC_3(struct thread *VAR_0, struct msgsnd_args *VAR_1)
{
 int VAR_2;
 long VAR_3;

 FUNC_0(("call to msgsnd(%d, %p, %zu, %d)\n", VAR_1->msqid, VAR_1->msgp,
     VAR_1->msgsz, VAR_1->msgflg));

 if ((VAR_2 = FUNC_1(VAR_1->msgp, &VAR_3, sizeof(VAR_3))) != 0) {
  FUNC_0(("error %d copying the message type\n", VAR_2));
  return (VAR_2);
 }
 return (FUNC_2(VAR_0, VAR_1->msqid,
     (const char *)VAR_1->msgp + sizeof(VAR_3),
     VAR_1->msgsz, VAR_1->msgflg, VAR_3));
}
