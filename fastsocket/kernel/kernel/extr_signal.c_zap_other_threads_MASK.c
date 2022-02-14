
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int signal; } ;
struct task_struct {TYPE_2__ pending; scalar_t__ exit_state; TYPE_1__* signal; } ;
struct TYPE_3__ {scalar_t__ group_stop_count; } ;


 int VAR_0 ;
 struct task_struct* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct task_struct*,int) ;

void FUNC_3(struct task_struct *VAR_1)
{
 struct task_struct *VAR_2;

 VAR_1->signal->group_stop_count = 0;

 for (VAR_2 = FUNC_0(VAR_1); VAR_2 != VAR_1; VAR_2 = FUNC_0(VAR_2)) {



  if (VAR_2->exit_state)
   continue;


  FUNC_1(&VAR_2->pending.signal, VAR_0);
  FUNC_2(VAR_2, 1);
 }
}
