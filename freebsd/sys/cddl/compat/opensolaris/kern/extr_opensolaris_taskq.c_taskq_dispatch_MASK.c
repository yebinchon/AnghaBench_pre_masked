
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_t ;
typedef int taskqid_t ;
struct TYPE_6__ {int tq_queue; } ;
typedef TYPE_1__ taskq_t ;
struct TYPE_7__ {int tqent_task; void* tqent_arg; int tqent_func; } ;
typedef TYPE_2__ taskq_ent_t ;
typedef int task_func_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 TYPE_2__* FUNC_2 (int ,int) ;

taskqid_t
FUNC_3(taskq_t *VAR_7, task_func_t VAR_8, void *VAR_9, uint_t VAR_10)
{
 taskq_ent_t *VAR_11;
 int VAR_12, VAR_13;

 if ((VAR_10 & (VAR_4 | VAR_3)) == VAR_4)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_0;




 VAR_13 = !!(VAR_10 & VAR_2);

 VAR_11 = FUNC_2(VAR_6, VAR_12);
 if (VAR_11 == ((void*)0))
  return (0);

 VAR_11->tqent_func = VAR_8;
 VAR_11->tqent_arg = VAR_9;

 FUNC_0(&VAR_11->tqent_task, VAR_13, VAR_5, VAR_11);
 FUNC_1(VAR_7->tq_queue, &VAR_11->tqent_task);

 return ((taskqid_t)(void *)VAR_11);
}
