
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inf {int traced; int pid; TYPE_1__* task; } ;
typedef int sigset_t ;
typedef scalar_t__ error_t ;
struct TYPE_2__ {int dead; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct inf*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ,char*) ;

void
FUNC_4 (struct inf *VAR_4, int VAR_5)
{
  if (VAR_5 == VAR_4->traced)
    return;

  if (VAR_4->task && !VAR_4->task->dead)

    {
      sigset_t VAR_6 = VAR_5 ? ~(sigset_t) 0 : 0;
      error_t VAR_7 =
 FUNC_0 (VAR_4, FUNC_1 (VAR_2, VAR_3,
             VAR_1, VAR_6));
      if (VAR_7 == VAR_0)
 {
   if (VAR_5)
     FUNC_3 ("Can't modify tracing state for pid %d: %s",
       VAR_4->pid, "No signal thread");
   VAR_4->traced = VAR_5;
 }
      else if (VAR_7)
 FUNC_3 ("Can't modify tracing state for pid %d: %s",
   VAR_4->pid, FUNC_2 (VAR_7));
      else
 VAR_4->traced = VAR_5;
    }
  else
    VAR_4->traced = VAR_5;
}
