
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t timevar_id_t ;
struct timevar_time_def {int dummy; } ;
struct timevar_def {int start_time; int elapsed; int standalone; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct timevar_time_def*) ;
 int FUNC_2 (int *,int *,struct timevar_time_def*) ;
 int VAR_0 ;
 struct timevar_def* VAR_1 ;

void
FUNC_3 (timevar_id_t VAR_2)
{
  struct timevar_def *VAR_3 = &VAR_1[VAR_2];
  struct timevar_time_def VAR_4;

  if (!VAR_0)
    return;


  FUNC_0 (VAR_3->standalone);

  FUNC_1 (&VAR_4);
  FUNC_2 (&VAR_3->elapsed, &VAR_3->start_time, &VAR_4);
}
