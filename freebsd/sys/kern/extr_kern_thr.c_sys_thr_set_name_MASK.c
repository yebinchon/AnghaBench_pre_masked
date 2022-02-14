
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_name; struct proc* td_proc; } ;
struct thr_set_name_args {scalar_t__ id; int * name; } ;
struct proc {int p_pid; } ;
typedef int name ;
typedef int lwpid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct proc*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*,int,int *) ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 (int ,char*) ;
 struct thread* FUNC_8 (int ,int ) ;

int
FUNC_9(struct thread *VAR_4, struct thr_set_name_args *VAR_5)
{
 struct proc *VAR_6;
 char VAR_7[VAR_2 + 1];
 struct thread *VAR_8;
 int VAR_9;

 VAR_9 = 0;
 VAR_7[0] = '\0';
 if (VAR_5->name != ((void*)0)) {
  VAR_9 = FUNC_5(VAR_5->name, VAR_7, sizeof(VAR_7), ((void*)0));
  if (VAR_9 == VAR_0) {
   VAR_9 = FUNC_4(VAR_5->name, VAR_7, sizeof(VAR_7) - 1);
   VAR_7[sizeof(VAR_7) - 1] = '\0';
  }
  if (VAR_9)
   return (VAR_9);
 }
 VAR_6 = VAR_4->td_proc;
 VAR_8 = FUNC_8((lwpid_t)VAR_5->id, VAR_6->p_pid);
 if (VAR_8 == ((void*)0))
  return (VAR_1);
 FUNC_7(VAR_8->td_name, VAR_7);







 FUNC_3(VAR_6);
 return (VAR_9);
}
