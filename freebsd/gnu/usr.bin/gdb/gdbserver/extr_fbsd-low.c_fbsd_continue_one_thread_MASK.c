
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct process_info {TYPE_1__* resume; int head; scalar_t__ stepping; } ;
struct inferior_list_entry {int dummy; } ;
struct TYPE_2__ {int thread; int step; int sig; scalar_t__ leave_stopped; } ;


 int FUNC_0 (int *,int,int ) ;
 struct process_info* FUNC_1 (struct thread_info*) ;

__attribute__((used)) static void
FUNC_2 (struct inferior_list_entry *VAR_0)
{
  struct process_info *VAR_1;
  struct thread_info *VAR_2;
  int VAR_3;

  VAR_2 = (struct thread_info *) VAR_0;
  VAR_1 = FUNC_1 (VAR_2);

  if (VAR_1->resume->leave_stopped)
    return;

  if (VAR_1->resume->thread == -1)
    VAR_3 = VAR_1->stepping || VAR_1->resume->step;
  else
    VAR_3 = VAR_1->resume->step;

  FUNC_0 (&VAR_1->head, VAR_3, VAR_1->resume->sig);

  VAR_1->resume = ((void*)0);
}
