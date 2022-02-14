
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t timevar_id_t ;
struct timevar_time_def {int dummy; } ;
struct timevar_stack_def {struct timevar_stack_def* next; TYPE_1__* timevar; } ;
struct TYPE_2__ {int elapsed; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct timevar_time_def*) ;
 struct timevar_stack_def* VAR_0 ;
 struct timevar_time_def VAR_1 ;
 int FUNC_2 (int *,struct timevar_time_def*,struct timevar_time_def*) ;
 TYPE_1__* VAR_2 ;
 struct timevar_stack_def* VAR_3 ;

void
FUNC_3 (timevar_id_t VAR_4)
{
  struct timevar_time_def VAR_5;
  struct timevar_stack_def *VAR_6 = VAR_0;

  FUNC_0 (&VAR_2[VAR_4] == VAR_0->timevar);


  FUNC_1 (&VAR_5);


  FUNC_2 (&VAR_6->timevar->elapsed, &VAR_1, &VAR_5);



  VAR_1 = VAR_5;


  VAR_0 = VAR_0->next;



  VAR_6->next = VAR_3;
  VAR_3 = VAR_6;
}
