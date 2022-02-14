
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_tid; struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct linux_emuldata {int* child_set_tid; int em_tid; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ,int*,int ,int) ;
 int FUNC_3 (int *,int*,int) ;
 struct linux_emuldata* FUNC_4 (struct thread*) ;
 int VAR_0 ;

void
FUNC_5(struct thread *VAR_1)
{
 struct linux_emuldata *VAR_2;
 struct proc *VAR_3;
 int VAR_4 = 0;
 int *VAR_5;

 VAR_3 = VAR_1->td_proc;

 VAR_2 = FUNC_4(VAR_1);
 FUNC_0(VAR_2 != ((void*)0), ("linux_schedtail: thread emuldata not found.\n"));
 VAR_5 = VAR_2->child_set_tid;

 if (VAR_5 != ((void*)0)) {
  VAR_4 = FUNC_3(&VAR_2->em_tid, VAR_5,
      sizeof(VAR_2->em_tid));
  FUNC_2(VAR_0, "thread(%d) %p stored %d error %d",
      VAR_1->td_tid, VAR_5, VAR_2->em_tid, VAR_4);
 } else
  FUNC_1(VAR_0, "thread(%d)", VAR_2->em_tid);
}
