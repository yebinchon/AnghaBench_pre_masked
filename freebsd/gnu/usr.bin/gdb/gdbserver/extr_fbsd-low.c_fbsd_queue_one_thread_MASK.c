
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct process_info {TYPE_1__* resume; struct pending_signals* pending_signals; } ;
struct pending_signals {scalar_t__ signal; struct pending_signals* prev; } ;
struct inferior_list_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ sig; scalar_t__ leave_stopped; } ;


 struct process_info* FUNC_0 (struct thread_info*) ;
 struct pending_signals* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (struct inferior_list_entry *VAR_0)
{
  struct process_info *VAR_1;
  struct thread_info *VAR_2;

  VAR_2 = (struct thread_info *) VAR_0;
  VAR_1 = FUNC_0 (VAR_2);

  if (VAR_1->resume->leave_stopped)
    return;


  if (VAR_1->resume->sig != 0)
    {
      struct pending_signals *VAR_3;
      VAR_3 = FUNC_1 (sizeof (*VAR_3));
      VAR_3->prev = VAR_1->pending_signals;
      VAR_3->signal = VAR_1->resume->sig;
      VAR_1->pending_signals = VAR_3;
    }

  VAR_1->resume = ((void*)0);
}
