
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; TYPE_2__* mm; } ;
struct mem_cgroup {int dummy; } ;
typedef int nodemask_t ;
struct TYPE_5__ {long nr_ptes; int oom_disable_count; } ;
struct TYPE_4__ {scalar_t__ oom_score_adj; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct task_struct* FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 long FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct task_struct*,int ) ;
 scalar_t__ FUNC_5 (struct task_struct*,struct mem_cgroup*,int const*) ;
 int VAR_1 ;
 int FUNC_6 (struct task_struct*) ;

unsigned int FUNC_7(struct task_struct *VAR_2, struct mem_cgroup *VAR_3,
        const nodemask_t *VAR_4, unsigned long VAR_5)
{
 long VAR_6;

 if (FUNC_5(VAR_2, VAR_3, VAR_4))
  return 0;

 VAR_2 = FUNC_1(VAR_2);
 if (!VAR_2)
  return 0;






 if (FUNC_0(&VAR_2->mm->oom_disable_count)) {
  FUNC_6(VAR_2);
  return 0;
 }





 if (!VAR_5)
  VAR_5 = 1;





 VAR_6 = FUNC_3(VAR_2->mm) + VAR_2->mm->nr_ptes;
 VAR_6 += FUNC_2(VAR_2->mm, VAR_1);

 VAR_6 *= 1000;
 VAR_6 /= VAR_5;
 FUNC_6(VAR_2);





 if (FUNC_4(VAR_2, VAR_0))
  VAR_6 -= 30;






 VAR_6 += VAR_2->signal->oom_score_adj;






 if (VAR_6 <= 0)
  return 1;
 return (VAR_6 < 1000) ? VAR_6 : 1000;
}
