
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {int nomsg; scalar_t__ event_port; scalar_t__ pending_execs; scalar_t__ no_wait; scalar_t__ traced; scalar_t__ stopped; scalar_t__ running; scalar_t__ pid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inf*) ;
 int FUNC_1 (struct inf*,char*) ;
 int FUNC_2 (struct inf*,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 () ;

void
FUNC_5 (struct inf *VAR_1)
{
  FUNC_1 (VAR_1, "cleanup");

  FUNC_0 (VAR_1);

  FUNC_2 (VAR_1, -1);
  VAR_1->pid = 0;
  VAR_1->running = 0;
  VAR_1->stopped = 0;
  VAR_1->nomsg = 1;
  VAR_1->traced = 0;
  VAR_1->no_wait = 0;
  VAR_1->pending_execs = 0;

  if (VAR_1->event_port)
    {
      FUNC_3 (FUNC_4 (), VAR_1->event_port);
      VAR_1->event_port = VAR_0;
    }
}
