
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_tid; int td_proc; } ;
struct linux_sched_setaffinity_args {int len; scalar_t__ user_mask_ptr; int pid; } ;
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
    struct linux_sched_setaffinity_args *VAR_5)
{
 struct thread *VAR_6;

 if (VAR_5->len < sizeof(cpuset_t))
  return (VAR_2);

 VAR_6 = FUNC_2(VAR_4, VAR_5->pid, -1);
 if (VAR_6 == ((void*)0))
  return (VAR_3);

 FUNC_0(VAR_6->td_proc);

 return (FUNC_1(VAR_4, VAR_0, VAR_1,
     VAR_6->td_tid, sizeof(cpuset_t), (cpuset_t *) VAR_5->user_mask_ptr));
}
