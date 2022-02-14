
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_9__ {int se_process; int se_flags; int se_started; struct TYPE_9__* se_prev; struct TYPE_9__* se_next; } ;
typedef TYPE_1__ session_t ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(pid_t VAR_4)
{
 session_t *VAR_5, *VAR_6, *VAR_7;

 if (! VAR_3)
  return;

 if (! (VAR_5 = FUNC_2(VAR_4)))
  return;

 FUNC_1(VAR_5);
 VAR_5->se_process = 0;

 if (VAR_5->se_flags & VAR_0 ||
     FUNC_4(VAR_5)) {
  if ((VAR_6 = VAR_5->se_prev) != ((void*)0))
   VAR_6->se_next = VAR_5->se_next;
  else
   VAR_3 = VAR_5->se_next;
  if ((VAR_7 = VAR_5->se_next) != ((void*)0))
   VAR_7->se_prev = VAR_5->se_prev;
  FUNC_3(VAR_5);
  return;
 }

 if ((VAR_4 = FUNC_5(VAR_5)) == -1) {

  VAR_2 = VAR_1;
  return;
 }

 VAR_5->se_process = VAR_4;
 VAR_5->se_started = FUNC_6((time_t *) 0);
 FUNC_0(VAR_5);
}
