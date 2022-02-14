
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int* td_retval; TYPE_1__* td_proc; } ;
struct sigwait_args {int sig; int set; } ;
typedef int sigset_t ;
typedef int set ;
struct TYPE_5__ {int ksi_signo; } ;
typedef TYPE_2__ ksiginfo_t ;
struct TYPE_4__ {scalar_t__ p_osrel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct thread*,int ,TYPE_2__*,int *) ;

int
FUNC_3(struct thread *VAR_3, struct sigwait_args *VAR_4)
{
 ksiginfo_t VAR_5;
 sigset_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4->set, &VAR_6, sizeof(VAR_6));
 if (VAR_7) {
  VAR_3->td_retval[0] = VAR_7;
  return (0);
 }

 VAR_7 = FUNC_2(VAR_3, VAR_6, &VAR_5, ((void*)0));
 if (VAR_7) {
  if (VAR_7 == VAR_0 && VAR_3->td_proc->p_osrel < VAR_2)
   VAR_7 = VAR_1;
  if (VAR_7 == VAR_1)
   return (VAR_7);
  VAR_3->td_retval[0] = VAR_7;
  return (0);
 }

 VAR_7 = FUNC_1(&VAR_5.ksi_signo, VAR_4->sig, sizeof(VAR_5.ksi_signo));
 VAR_3->td_retval[0] = VAR_7;
 return (0);
}
