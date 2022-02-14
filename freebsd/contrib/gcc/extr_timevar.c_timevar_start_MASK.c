
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t timevar_id_t ;
struct timevar_def {int used; int standalone; int start_time; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct timevar_def* VAR_1 ;

void
FUNC_2 (timevar_id_t VAR_2)
{
  struct timevar_def *VAR_3 = &VAR_1[VAR_2];

  if (!VAR_0)
    return;


  VAR_3->used = 1;



  FUNC_0 (!VAR_3->standalone);
  VAR_3->standalone = 1;

  FUNC_1 (&VAR_3->start_time);
}
