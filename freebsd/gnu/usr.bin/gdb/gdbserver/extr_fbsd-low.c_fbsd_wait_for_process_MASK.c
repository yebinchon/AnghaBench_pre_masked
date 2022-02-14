
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct process_info {int lwpid; int stopped; int tid; scalar_t__ pending_is_breakpoint; } ;
struct TYPE_2__ {int * get_pc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct thread_info* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int*,int ) ;

__attribute__((used)) static void
FUNC_8 (struct process_info **VAR_9, int *VAR_10)
{
  int VAR_11;
  int VAR_12 = -1;

  if (*VAR_9 != ((void*)0))
    VAR_12 = (*VAR_9)->lwpid;

  while (1)
    {
      VAR_11 = FUNC_7 (VAR_12, VAR_10, VAR_1);

      if (VAR_11 == -1)
 {
   if (VAR_6 != VAR_0)
     FUNC_5 ("waitpid");
 }
      else if (VAR_11 > 0)
 break;

      FUNC_6 (1000);
    }

  if (VAR_5
      && (!FUNC_0 (*VAR_10)
   || (FUNC_1 (*VAR_10) != 32
       && FUNC_1 (*VAR_10) != 33)))
    FUNC_3 (VAR_7, "Got an event from %d (%x)\n", VAR_11, *VAR_10);

  if (VAR_12 == -1)
    *VAR_9 = (struct process_info *) FUNC_2 (&VAR_2, VAR_11);

  (*VAR_9)->stopped = 1;
  (*VAR_9)->pending_is_breakpoint = 0;

  if (VAR_5
      && FUNC_0 (*VAR_10))
    {
      VAR_4 = (struct thread_info *)
 FUNC_2 (&VAR_3, (*VAR_9)->tid);

      if (VAR_8.get_pc != ((void*)0))
 FUNC_4 ();
    }
}
