
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int tid; scalar_t__ state_changed; scalar_t__ state_valid; scalar_t__ dead; scalar_t__ aborted; int run_sc; int resume_sc; int detach_sc; int pause_sc; scalar_t__ cur_sc; scalar_t__ sc; scalar_t__ exc_port; scalar_t__ saved_exc_port; scalar_t__ next; struct inf* inf; scalar_t__ port; } ;
struct inf {scalar_t__ event_port; scalar_t__ want_exceptions; int default_thread_detach_sc; int default_thread_pause_sc; int default_thread_run_sc; } ;
typedef scalar_t__ mach_port_t ;
typedef scalar_t__ error_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ,int,scalar_t__,int ,scalar_t__*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct proc*,char*,...) ;
 scalar_t__ FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,scalar_t__,int ) ;
 struct proc* FUNC_8 (int) ;

struct proc *
FUNC_9 (struct inf *VAR_3, mach_port_t VAR_4, int VAR_5)
{
  error_t VAR_6;
  mach_port_t VAR_7 = VAR_2;
  struct proc *VAR_8 = FUNC_8 (sizeof (struct proc));

  VAR_8->port = VAR_4;
  VAR_8->tid = VAR_5;
  VAR_8->inf = VAR_3;
  VAR_8->next = 0;
  VAR_8->saved_exc_port = VAR_2;
  VAR_8->exc_port = VAR_2;

  VAR_8->sc = 0;
  VAR_8->cur_sc = 0;



  VAR_8->run_sc = VAR_3->default_thread_run_sc;
  VAR_8->pause_sc = VAR_3->default_thread_pause_sc;
  VAR_8->detach_sc = VAR_3->default_thread_detach_sc;
  VAR_8->resume_sc = VAR_8->run_sc;

  VAR_8->aborted = 0;
  VAR_8->dead = 0;
  VAR_8->state_valid = 0;
  VAR_8->state_changed = 0;

  FUNC_3 (VAR_8, "is new");


  VAR_6 =
    FUNC_1 (FUNC_2 (), VAR_4,
        VAR_1, 1,
        VAR_3->event_port,
        VAR_0,
        &VAR_7);
  if (VAR_6)
    FUNC_7 ("Couldn't request notification for port %d: %s",
      VAR_4, FUNC_6 (VAR_6));
  else
    {
      FUNC_3 (VAR_8, "notifications to: %d", VAR_3->event_port);
      if (VAR_7 != VAR_2)
 FUNC_0 (FUNC_2 (), VAR_7);
    }

  if (VAR_3->want_exceptions)
    {
      if (FUNC_4 (VAR_8))

 FUNC_5 (VAR_8, VAR_3->event_port);
      else


 FUNC_5 (VAR_8, VAR_2);
    }

  return VAR_8;
}
