
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct process_info {int status_pending_p; int status_pending; int stop_expected; int tid; scalar_t__ stopped; } ;
struct inferior_list_entry {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 struct thread_info* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct thread_info*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7 (struct inferior_list_entry *VAR_5)
{
  struct process_info *VAR_6 = (struct process_info *) VAR_5;
  struct thread_info *VAR_7, *VAR_8;
  int VAR_9, VAR_10;

  if (VAR_6->stopped)
    return;

  VAR_7 = VAR_2;
  VAR_10 = ((struct inferior_list_entry *) VAR_7)->id;
  VAR_8 = (struct thread_info *) FUNC_4 (&VAR_1,
          VAR_6->tid);
  VAR_9 = FUNC_3 (VAR_8);




  if (FUNC_0 (VAR_9)
      && FUNC_1 (VAR_9) != VAR_0)
    {
      if (VAR_3)
 FUNC_5 (VAR_4, "Stopped with non-sigstop signal\n");
      VAR_6->status_pending_p = 1;
      VAR_6->status_pending = VAR_9;
      VAR_6->stop_expected = 1;
    }

  if (FUNC_2 (VAR_10))
    VAR_2 = VAR_7;
  else
    {
      if (VAR_3)
 FUNC_5 (VAR_4, "Previously current thread died.\n");


      FUNC_6 (0);
    }
}
