
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_address_t ;
struct TYPE_3__ {int suspend_count; } ;
struct procinfo {TYPE_1__ taskinfo; } ;
struct inf {TYPE_2__* task; int pid; } ;
typedef int procinfo_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef scalar_t__ error_t ;
struct TYPE_4__ {int dead; int cur_sc; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int*,int *,scalar_t__*,char**,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_7 (struct inf *VAR_2)
{
  char *VAR_3;
  mach_msg_type_number_t VAR_4 = 0;
  struct procinfo *VAR_5;
  mach_msg_type_number_t VAR_6 = 0;
  int VAR_7 = VAR_0;
  int VAR_8 = -1;
  error_t VAR_9;

 retry:
  VAR_9 = FUNC_2 (VAR_1, VAR_2->pid, &VAR_7,
     (procinfo_t *) &VAR_5, &VAR_6, &VAR_3, &VAR_4);
  if (VAR_9)
    {
      VAR_2->task->dead = 1;
      return;
    }

  if (VAR_2->task->cur_sc < VAR_5->taskinfo.suspend_count && VAR_8 == -1)
    {




      VAR_8 = VAR_5->taskinfo.suspend_count;
      goto retry;
    }

  VAR_8 = VAR_5->taskinfo.suspend_count;

  FUNC_6 (FUNC_1 (), (vm_address_t) VAR_5, VAR_6);
  if (VAR_4 > 0)
    FUNC_6 (FUNC_1 (), (vm_address_t) VAR_5, VAR_6);

  if (VAR_2->task->cur_sc < VAR_8)
    {
      int VAR_10;

      FUNC_5 ();
      VAR_10 = !FUNC_3 ("Pid %d has an additional task suspend count of %d;"
        " clear it? ", VAR_2->pid,
        VAR_8 - VAR_2->task->cur_sc);
      FUNC_4 ();

      if (VAR_10)
 FUNC_0 ("Additional task suspend count left untouched.");

      VAR_2->task->cur_sc = VAR_8;
    }
}
