
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_rt_sigsuspend_args {int sigsetsize; int newset; } ;
typedef int sigset_t ;
typedef int l_sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;

int
FUNC_4(struct thread *VAR_2, struct linux_rt_sigsuspend_args *VAR_3)
{
 l_sigset_t VAR_4;
 sigset_t VAR_5;
 int VAR_6;

 FUNC_0(VAR_1, "%p, %ld",
     VAR_3->newset, VAR_3->sigsetsize);

 if (VAR_3->sigsetsize != sizeof(l_sigset_t))
  return (VAR_0);

 VAR_6 = FUNC_1(VAR_3->newset, &VAR_4, sizeof(l_sigset_t));
 if (VAR_6)
  return (VAR_6);

 FUNC_3(&VAR_4, &VAR_5);
 return (FUNC_2(VAR_2, VAR_5));
}
