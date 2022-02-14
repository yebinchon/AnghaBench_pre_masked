
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_sys_futex_args {int* uaddr; int val; scalar_t__ val3; int * uaddr2; int * timeout; int op; } ;
struct linux_emuldata {int* child_clear_tid; int em_tid; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ,int*) ;
 int VAR_0 ;
 struct linux_emuldata* FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*,char*) ;
 int FUNC_5 (struct thread*,struct linux_sys_futex_args*) ;
 int FUNC_6 (struct thread*,struct linux_emuldata*) ;
 int FUNC_7 (int*,int ) ;
 int VAR_1 ;

void
FUNC_8(struct thread *VAR_2)
{
 struct linux_sys_futex_args VAR_3;
 struct linux_emuldata *VAR_4;
 int *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_2);
 FUNC_0(VAR_4 != ((void*)0), ("thread_detach: emuldata not found.\n"));

 FUNC_1(VAR_1, "thread(%d)", VAR_4->em_tid);

 FUNC_6(VAR_2, VAR_4);

 VAR_5 = VAR_4->child_clear_tid;

 if (VAR_5 != ((void*)0)) {

  FUNC_2(VAR_1, "thread(%d) %p",
      VAR_4->em_tid, VAR_5);

  VAR_6 = FUNC_7(VAR_5, 0);
  if (VAR_6 != 0)
   return;

  VAR_3.uaddr = VAR_5;
  VAR_3.op = VAR_0;
  VAR_3.val = 1;
  VAR_3.timeout = ((void*)0);
  VAR_3.uaddr2 = ((void*)0);
  VAR_3.val3 = 0;
  VAR_6 = FUNC_5(VAR_2, &VAR_3);




  if (VAR_6 != 0)
   FUNC_4(VAR_2, "futex stuff in thread_detach failed.");
 }
}
