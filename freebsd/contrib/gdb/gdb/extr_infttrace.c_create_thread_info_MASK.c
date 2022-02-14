
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pid; int tid; int am_pseudo; struct TYPE_5__* next_pseudo; struct TYPE_5__* next; int stepping_mode; scalar_t__ terminated; scalar_t__ seen; scalar_t__ handled; int last_stop_state; scalar_t__ have_state; scalar_t__ have_start; scalar_t__ have_signal; } ;
typedef TYPE_1__ thread_info ;
typedef int lwpid_t ;
struct TYPE_6__ {scalar_t__ count; TYPE_1__* head_pseudo; TYPE_1__* head; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static thread_info *
FUNC_3 (int VAR_5, lwpid_t VAR_6)
{
  thread_info *VAR_7;
  thread_info *VAR_8;
  int VAR_9;

  VAR_7 = FUNC_2 (sizeof (thread_info));
  VAR_7->pid = VAR_5;
  VAR_7->tid = VAR_6;
  VAR_7->have_signal = 0;
  VAR_7->have_start = 0;
  VAR_7->have_state = 0;
  FUNC_0 (&VAR_7->last_stop_state);
  VAR_7->am_pseudo = 0;
  VAR_7->handled = 0;
  VAR_7->seen = 0;
  VAR_7->terminated = 0;
  VAR_7->next = ((void*)0);
  VAR_7->next_pseudo = ((void*)0);
  VAR_7->stepping_mode = VAR_0;

  if (0 == VAR_4.count)
    {




      VAR_3 = VAR_2;
    }
  else
    {




    }



  VAR_4.count++;



  VAR_7->next = VAR_4.head;
  VAR_4.head = VAR_7;






  VAR_8 = VAR_4.head;
  VAR_9 = 0;
  while (VAR_8)
    {
      if (VAR_8->pid == VAR_7->pid)
 VAR_9++;
      VAR_8 = VAR_8->next;
    }




  if (VAR_9 == 1)
    {
      VAR_7->am_pseudo = 1;
      VAR_7->next_pseudo = VAR_4.head_pseudo;
      VAR_4.head_pseudo = VAR_7;
    }

  return VAR_7;
}
