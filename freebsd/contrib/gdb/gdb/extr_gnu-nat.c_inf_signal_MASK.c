
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct exc_state {int subcode; int code; int exception; int reply; int handler; } ;
struct TYPE_5__ {int sig; } ;
struct TYPE_6__ {scalar_t__ kind; TYPE_1__ value; } ;
struct inf_wait {TYPE_3__* thread; struct exc_state exc; TYPE_2__ status; } ;
struct inf {scalar_t__ stopped; int event_port; TYPE_4__* task; struct inf_wait wait; } ;
typedef scalar_t__ error_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_8__ {int port; } ;
struct TYPE_7__ {int port; int aborted; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct inf*,int ) ;
 scalar_t__ FUNC_1 (struct inf*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct inf*,char*,int ,...) ;
 int FUNC_5 (int ,int,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int ,...) ;

void
FUNC_10 (struct inf *VAR_8, enum target_signal VAR_9)
{
  error_t VAR_10 = 0;
  int VAR_11 = FUNC_8 (VAR_9);



  if (VAR_11 >= VAR_5)



    {
      struct inf_wait *VAR_12 = &VAR_8->wait;
      if (VAR_12->status.kind == VAR_4
   && VAR_12->status.value.sig == VAR_9
   && VAR_12->thread && !VAR_12->thread->aborted)





 {
   struct exc_state *VAR_13 = &VAR_12->exc;
   FUNC_4 (VAR_8, "passing through exception:"
       " task = %d, thread = %d, exc = %d"
       ", code = %d, subcode = %d",
       VAR_12->thread->port, VAR_8->task->port,
       VAR_13->exception, VAR_13->code, VAR_13->subcode);
   VAR_10 =
     FUNC_3 (VAR_13->handler,
         VAR_13->reply, VAR_2,
         VAR_12->thread->port, VAR_8->task->port,
         VAR_13->exception, VAR_13->code, VAR_13->subcode);
 }
      else
 FUNC_2 ("Can't forward spontaneous exception (%s).", FUNC_0 (VAR_9));
    }
  else

  if (VAR_8->stopped)


    {
      FUNC_4 (VAR_8, "sending %s to stopped process", FUNC_0 (VAR_9));
      VAR_10 =
 FUNC_0 (VAR_8,
    FUNC_6 (VAR_6,
       VAR_8->event_port,
            VAR_1,
       VAR_11, 0,
       VAR_7));
      if (!VAR_10)




 VAR_8->stopped = 0;
    }
  else





    {
      FUNC_4 (VAR_8, "sending %s to unstopped process"
   " (so resuming signal thread)", FUNC_0 (VAR_9));
      VAR_10 =
 FUNC_1 (VAR_8,
    FUNC_5 (VAR_6, VAR_11,
             0, VAR_7));
    }

  if (VAR_10 == VAR_0)

    FUNC_9 ("Can't deliver signal %s: No signal thread.", FUNC_0 (VAR_9));
  else if (VAR_10)
    FUNC_9 ("Delivering signal %s: %s", FUNC_0 (VAR_9), FUNC_7 (VAR_10));


}
