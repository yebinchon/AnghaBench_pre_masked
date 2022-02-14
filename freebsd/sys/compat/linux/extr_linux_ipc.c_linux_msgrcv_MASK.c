
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct linux_msgrcv_args {scalar_t__ msgsz; int msgflg; int msgtyp; int msqid; int msgp; } ;
typedef int lmtype ;
typedef scalar_t__ l_long ;
struct TYPE_2__ {scalar_t__ msgmax; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,void*,int) ;
 int FUNC_2 (struct thread*,int ,char*,scalar_t__,int ,int ,long*) ;
 TYPE_1__ VAR_1 ;

int
FUNC_3(struct thread *VAR_2, struct linux_msgrcv_args *VAR_3)
{
 void *VAR_4;
 long VAR_5;
 l_long VAR_6;
 int VAR_7;

 if ((l_long)VAR_3->msgsz < 0 || VAR_3->msgsz > (l_long)VAR_1.msgmax)
  return (VAR_0);
 VAR_4 = FUNC_0(VAR_3->msgp);
 if ((VAR_7 = FUNC_2(VAR_2, VAR_3->msqid,
     (char *)VAR_4 + sizeof(VAR_6), VAR_3->msgsz,
     VAR_3->msgtyp, VAR_3->msgflg, &VAR_5)) != 0)
  return (VAR_7);
 VAR_6 = (l_long)VAR_5;
 return (FUNC_1(&VAR_6, VAR_4, sizeof(VAR_6)));
}
