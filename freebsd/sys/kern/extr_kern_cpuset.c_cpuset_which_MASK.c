
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_ucred; int td_cpuset; struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct prison {int pr_mtx; struct cpuset* pr_cpuset; } ;
struct cpuset {int dummy; } ;
typedef int id_t ;
typedef int cpuwhich_t ;
struct TYPE_2__ {int cr_prison; } ;
 int VAR_0 ;
 int VAR_1 ;
 struct thread* FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_2 ;
 struct cpuset* FUNC_3 (int,struct thread*) ;
 int FUNC_4 (struct cpuset*) ;
 struct cpuset* FUNC_5 (int ) ;
 struct proc* VAR_3 ;
 struct thread* VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct thread*,struct proc*) ;
 struct proc* FUNC_8 (int) ;
 struct prison* FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct thread* FUNC_12 (int,int) ;
 int FUNC_13 (struct thread*) ;
 int FUNC_14 (struct thread*) ;

int
FUNC_15(cpuwhich_t VAR_5, id_t VAR_6, struct proc **VAR_7, struct thread **VAR_8,
    struct cpuset **VAR_9)
{
 struct cpuset *VAR_10;
 struct thread *VAR_11;
 struct proc *VAR_12;
 int VAR_13;

 *VAR_7 = VAR_12 = ((void*)0);
 *VAR_8 = VAR_11 = ((void*)0);
 *VAR_9 = VAR_10 = ((void*)0);
 switch (VAR_5) {
 case 129:
  if (VAR_6 == -1) {
   FUNC_1(VAR_3);
   VAR_12 = VAR_3;
   break;
  }
  if ((VAR_12 = FUNC_8(VAR_6)) == ((void*)0))
   return (VAR_1);
  break;
 case 128:
  if (VAR_6 == -1) {
   FUNC_1(VAR_3);
   VAR_12 = VAR_3;
   VAR_11 = VAR_4;
   break;
  }
  VAR_11 = FUNC_12(VAR_6, -1);
  if (VAR_11 == ((void*)0))
   return (VAR_1);
  VAR_12 = VAR_11->td_proc;
  break;
 case 133:
  if (VAR_6 == -1) {
   FUNC_13(VAR_4);
   VAR_10 = FUNC_5(VAR_4->td_cpuset);
   FUNC_14(VAR_4);
  } else
   VAR_10 = FUNC_3(VAR_6, VAR_4);
  if (VAR_10) {
   *VAR_9 = VAR_10;
   return (0);
  }
  return (VAR_1);
 case 130:
 {

  struct prison *VAR_14;

  FUNC_10(&VAR_2);
  VAR_14 = FUNC_9(VAR_4->td_ucred->cr_prison, VAR_6);
  FUNC_11(&VAR_2);
  if (VAR_14 == ((void*)0))
   return (VAR_1);
  FUNC_4(VAR_14->pr_cpuset);
  *VAR_9 = VAR_14->pr_cpuset;
  FUNC_6(&VAR_14->pr_mtx);
  return (0);
 }
 case 131:
 case 132:
  return (0);
 default:
  return (VAR_0);
 }
 VAR_13 = FUNC_7(VAR_4, VAR_12);
 if (VAR_13) {
  FUNC_2(VAR_12);
  return (VAR_13);
 }
 if (VAR_11 == ((void*)0))
  VAR_11 = FUNC_0(VAR_12);
 *VAR_7 = VAR_12;
 *VAR_8 = VAR_11;
 return (0);
}
