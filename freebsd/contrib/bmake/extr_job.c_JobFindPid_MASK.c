
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int job_state; int pid; } ;
typedef TYPE_1__ Job ;
typedef scalar_t__ Boolean ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static Job *
FUNC_2(int VAR_3, int VAR_4, Boolean VAR_5)
{
    Job *VAR_6;

    for (VAR_6 = VAR_1; VAR_6 < VAR_2; VAR_6++) {
 if ((VAR_6->job_state == VAR_4) && VAR_6->pid == VAR_3)
     return VAR_6;
    }
    if (FUNC_0(VAR_0) && VAR_5)
 FUNC_1("no pid");
    return ((void*)0);
}
