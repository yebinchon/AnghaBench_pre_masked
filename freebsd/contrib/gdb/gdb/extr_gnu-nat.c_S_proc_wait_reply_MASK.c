
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; } ;
struct TYPE_5__ {int suppress; TYPE_3__ status; } ;
struct inf {scalar_t__ pid; int no_wait; int stopped; TYPE_2__ wait; TYPE_1__* task; } ;
typedef int rusage_t ;
typedef scalar_t__ pid_t ;
typedef int mach_port_t ;
typedef scalar_t__ error_t ;
struct TYPE_4__ {int port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct inf*,char*,...) ;
 int FUNC_1 (struct inf*,int ) ;
 int FUNC_2 (struct inf*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int) ;
 struct inf* VAR_4 ;
 int FUNC_5 (char*,scalar_t__,char*) ;

error_t
FUNC_6 (mach_port_t VAR_5, error_t VAR_6,
     int VAR_7, int VAR_8, rusage_t VAR_9, pid_t VAR_10)
{
  struct inf *VAR_11 = VAR_4;

  FUNC_0 (VAR_11, "err = %s, pid = %d, status = 0x%x, sigcode = %d",
      VAR_6 ? FUNC_3 (VAR_6) : "0", VAR_10, VAR_7, VAR_8);

  if (VAR_6 && VAR_2 && (!VAR_11->task || !VAR_11->task->port))





    FUNC_2 (VAR_11);

  if (--VAR_3 == 0)


    VAR_2 = 0;

  FUNC_0 (VAR_11, "waits pending now: %d", VAR_3);

  if (VAR_6)
    {
      if (VAR_6 != VAR_0)
 {
   FUNC_5 ("Can't wait for pid %d: %s", VAR_11->pid, FUNC_3 (VAR_6));
   VAR_11->no_wait = 1;


   FUNC_1 (VAR_11, 0);
 }
    }
  else if (VAR_10 == VAR_11->pid)
    {
      FUNC_4 (&VAR_11->wait.status, VAR_7);
      if (VAR_11->wait.status.kind == VAR_1)


 {
   FUNC_0 (VAR_11, "process has stopped itself");
   VAR_11->stopped = 1;
 }
    }
  else
    VAR_11->wait.suppress = 1;

  return 0;
}
