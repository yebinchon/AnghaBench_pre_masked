
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmspace {int dummy; } ;
struct thread {int * td_emuldata; struct proc* td_proc; } ;
struct proc {int * p_emuldata; } ;
struct linux_pemuldata {struct linux_pemuldata* epoll; } ;
struct linux_emuldata {struct linux_emuldata* epoll; } ;
struct image_args {int dummy; } ;
struct epoll_emuldata {struct epoll_emuldata* epoll; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 () ;
 struct linux_pemuldata* FUNC_4 (struct thread*) ;
 int FUNC_5 (struct linux_pemuldata*,int ) ;
 int FUNC_6 (struct thread*,struct image_args*,int *) ;
 struct linux_pemuldata* FUNC_7 (struct proc*) ;
 int FUNC_8 (struct thread*,int,struct vmspace*) ;
 int FUNC_9 (struct thread*,struct vmspace**) ;

int
FUNC_10(struct thread *VAR_5, struct image_args *VAR_6)
{
 struct linux_pemuldata *VAR_7;
 struct epoll_emuldata *VAR_8;
 struct vmspace *VAR_9;
 struct linux_emuldata *VAR_10;
 struct proc *VAR_11;
 int VAR_12;

 VAR_11 = VAR_5->td_proc;

 VAR_12 = FUNC_9(VAR_5, &VAR_9);
 if (VAR_12 != 0)
  return (VAR_12);

 VAR_12 = FUNC_6(VAR_5, VAR_6, ((void*)0));
 FUNC_8(VAR_5, VAR_12, VAR_9);
 if (VAR_12 != VAR_0)
  return (VAR_12);





 if (FUNC_3() != VAR_4) {
  FUNC_1(VAR_11);
  VAR_10 = FUNC_4(VAR_5);
  FUNC_0(VAR_10 != ((void*)0), ("proc_exec: thread emuldata not found.\n"));
  VAR_5->td_emuldata = ((void*)0);

  VAR_7 = FUNC_7(VAR_11);
  FUNC_0(VAR_7 != ((void*)0), ("proc_exec: proc pemuldata not found.\n"));
  VAR_11->p_emuldata = ((void*)0);
  FUNC_2(VAR_11);

  if (VAR_7->epoll != ((void*)0)) {
   VAR_8 = VAR_7->epoll;
   VAR_7->epoll = ((void*)0);
   FUNC_5(VAR_8, VAR_1);
  }

  FUNC_5(VAR_10, VAR_3);
  FUNC_5(VAR_7, VAR_2);
 }
 return (VAR_0);
}
