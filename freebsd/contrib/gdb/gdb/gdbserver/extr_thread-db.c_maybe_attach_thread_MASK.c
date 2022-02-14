
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ti_lid; int ti_tid; } ;
typedef TYPE_1__ td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef scalar_t__ td_err_e ;
struct thread_info {int dummy; } ;
struct process_info {int thread_known; int lwpid; int tid; } ;
struct TYPE_7__ {scalar_t__ head; scalar_t__ tail; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 struct process_info* FUNC_4 (struct thread_info*) ;
 struct process_info* FUNC_5 (struct thread_info*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int const*,int) ;
 char* FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_11 (const td_thrhandle_t *VAR_4, td_thrinfo_t *VAR_5)
{
  td_err_e VAR_6;
  struct thread_info *VAR_7;
  struct process_info *VAR_8;



  if (VAR_1.head == VAR_1.tail)
    {
      VAR_7 = (struct thread_info *) VAR_1.head;
      VAR_8 = FUNC_4 (VAR_7);
      if (VAR_8->thread_known == 0)
 {

   FUNC_0 (&VAR_1, VAR_5->ti_tid);
   goto found;
 }
    }

  VAR_7 = (struct thread_info *) FUNC_2 (&VAR_1,
            VAR_5->ti_tid);
  if (VAR_7 != ((void*)0))
    return;

  if (VAR_2)
    FUNC_3 (VAR_3, "Attaching to thread %d (LWP %d)\n",
      VAR_5->ti_tid, VAR_5->ti_lid);
  FUNC_6 (VAR_5->ti_lid, VAR_5->ti_tid);
  VAR_7 = (struct thread_info *) FUNC_2 (&VAR_1,
            VAR_5->ti_tid);
  if (VAR_7 == ((void*)0))
    {
      FUNC_10 ("Could not attach to thread %ld (LWP %d)\n",
        VAR_5->ti_tid, VAR_5->ti_lid);
      return;
    }

  VAR_8 = FUNC_5 (VAR_7);

found:
  FUNC_7 (VAR_5->ti_tid);

  VAR_8->tid = VAR_5->ti_tid;
  VAR_8->lwpid = VAR_5->ti_lid;

  VAR_8->thread_known = 1;
  VAR_6 = FUNC_8 (VAR_4, 1);
  if (VAR_6 != VAR_0)
    FUNC_1 ("Cannot enable thread event reporting for %d: %s",
           VAR_5->ti_lid, FUNC_9 (VAR_6));
}
