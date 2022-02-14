
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
typedef scalar_t__ task_t ;
struct proc {scalar_t__ exc_port; scalar_t__ saved_exc_port; int aborted; } ;
struct TYPE_8__ {int sig; } ;
struct TYPE_9__ {TYPE_3__ value; int kind; } ;
struct TYPE_7__ {scalar_t__ handler; int exception; int code; int subcode; scalar_t__ reply; } ;
struct TYPE_10__ {int suppress; TYPE_4__ status; TYPE_2__ exc; struct proc* thread; } ;
struct inf {TYPE_5__ wait; TYPE_1__* task; } ;
typedef scalar_t__ mach_port_t ;
typedef int error_t ;
struct TYPE_6__ {scalar_t__ saved_exc_port; scalar_t__ exc_port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct inf*,char*,scalar_t__,...) ;
 struct proc* FUNC_2 (struct inf*,scalar_t__) ;
 int FUNC_3 (struct inf*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 struct inf* VAR_6 ;

error_t
FUNC_8 (mach_port_t VAR_7, mach_port_t VAR_8,
      thread_t VAR_9, task_t VAR_10,
      int VAR_11, int VAR_12, int VAR_13)
{
  struct inf *VAR_14 = VAR_6;
  struct proc *VAR_15 = FUNC_2 (VAR_14, VAR_9);

  FUNC_1 (VAR_6,
      "thread = %d, task = %d, exc = %d, code = %d, subcode = %d",
      VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);

  if (!VAR_15)

    {
      FUNC_3 (VAR_14);
      VAR_15 = FUNC_2 (VAR_14, VAR_9);
      if (!VAR_15)

 return 0;
    }

  FUNC_4 (FUNC_6 (), VAR_9);
  FUNC_4 (FUNC_6 (), VAR_10);

  if (!VAR_15->aborted)


    {

      VAR_14->wait.thread = VAR_15;

      VAR_14->wait.status.kind = VAR_4;

      if (VAR_11 == VAR_0)

 {
   VAR_14->wait.status.value.sig = VAR_3;
   FUNC_4 (FUNC_6 (), VAR_8);
 }
      else

 {
   if (VAR_15->exc_port == VAR_7)
     {
       FUNC_1 (VAR_6, "Handler is thread exception port <%d>",
    VAR_15->saved_exc_port);
       VAR_14->wait.exc.handler = VAR_15->saved_exc_port;
     }
   else
     {
       FUNC_1 (VAR_6, "Handler is task exception port <%d>",
    VAR_14->task->saved_exc_port);
       VAR_14->wait.exc.handler = VAR_14->task->saved_exc_port;
       FUNC_0 (VAR_14->task->exc_port == VAR_7);
     }
   if (VAR_14->wait.exc.handler != VAR_1)

     FUNC_5 (FUNC_6 (),
    VAR_14->wait.exc.handler, VAR_2,
    1);

   VAR_14->wait.exc.exception = VAR_11;
   VAR_14->wait.exc.code = VAR_12;
   VAR_14->wait.exc.subcode = VAR_13;
   VAR_14->wait.exc.reply = VAR_8;



   VAR_14->wait.status.value.sig =
     FUNC_7 (VAR_5 + VAR_11);
 }
    }
  else

    {
      VAR_14->wait.suppress = 1;
      FUNC_4 (FUNC_6 (), VAR_8);
    }

  return 0;
}
