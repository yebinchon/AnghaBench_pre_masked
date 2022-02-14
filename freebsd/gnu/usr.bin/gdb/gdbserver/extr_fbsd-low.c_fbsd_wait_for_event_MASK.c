
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct TYPE_7__ {int id; } ;
struct process_info {int lwpid; int status_pending; int tid; int stepping; scalar_t__ bp_reinsert; int pending_is_breakpoint; void* pending_stop_pc; TYPE_2__ head; scalar_t__ stop_expected; scalar_t__ status_pending_p; } ;
struct TYPE_8__ {scalar_t__ head; scalar_t__ tail; } ;
struct TYPE_6__ {scalar_t__ (* breakpoint_at ) (void*) ;int (* breakpoint_reinsert_addr ) () ;int * get_pc; } ;
typedef void* CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct process_info*) ;
 struct thread_info* VAR_4 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,int,scalar_t__) ;
 int FUNC_7 (struct process_info**,int*) ;
 scalar_t__ FUNC_8 (int *,int ,int *) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (struct process_info*) ;
 struct thread_info* FUNC_12 (struct process_info*) ;
 void* FUNC_13 () ;
 struct process_info* FUNC_14 (struct thread_info*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (void*,int ) ;
 int FUNC_17 (int *,TYPE_2__*) ;
 int FUNC_18 (struct thread_info*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (void*) ;
 TYPE_1__ VAR_8 ;
 int FUNC_21 (void*) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int
FUNC_22 (struct thread_info *VAR_10)
{
  CORE_ADDR VAR_11;
  struct process_info *VAR_12;
  int VAR_13;





  if (VAR_10 == ((void*)0))
    {
      VAR_12 = (struct process_info *)
 FUNC_8 (&VAR_2, VAR_6, ((void*)0));
      if (VAR_5 && VAR_12)
 FUNC_10 (VAR_7, "Got a pending child %d\n", VAR_12->lwpid);
    }
  else
    {
      VAR_12 = FUNC_14 (VAR_10);
      if (VAR_12->status_pending_p
   && FUNC_3 (VAR_12))
 VAR_12 = ((void*)0);
    }

  if (VAR_12 != ((void*)0))
    {
      if (VAR_12->status_pending_p)
 {
   if (VAR_5)
     FUNC_10 (VAR_7, "Got an event from pending child %d (%04x)\n",
       VAR_12->lwpid, VAR_12->status_pending);
   VAR_13 = VAR_12->status_pending;
   VAR_12->status_pending_p = 0;
   VAR_12->status_pending = 0;
   VAR_4 = FUNC_12 (VAR_12);
   return VAR_13;
 }
    }





  while (1)
    {
      if (VAR_10 == ((void*)0))
 VAR_12 = ((void*)0);
      else
 VAR_12 = FUNC_14 (VAR_10);

      FUNC_7 (&VAR_12, &VAR_13);

      if (VAR_12 == ((void*)0))
 FUNC_5 ("event from unknown child");

      VAR_4 = (struct thread_info *)
 FUNC_9 (&VAR_3, VAR_12->tid);

      if (VAR_9)
 {

   if (! FUNC_0 (VAR_13))
     {
       if (VAR_5)
  FUNC_10 (VAR_7, "Thread %d (LWP %d) exiting\n",
    VAR_12->tid, VAR_12->head.id);


       if (VAR_3.head == VAR_3.tail)
  return VAR_13;

       FUNC_4 (VAR_12->tid);

       FUNC_17 (&VAR_2, &VAR_12->head);
       FUNC_11 (VAR_12);
       FUNC_18 (VAR_4);
       VAR_4 = (struct thread_info *) VAR_3.head;



       if (VAR_10 != ((void*)0))
  return VAR_13;


       continue;
     }

   if (FUNC_0 (VAR_13)
       && FUNC_1 (VAR_13) == VAR_0
       && VAR_12->stop_expected)
     {
       if (VAR_5)
  FUNC_10 (VAR_7, "Expected stop.\n");
       VAR_12->stop_expected = 0;
       FUNC_6 (&VAR_12->head,
     VAR_12->stepping, 0);
       continue;
     }



   if (FUNC_0 (VAR_13))
     {
       if (VAR_5)
  FUNC_10 (VAR_7, "Ignored signal %ld for %d (LWP %d).\n",
    FUNC_1 (VAR_13), VAR_12->tid,
    VAR_12->head.id);
       FUNC_6 (&VAR_12->head,
     VAR_12->stepping,
     FUNC_1 (VAR_13));
       continue;
     }
 }



      if (!FUNC_0 (VAR_13) || FUNC_1 (VAR_13) != VAR_1)
 return VAR_13;



      if (VAR_8.get_pc == ((void*)0))
 return VAR_13;

      VAR_11 = FUNC_13 ();





      if (VAR_12->bp_reinsert != 0)
 {
   if (VAR_5)
     FUNC_10 (VAR_7, "Reinserted breakpoint.\n");
   FUNC_15 (VAR_12->bp_reinsert);
   VAR_12->bp_reinsert = 0;


   FUNC_6 (&VAR_12->head, 0, 0);
   continue;
 }

      if (VAR_5)
 FUNC_10 (VAR_7, "Hit a (non-reinsert) breakpoint.\n");

      if (FUNC_2 (VAR_11) != 0)
 {



   VAR_12->pending_is_breakpoint = 1;
   VAR_12->pending_stop_pc = VAR_11;
   if (VAR_8.breakpoint_reinsert_addr == ((void*)0))
     {
       VAR_12->bp_reinsert = VAR_11;
       FUNC_21 (VAR_11);
       FUNC_6 (&VAR_12->head, 1, 0);
     }
   else
     {
       FUNC_16
  (VAR_11, (*VAR_8.breakpoint_reinsert_addr) ());
       FUNC_6 (&VAR_12->head, 0, 0);
     }

   continue;
 }
      if (VAR_12->stepping)
 {
   VAR_12->stepping = 0;
   return VAR_13;
 }
      if ((*VAR_8.breakpoint_at) (VAR_11))
 {
   VAR_12->pending_is_breakpoint = 1;
   VAR_12->pending_stop_pc = VAR_11;
 }

      return VAR_13;
    }


  return 0;
}
