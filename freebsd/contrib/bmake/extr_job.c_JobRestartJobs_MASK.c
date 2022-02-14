
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ job_state; int pid; int exit_status; scalar_t__ job_suspended; TYPE_1__* node; } ;
struct TYPE_6__ {char* name; } ;
typedef TYPE_2__ Job ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 TYPE_2__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*,char*) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_6(void)
{
    Job *VAR_9;

    for (VAR_9 = VAR_5; VAR_9 < VAR_6; VAR_9++) {
 if (VAR_9->job_state == VAR_2 &&
  (VAR_7 || VAR_9->job_suspended)) {
     if (FUNC_0(VAR_0)) {
  (void)FUNC_4(VAR_4, "Restarting stopped job pid %d.\n",
   VAR_9->pid);
     }
     if (VAR_9->job_suspended) {
      (void)FUNC_5("*** [%s] Continued\n", VAR_9->node->name);
      (void)FUNC_3(VAR_8);
     }
     VAR_9->job_suspended = 0;
     if (FUNC_2(VAR_9->pid, VAR_3) != 0 && FUNC_0(VAR_0)) {
  FUNC_4(VAR_4, "Failed to send SIGCONT to %d\n", VAR_9->pid);
     }
 }
 if (VAR_9->job_state == VAR_1)

     FUNC_1(VAR_9, VAR_9->exit_status);
    }
    VAR_7 = 0;
}
