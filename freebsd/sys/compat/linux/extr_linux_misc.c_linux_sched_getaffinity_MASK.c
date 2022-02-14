
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; int td_tid; int td_proc; } ;
struct linux_sched_getaffinity_args {int len; scalar_t__ user_mask_ptr; int pid; } ;
typedef int cpuset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct thread*,int ,int ,int ,int,int *) ;
 struct thread* FUNC_2 (struct thread*,int ,int) ;

int
FUNC_3(struct thread *VAR_4,
    struct linux_sched_getaffinity_args *VAR_5)
{
 int VAR_6;
 struct thread *VAR_7;

 if (VAR_5->len < sizeof(cpuset_t))
  return (VAR_2);

 VAR_7 = FUNC_2(VAR_4, VAR_5->pid, -1);
 if (VAR_7 == ((void*)0))
  return (VAR_3);

 FUNC_0(VAR_7->td_proc);

 VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_1,
     VAR_7->td_tid, sizeof(cpuset_t), (cpuset_t *)VAR_5->user_mask_ptr);
 if (VAR_6 == 0)
  VAR_4->td_retval[0] = sizeof(cpuset_t);

 return (VAR_6);
}
