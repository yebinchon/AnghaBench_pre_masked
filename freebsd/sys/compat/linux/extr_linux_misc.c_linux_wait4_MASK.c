
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_wait4_args {int options; int * rusage; int status; int pid; } ;
struct __wrusage {int wru_self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct thread*,int ,int ,int,struct __wrusage*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int,int*) ;

int
FUNC_3(struct thread *VAR_8, struct linux_wait4_args *VAR_9)
{
 int VAR_10, VAR_11;
 struct __wrusage VAR_12, *VAR_13;

 if (VAR_9->options & ~(VAR_3 | VAR_2 |
     VAR_1 | VAR_6 | VAR_7 | VAR_5))
  return (VAR_0);

 VAR_11 = VAR_4;
 FUNC_2(VAR_9->options, &VAR_11);

 if (VAR_9->rusage != ((void*)0))
  VAR_13 = &VAR_12;
 else
  VAR_13 = ((void*)0);
 VAR_10 = FUNC_0(VAR_8, VAR_9->pid, VAR_9->status, VAR_11, VAR_13);
 if (VAR_10 != 0)
  return (VAR_10);
 if (VAR_9->rusage != ((void*)0))
  VAR_10 = FUNC_1(&VAR_12.wru_self, VAR_9->rusage);
 return (VAR_10);
}
