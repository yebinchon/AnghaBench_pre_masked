
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zonelist {int dummy; } ;
struct task_struct {TYPE_1__* mm; } ;
typedef int nodemask_t ;
typedef int gfp_t ;
typedef enum oom_constraint { ____Placeholder_oom_constraint } oom_constraint ;
struct TYPE_2__ {int oom_disable_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct task_struct*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,unsigned long*) ;
 int FUNC_3 (int,int ,int,int const*) ;
 int FUNC_4 (struct zonelist*,int ,int *,unsigned long*) ;
 struct task_struct* VAR_3 ;
 int FUNC_5 (int *,int ,int,int *,int const*) ;
 scalar_t__ FUNC_6 (struct task_struct*) ;
 scalar_t__ FUNC_7 (struct task_struct*,int ,int,unsigned int,unsigned long,int *,int *,char*) ;
 int VAR_4 ;
 int FUNC_8 (struct task_struct*,int *,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 struct task_struct* FUNC_13 (unsigned int*,unsigned long,int *,int const*) ;
 int FUNC_14 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (int ) ;

void FUNC_16(struct zonelist *VAR_7, gfp_t VAR_8,
  int VAR_9, nodemask_t *VAR_10)
{
 const nodemask_t *VAR_11;
 struct task_struct *VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14 = 0;
 unsigned int VAR_15;
 enum oom_constraint VAR_16 = VAR_1;
 int VAR_17 = 0;

 FUNC_2(&VAR_4, 0, &VAR_14);
 if (VAR_14 > 0)

  return;






 if (FUNC_6(VAR_3)) {
  FUNC_14(VAR_2);
  return;
 }





 VAR_16 = FUNC_4(VAR_7, VAR_8, VAR_10,
      &VAR_13);
 VAR_11 = (VAR_16 == VAR_0) ? VAR_10 : ((void*)0);
 FUNC_3(VAR_16, VAR_8, VAR_9, VAR_11);

 FUNC_10(&VAR_6);
 if (VAR_5 &&
     !FUNC_8(VAR_3, ((void*)0), VAR_10) &&
     VAR_3->mm && !FUNC_1(&VAR_3->mm->oom_disable_count)) {





  if (!FUNC_7(VAR_3, VAR_8, VAR_9, 0, VAR_13,
    ((void*)0), VAR_10,
    "Out of memory (oom_kill_allocating_task)"))
   goto out;
 }

retry:
 VAR_12 = FUNC_13(&VAR_15, VAR_13, ((void*)0), VAR_11);
 if (FUNC_0(VAR_12) == -1UL)
  goto out;


 if (!VAR_12) {
  FUNC_5(((void*)0), VAR_8, VAR_9, ((void*)0), VAR_11);
  FUNC_11(&VAR_6);
  FUNC_9("Out of memory and no killable processes...\n");
 }

 if (FUNC_7(VAR_12, VAR_8, VAR_9, VAR_15, VAR_13, ((void*)0),
    VAR_10, "Out of memory"))
  goto retry;
 VAR_17 = 1;
out:
 FUNC_11(&VAR_6);





 if (VAR_17 && !FUNC_15(VAR_2))
  FUNC_12(1);
}
