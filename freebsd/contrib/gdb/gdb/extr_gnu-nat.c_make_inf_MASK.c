
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* reply; void* handler; } ;
struct TYPE_4__ {int kind; } ;
struct TYPE_6__ {TYPE_2__ exc; scalar_t__ thread; TYPE_1__ status; } ;
struct inf {int nomsg; int pause_sc; int want_signals; int want_exceptions; scalar_t__ default_thread_detach_sc; scalar_t__ default_thread_pause_sc; scalar_t__ default_thread_run_sc; scalar_t__ detach_sc; scalar_t__ pending_execs; scalar_t__ no_wait; scalar_t__ traced; scalar_t__ stopped; scalar_t__ running; void* event_port; scalar_t__ signal_thread; scalar_t__ step_thread; TYPE_3__ wait; scalar_t__ pid; scalar_t__ threads_up_to_date; scalar_t__ threads; scalar_t__ task; } ;


 void* VAR_0 ;
 int VAR_1 ;
 struct inf* FUNC_0 (int) ;

struct inf *
FUNC_1 (void)
{
  struct inf *VAR_2 = FUNC_0 (sizeof (struct inf));

  VAR_2->task = 0;
  VAR_2->threads = 0;
  VAR_2->threads_up_to_date = 0;
  VAR_2->pid = 0;
  VAR_2->wait.status.kind = VAR_1;
  VAR_2->wait.thread = 0;
  VAR_2->wait.exc.handler = VAR_0;
  VAR_2->wait.exc.reply = VAR_0;
  VAR_2->step_thread = 0;
  VAR_2->signal_thread = 0;
  VAR_2->event_port = VAR_0;
  VAR_2->running = 0;
  VAR_2->stopped = 0;
  VAR_2->nomsg = 1;
  VAR_2->traced = 0;
  VAR_2->no_wait = 0;
  VAR_2->pending_execs = 0;
  VAR_2->pause_sc = 1;
  VAR_2->detach_sc = 0;
  VAR_2->default_thread_run_sc = 0;
  VAR_2->default_thread_pause_sc = 0;
  VAR_2->default_thread_detach_sc = 0;
  VAR_2->want_signals = 1;
  VAR_2->want_exceptions = 1;

  return VAR_2;
}
