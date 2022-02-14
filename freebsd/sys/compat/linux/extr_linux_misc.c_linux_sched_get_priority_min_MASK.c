
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sched_get_priority_min_args {int policy; } ;
struct linux_sched_get_priority_min_args {int policy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct thread*,struct sched_get_priority_min_args*) ;

int
FUNC_1(struct thread *VAR_4,
    struct linux_sched_get_priority_min_args *VAR_5)
{
 struct sched_get_priority_min_args VAR_6;

 switch (VAR_5->policy) {
 case 129:
  VAR_6.policy = VAR_2;
  break;
 case 130:
  VAR_6.policy = VAR_1;
  break;
 case 128:
  VAR_6.policy = VAR_3;
  break;
 default:
  return (VAR_0);
 }
 return (FUNC_0(VAR_4, &VAR_6));
}
