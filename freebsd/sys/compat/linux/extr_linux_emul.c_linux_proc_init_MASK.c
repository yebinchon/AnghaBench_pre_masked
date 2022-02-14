
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; struct linux_emuldata* td_emuldata; int td_tid; } ;
struct proc {int p_pid; struct linux_pemuldata* p_emuldata; } ;
struct linux_pemuldata {struct epoll_emuldata* epoll; scalar_t__ persona; int pem_sx; } ;
struct linux_emuldata {int * child_set_tid; int * child_clear_tid; int * robust_futexes; scalar_t__ flags; int em_tid; } ;
struct epoll_emuldata {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct linux_emuldata* FUNC_2 (struct thread*) ;
 int FUNC_3 (struct epoll_emuldata*,int ) ;
 void* FUNC_4 (int,int ,int) ;
 struct linux_pemuldata* FUNC_5 (struct proc*) ;
 int VAR_6 ;
 int FUNC_6 (int *,char*) ;

void
FUNC_7(struct thread *VAR_7, struct thread *VAR_8, int VAR_9)
{
 struct linux_emuldata *VAR_10;
 struct linux_pemuldata *VAR_11;
 struct epoll_emuldata *VAR_12;
 struct proc *VAR_13;

 if (VAR_8 != ((void*)0)) {
  VAR_13 = VAR_8->td_proc;


  VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_3, VAR_4 | VAR_5);
  if (VAR_9 & VAR_0) {
   FUNC_1(VAR_6, "thread newtd(%d)",
       VAR_8->td_tid);

   VAR_10->em_tid = VAR_8->td_tid;
  } else {
   FUNC_1(VAR_6, "fork newtd(%d)", VAR_13->p_pid);

   VAR_10->em_tid = VAR_13->p_pid;

   VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_2, VAR_4 | VAR_5);
   FUNC_6(&VAR_11->pem_sx, "lpemlk");
   VAR_13->p_emuldata = VAR_11;
  }
  VAR_8->td_emuldata = VAR_10;
 } else {
  VAR_13 = VAR_7->td_proc;


  FUNC_1(VAR_6, "exec newtd(%d)", VAR_13->p_pid);


  VAR_10 = FUNC_2(VAR_7);
  FUNC_0(VAR_10 != ((void*)0), ("proc_init: emuldata not found in exec case.\n"));

  VAR_10->em_tid = VAR_13->p_pid;
  VAR_10->flags = 0;
  VAR_10->robust_futexes = ((void*)0);
  VAR_10->child_clear_tid = ((void*)0);
  VAR_10->child_set_tid = ((void*)0);


  VAR_11 = FUNC_5(VAR_13);
  FUNC_0(VAR_11 != ((void*)0), ("proc_exit: proc emuldata not found.\n"));
  VAR_11->persona = 0;
  if (VAR_11->epoll != ((void*)0)) {
   VAR_12 = VAR_11->epoll;
   VAR_11->epoll = ((void*)0);
   FUNC_3(VAR_12, VAR_1);
  }
 }

}
