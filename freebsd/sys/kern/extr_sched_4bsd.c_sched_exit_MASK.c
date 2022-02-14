
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_priority; } ;
struct proc {int dummy; } ;


 int FUNC_0 (struct proc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,char*,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (int ,struct thread*) ;
 int FUNC_4 (struct thread*) ;

void
FUNC_5(struct proc *VAR_2, struct thread *VAR_3)
{

 FUNC_1(VAR_0, "thread", FUNC_4(VAR_3), "proc exit",
     "prio:%d", VAR_3->td_priority);

 FUNC_2(VAR_2, VAR_1);
 FUNC_3(FUNC_0(VAR_2), VAR_3);
}
