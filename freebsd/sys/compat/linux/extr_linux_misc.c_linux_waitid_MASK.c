
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct thread {scalar_t__* td_retval; struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct linux_waitid_args {int idtype; int * info; int * rusage; int id; int options; } ;
struct __wrusage {int wru_children; } ;
struct TYPE_4__ {int si_signo; } ;
typedef TYPE_1__ siginfo_t ;
typedef int lsi ;
typedef int l_siginfo_t ;
typedef int idtype_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct thread*,int ,int ,int*,int,struct __wrusage*,TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (TYPE_1__*,int *,int) ;

int
FUNC_7(struct thread *VAR_9, struct linux_waitid_args *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 struct __wrusage VAR_14;
 siginfo_t VAR_15;
 l_siginfo_t VAR_16;
 idtype_t VAR_17;
 struct proc *VAR_18;
 int VAR_19;

 VAR_12 = 0;
 FUNC_5(VAR_10->options, &VAR_12);

 if (VAR_12 & ~(VAR_6 | VAR_7 | VAR_5 | VAR_8 | VAR_4))
  return (VAR_0);
 if (!(VAR_12 & (VAR_5 | VAR_8 | VAR_4)))
  return (VAR_0);

 switch (VAR_10->idtype) {
 case 130:
  VAR_17 = VAR_1;
  break;
 case 128:
  if (VAR_10->id <= 0)
   return (VAR_0);
  VAR_17 = VAR_3;
  break;
 case 129:
  if (VAR_10->id <= 0)
   return (VAR_0);
  VAR_17 = VAR_2;
  break;
 default:
  return (VAR_0);
 }

 VAR_19 = FUNC_3(VAR_9, VAR_17, VAR_10->id, &VAR_11, VAR_12,
     &VAR_14, &VAR_15);
 if (VAR_19 != 0)
  return (VAR_19);
 if (VAR_10->rusage != ((void*)0)) {
  VAR_19 = FUNC_4(&VAR_14.wru_children,
      VAR_10->rusage);
  if (VAR_19 != 0)
   return (VAR_19);
 }
 if (VAR_10->info != ((void*)0)) {
  VAR_18 = VAR_9->td_proc;
  FUNC_1(&VAR_16, sizeof(VAR_16));
  if (VAR_9->td_retval[0] != 0) {
   VAR_13 = FUNC_0(VAR_15.si_signo);
   FUNC_6(&VAR_15, &VAR_16, VAR_13);
  }
  VAR_19 = FUNC_2(&VAR_16, VAR_10->info, sizeof(VAR_16));
 }
 VAR_9->td_retval[0] = 0;

 return (VAR_19);
}
