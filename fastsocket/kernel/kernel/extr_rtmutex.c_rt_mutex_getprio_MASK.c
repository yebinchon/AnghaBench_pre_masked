
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int normal_prio; } ;
struct TYPE_3__ {int prio; } ;
struct TYPE_4__ {TYPE_1__ pi_list_entry; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct task_struct*) ;
 TYPE_2__* FUNC_3 (struct task_struct*) ;

int FUNC_4(struct task_struct *VAR_0)
{
 if (FUNC_0(!FUNC_2(VAR_0)))
  return VAR_0->normal_prio;

 return FUNC_1(FUNC_3(VAR_0)->pi_list_entry.prio,
     VAR_0->normal_prio);
}
