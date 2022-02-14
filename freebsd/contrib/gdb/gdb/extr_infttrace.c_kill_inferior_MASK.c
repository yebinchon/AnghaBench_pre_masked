
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pid; struct TYPE_4__* next; scalar_t__ am_pseudo; } ;
typedef TYPE_1__ thread_info ;
struct TYPE_5__ {int count; TYPE_1__* head; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 () ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__**) ;
 scalar_t__ FUNC_6 (int) ;

void
FUNC_7 (void)
{
  int VAR_4;
  int VAR_5;
  thread_info *VAR_6;
  thread_info **VAR_7;
  int VAR_8, VAR_9;

  if (FUNC_0 (VAR_2) == 0)
    return;
  VAR_7 = (thread_info **) FUNC_6 (VAR_3.count *
           sizeof (thread_info *));
  VAR_8 = 0;

  VAR_6 = VAR_3.head;
  while (VAR_6)
    {

      VAR_7[VAR_8] = VAR_6;
      for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
 {
   if (VAR_6->next == VAR_7[VAR_9])
     {
       FUNC_4 ("Bad data in gdb's thread data; repairing.");
       VAR_6->next = 0;
     }
 }
      VAR_8++;

      if (VAR_6->am_pseudo && (VAR_6->pid != FUNC_0 (VAR_2)))
 {
   FUNC_1 (VAR_1,
         VAR_6->pid,
         VAR_0,
         VAR_0,
         VAR_0);
 }
      VAR_6 = VAR_6->next;
    }

  FUNC_5 (VAR_7);

  FUNC_1 (VAR_1,
        FUNC_0 (VAR_2),
        VAR_0,
        VAR_0,
        VAR_0);
  FUNC_3 ();
  FUNC_2 ();
}
