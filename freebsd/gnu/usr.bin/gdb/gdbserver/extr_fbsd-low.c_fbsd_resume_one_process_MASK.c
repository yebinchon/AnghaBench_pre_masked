
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct process_info {scalar_t__ stopped; scalar_t__ bp_reinsert; int stepping; int lwpid; struct pending_signals* pending_signals; scalar_t__ stop_expected; scalar_t__ status_pending_p; } ;
struct pending_signals {int signal; struct pending_signals* prev; } ;
struct inferior_list_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* get_pc ) () ;} ;
typedef int PTRACE_ARG3_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct process_info*) ;
 struct thread_info* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct pending_signals*) ;
 struct thread_info* FUNC_3 (struct process_info*) ;
 int VAR_5 ;
 struct pending_signals* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (struct inferior_list_entry*) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 () ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void
FUNC_9 (struct inferior_list_entry *VAR_8,
     int VAR_9, int VAR_10)
{
  struct process_info *VAR_11 = (struct process_info *) VAR_8;
  struct thread_info *VAR_12;

  if (VAR_11->stopped == 0)
    return;




  if (VAR_10 != 0
      && (VAR_11->status_pending_p || VAR_11->pending_signals != ((void*)0)
   || VAR_11->bp_reinsert != 0))
    {
      struct pending_signals *VAR_13;
      VAR_13 = FUNC_4 (sizeof (*VAR_13));
      VAR_13->prev = VAR_11->pending_signals;
      VAR_13->signal = VAR_10;
      VAR_11->pending_signals = VAR_13;
    }

  if (VAR_11->status_pending_p && !FUNC_0 (VAR_11))
    return;

  VAR_12 = VAR_2;
  VAR_2 = FUNC_3 (VAR_11);

  if (VAR_3)
    FUNC_1 (VAR_6, "Resuming process %d (%s, signal %d, stop %s)\n", VAR_5,
      VAR_9 ? "step" : "continue", VAR_10,
      VAR_11->stop_expected ? "expected" : "not expected");
  if (VAR_11->bp_reinsert != 0)
    {
      if (VAR_3)
 FUNC_1 (VAR_6, "  pending reinsert at %08lx", (long)VAR_11->bp_reinsert);
      if (VAR_9 == 0)
 FUNC_1 (VAR_6, "BAD - reinserting but not stepping.\n");
      VAR_9 = 1;


      VAR_10 = 0;
    }

  FUNC_0 (VAR_11);

  if (VAR_3 && VAR_7.get_pc != ((void*)0))
    {
      FUNC_1 (VAR_6, "  ");
      (long) (*VAR_7.get_pc) ();
    }



  if (VAR_11->pending_signals != ((void*)0) && VAR_11->bp_reinsert == 0)
    {
      struct pending_signals **VAR_14;

      VAR_14 = &VAR_11->pending_signals;
      while ((*VAR_14)->prev != ((void*)0))
 VAR_14 = &(*VAR_14)->prev;

      VAR_10 = (*VAR_14)->signal;
      FUNC_2 (*VAR_14);
      *VAR_14 = ((void*)0);
    }

  FUNC_7 ((struct inferior_list_entry *)
      FUNC_3 (VAR_11));
  VAR_4 = 0;
  VAR_11->stopped = 0;
  VAR_11->stepping = VAR_9;
  FUNC_6 (VAR_9 ? VAR_1 : VAR_0, VAR_11->lwpid, (PTRACE_ARG3_TYPE) 1, VAR_10);

  VAR_2 = VAR_12;
  if (VAR_4)
    FUNC_5 ("ptrace");
}
