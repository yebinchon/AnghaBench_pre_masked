
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct proc {int tid; } ;
struct TYPE_6__ {int sig; } ;
struct TYPE_7__ {TYPE_2__ value; } ;
struct TYPE_5__ {scalar_t__ reply; } ;
struct TYPE_8__ {TYPE_3__ status; int thread; TYPE_1__ exc; } ;
struct inf {struct proc* step_thread; int pid; int event_port; TYPE_4__ wait; scalar_t__ nomsg; scalar_t__ stopped; } ;
typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 struct inf* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct inf*) ;
 int FUNC_3 (struct inf*,char*,...) ;
 int FUNC_4 (struct inf*) ;
 int FUNC_5 (struct inf*,struct proc*) ;
 int FUNC_6 (struct inf*,struct proc*,int) ;
 int FUNC_7 (struct inf*,int) ;
 struct proc* FUNC_8 (struct inf*,scalar_t__) ;
 int FUNC_9 (struct inf*) ;
 int FUNC_10 (struct inf*) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,scalar_t__,...) ;

__attribute__((used)) static void
FUNC_16 (ptid_t VAR_4, int VAR_5, enum target_signal VAR_6)
{
  struct proc *VAR_7 = 0;
  struct inf *VAR_8 = VAR_2;

  FUNC_3 (VAR_8, "tid = %d, step = %d, sig = %d", FUNC_0 (VAR_4), VAR_5, VAR_6);

  FUNC_10 (VAR_8);

  if (VAR_6 != VAR_1 || VAR_8->stopped)
    {
      if (VAR_6 == VAR_1 && VAR_8->nomsg)
 FUNC_2 (VAR_8);
      else
 FUNC_7 (VAR_8, VAR_6);
    }
  else if (VAR_8->wait.exc.reply != VAR_0)


    {
      FUNC_12 (VAR_8->wait.thread, 1);
      FUNC_15 ("Aborting %s with unforwarded exception %s.",
        FUNC_13 (VAR_8->wait.thread),
        FUNC_14 (VAR_8->wait.status.value.sig));
    }

  if (FUNC_11 (VAR_8->event_port))


    return;

  FUNC_9 (VAR_8);

  if (FUNC_0 (VAR_4) < 0)

    {
      FUNC_3 (VAR_8, "running all threads; tid = %d", FUNC_0 (VAR_3));
      VAR_4 = VAR_3;
      FUNC_6 (VAR_8, 0, 1);
    }
  else

    {
      struct proc *VAR_9 = FUNC_8 (VAR_8, FUNC_0 (VAR_4));
      if (!VAR_9)
 FUNC_1 ("Can't run single thread id %d: no such thread!");
      FUNC_3 (VAR_8, "running one thread: %d/%d", VAR_8->pid, VAR_9->tid);
      FUNC_6 (VAR_8, VAR_9, 0);
    }

  if (VAR_5)
    {
      VAR_7 = FUNC_8 (VAR_8, FUNC_0 (VAR_4));
      if (!VAR_7)
 FUNC_15 ("Can't step thread id %d: no such thread.", FUNC_0 (VAR_4));
      else
 FUNC_3 (VAR_8, "stepping thread: %d/%d", VAR_8->pid, VAR_7->tid);
    }
  if (VAR_7 != VAR_8->step_thread)
    FUNC_5 (VAR_8, VAR_7);

  FUNC_3 (VAR_8, "here we go...");
  FUNC_4 (VAR_8);
}
