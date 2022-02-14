
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct semop_args {scalar_t__ semid; int nsops; int sops; } ;
struct linux_semop_args {int nsops; scalar_t__ semid; int tsops; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct thread*,struct semop_args*) ;

int
FUNC_2(struct thread *VAR_1, struct linux_semop_args *VAR_2)
{
 struct semop_args VAR_3;





 if (VAR_2->nsops < 1 || VAR_2->semid < 0)
  return (VAR_0);
 VAR_3.semid = VAR_2->semid;
 VAR_3.sops = FUNC_0(VAR_2->tsops);
 VAR_3.nsops = VAR_2->nsops;
 return (FUNC_1(VAR_1, &VAR_3));
}
