
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pid_t ;
typedef int WAIT_T ;
struct TYPE_6__ {int pid; int job_suspended; int exit_status; int job_state; TYPE_1__* node; } ;
struct TYPE_5__ {char* name; } ;
typedef TYPE_2__ Job ;
typedef scalar_t__ Boolean ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ) ;


 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (char*,char*,...) ;
 int VAR_7 ;

void
FUNC_10(pid_t VAR_8, WAIT_T VAR_9, Boolean VAR_10)
{
    Job *VAR_11;




    if (VAR_4 == 0)
 return;

    VAR_11 = FUNC_2(VAR_8, VAR_2, VAR_10);
    if (VAR_11 == ((void*)0)) {
 if (VAR_10) {
     if (!VAR_5)
  FUNC_1("Child (%d) status %x not in table?", VAR_8, VAR_9);
 }
 return;
    }
    if (FUNC_5(VAR_9)) {
 if (FUNC_0(VAR_0)) {
     (void)FUNC_8(VAR_3, "Process %d (%s) stopped.\n",
     VAR_11->pid, VAR_11->node->name);
 }
 if (!VAR_6) {
     switch (FUNC_6(VAR_9)) {
     case 128:
  (void)FUNC_9("*** [%s] Suspended\n", VAR_11->node->name);
  break;
     case 129:
  (void)FUNC_9("*** [%s] Stopped\n", VAR_11->node->name);
  break;
     default:
  (void)FUNC_9("*** [%s] Stopped -- signal %d\n",
        VAR_11->node->name, FUNC_6(VAR_9));
     }
     VAR_11->job_suspended = 1;
 }
 (void)FUNC_7(VAR_7);
 return;
    }

    VAR_11->job_state = VAR_1;
    VAR_11->exit_status = FUNC_4(VAR_9);

    FUNC_3(VAR_11, VAR_9);
}
