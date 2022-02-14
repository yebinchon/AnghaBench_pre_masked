
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct thread {struct proc* td_proc; } ;
struct rlimit {scalar_t__ rlim_cur; scalar_t__ rlim_max; } ;
struct proc {int dummy; } ;
struct linux_rlimit64 {scalar_t__ rlim_cur; scalar_t__ rlim_max; } ;
struct linux_prlimit64_args {size_t resource; scalar_t__ pid; int * new; int * old; } ;
typedef int nrlim ;
typedef int lrlim ;


 int VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *,struct rlimit*,int) ;
 int FUNC_5 (struct linux_rlimit64*,int *,int) ;
 int FUNC_6 (struct thread*,struct proc*,int,struct rlimit*) ;
 int FUNC_7 (struct proc*,int,struct rlimit*) ;
 int* VAR_8 ;
 int FUNC_8 (scalar_t__,int,struct proc**) ;

int
FUNC_9(struct thread *VAR_9, struct linux_prlimit64_args *VAR_10)
{
 struct rlimit VAR_11, VAR_12;
 struct linux_rlimit64 VAR_13;
 struct proc *VAR_14;
 u_int VAR_15;
 int VAR_16;
 int VAR_17;

 if (VAR_10->resource >= VAR_2)
  return (VAR_0);

 VAR_15 = VAR_8[VAR_10->resource];
 if (VAR_15 == -1)
  return (VAR_0);

 if (VAR_10->new != ((void*)0)) {





  VAR_17 = FUNC_4(VAR_10->new, &VAR_12, sizeof(VAR_12));
  if (VAR_17 != 0)
   return (VAR_17);
 }

 VAR_16 = VAR_5 | VAR_6;
 if (VAR_10->new != ((void*)0))
  VAR_16 |= VAR_3;
 else
  VAR_16 |= VAR_4;
 if (VAR_10->pid == 0) {
  VAR_14 = VAR_9->td_proc;
  FUNC_0(VAR_14);
 } else {
  VAR_17 = FUNC_8(VAR_10->pid, VAR_16, &VAR_14);
  if (VAR_17 != 0)
   return (VAR_17);
 }
 if (VAR_10->old != ((void*)0)) {
  FUNC_2(VAR_14);
  FUNC_7(VAR_14, VAR_15, &VAR_11);
  FUNC_3(VAR_14);
  if (VAR_11.rlim_cur == VAR_7)
   VAR_13.rlim_cur = VAR_1;
  else
   VAR_13.rlim_cur = VAR_11.rlim_cur;
  if (VAR_11.rlim_max == VAR_7)
   VAR_13.rlim_max = VAR_1;
  else
   VAR_13.rlim_max = VAR_11.rlim_max;
  VAR_17 = FUNC_5(&VAR_13, VAR_10->old, sizeof(VAR_13));
  if (VAR_17 != 0)
   goto out;
 }

 if (VAR_10->new != ((void*)0))
  VAR_17 = FUNC_6(VAR_9, VAR_14, VAR_15, &VAR_12);

 out:
 FUNC_1(VAR_14);
 return (VAR_17);
}
