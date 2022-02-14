
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_entry {int lwp; int thread; int known_tasks_index; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 struct task_entry* FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (char*,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10 (char *VAR_8, int VAR_9)
{
  int VAR_10;
  struct task_entry *VAR_11;

  if (!VAR_8)
    FUNC_1 ("Please specify a task ID.  Use the \"info tasks\" command to\n"
    "see the IDs of currently known tasks.");

  VAR_10 = FUNC_0 (VAR_8);
  VAR_11 = FUNC_6 (VAR_10);

  if (VAR_11 == ((void*)0))
    FUNC_1 ("Task ID %d not known.  Use the \"info tasks\" command to\n"
    "see the IDs of currently known tasks.", VAR_10);

  if (VAR_2 == -1)
    {




      VAR_2 = FUNC_5 ();
    }

  VAR_1 = VAR_10;
  VAR_3 = VAR_11->known_tasks_index;
  VAR_4 = VAR_11->thread;
  VAR_0 = VAR_11->lwp;
  if (FUNC_9 (VAR_11->thread, VAR_11->lwp) == 0)
    {



      FUNC_8 ("[Switching to task %d]\n", VAR_10);
      FUNC_7 (VAR_5,
    FUNC_4 (VAR_5), 1);
    }
  else
    FUNC_8 ("Unable to switch to task %d\n", VAR_10);
}
