
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int weight; int inv_weight; } ;
struct TYPE_4__ {TYPE_1__ load; } ;
struct task_struct {scalar_t__ policy; size_t static_prio; TYPE_2__ se; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;

__attribute__((used)) static void FUNC_1(struct task_struct *VAR_6)
{
 if (FUNC_0(VAR_6)) {
  VAR_6->se.load.weight = VAR_4[0] * 2;
  VAR_6->se.load.inv_weight = VAR_5[0] >> 1;
  return;
 }




 if (VAR_6->policy == VAR_1) {
  VAR_6->se.load.weight = VAR_2;
  VAR_6->se.load.inv_weight = VAR_3;
  return;
 }

 VAR_6->se.load.weight = VAR_4[VAR_6->static_prio - VAR_0];
 VAR_6->se.load.inv_weight = VAR_5[VAR_6->static_prio - VAR_0];
}
