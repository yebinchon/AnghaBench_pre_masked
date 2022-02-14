
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {int tq_queue; } ;
typedef TYPE_1__ taskq_t ;
struct TYPE_7__ {int tqent_task; void* tqent_arg; int tqent_func; } ;
typedef TYPE_2__ taskq_ent_t ;
typedef int task_func_t ;


 int FUNC_0 (int *,int,int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;

void
FUNC_2(taskq_t *VAR_2, task_func_t VAR_3, void *VAR_4, u_int VAR_5,
    taskq_ent_t *VAR_6)
{
 int VAR_7;





 VAR_7 = !!(VAR_5 & VAR_0);

 VAR_6->tqent_func = VAR_3;
 VAR_6->tqent_arg = VAR_4;

 FUNC_0(&VAR_6->tqent_task, VAR_7, VAR_1, VAR_6);
 FUNC_1(VAR_2->tq_queue, &VAR_6->tqent_task);
}
