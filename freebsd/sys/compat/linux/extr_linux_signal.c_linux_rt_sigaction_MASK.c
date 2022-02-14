
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_rt_sigaction_args {int sigsetsize; int * oact; int * act; int sig; } ;
typedef int l_sigset_t ;
typedef int l_sigaction_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct thread*,int ,int *,int *) ;

int
FUNC_3(struct thread *VAR_1, struct linux_rt_sigaction_args *VAR_2)
{
 l_sigaction_t VAR_3, VAR_4;
 int VAR_5;

 if (VAR_2->sigsetsize != sizeof(l_sigset_t))
  return (VAR_0);

 if (VAR_2->act != ((void*)0)) {
  VAR_5 = FUNC_0(VAR_2->act, &VAR_3, sizeof(l_sigaction_t));
  if (VAR_5)
   return (VAR_5);
 }

 VAR_5 = FUNC_2(VAR_1, VAR_2->sig,
       VAR_2->act ? &VAR_3 : ((void*)0),
       VAR_2->oact ? &VAR_4 : ((void*)0));

 if (VAR_2->oact != ((void*)0) && !VAR_5) {
  VAR_5 = FUNC_1(&VAR_4, VAR_2->oact, sizeof(l_sigaction_t));
 }

 return (VAR_5);
}
