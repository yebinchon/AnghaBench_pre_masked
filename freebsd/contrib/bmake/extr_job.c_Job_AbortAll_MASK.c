
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pid_t ;
typedef int WAIT_T ;
struct TYPE_4__ {scalar_t__ job_state; int pid; } ;
typedef TYPE_1__ Job ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;

void
FUNC_2(void)
{
    Job *VAR_9;
    WAIT_T VAR_10;

    VAR_5 = VAR_0;

    if (VAR_6) {
 for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9++) {
     if (VAR_9->job_state != VAR_1)
  continue;




     FUNC_0(VAR_9->pid, VAR_2);
     FUNC_0(VAR_9->pid, VAR_3);
 }
    }




    while (FUNC_1((pid_t) -1, &VAR_10, VAR_4) > 0)
 continue;
}
