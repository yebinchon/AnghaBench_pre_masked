
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int job_state; int flags; int pid; } ;
typedef TYPE_1__ Job ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_3)
{
    Job *VAR_4;

    FUNC_0(VAR_0, "job table @ %s\n", VAR_3);
    for (VAR_4 = VAR_1; VAR_4 < VAR_2; VAR_4++) {
 FUNC_0(VAR_0, "job %d, status %d, flags %d, pid %d\n",
     (int)(VAR_4 - VAR_1), VAR_4->job_state, VAR_4->flags, VAR_4->pid);
    }
}
