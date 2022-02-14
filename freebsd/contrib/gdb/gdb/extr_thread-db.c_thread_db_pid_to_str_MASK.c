
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ti_state; scalar_t__ ti_lid; scalar_t__ ti_tid; } ;
typedef TYPE_2__ td_thrinfo_t ;
typedef int td_err_e ;
struct thread_info {TYPE_1__* private; } ;
typedef int ptid_t ;
typedef int buf ;
struct TYPE_7__ {char* (* to_pid_to_str ) (int ) ;} ;
struct TYPE_5__ {int th_valid; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct thread_info* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,long,...) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 TYPE_4__* VAR_1 ;
 TYPE_2__* FUNC_7 (struct thread_info*) ;
 int FUNC_8 (struct thread_info*,int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static char *
FUNC_10 (ptid_t VAR_2)
{
  if (FUNC_2 (VAR_2))
    {
      static char VAR_3[64];
      td_thrinfo_t *VAR_4;
      td_err_e VAR_5;
      struct thread_info *VAR_6;

      VAR_6 = FUNC_1 (VAR_2);
      FUNC_8 (VAR_6, 0);
      if (!VAR_6->private->th_valid)
 {
   FUNC_4 (VAR_3, sizeof (VAR_3), "Thread %ld (Missing)",
      FUNC_0 (VAR_2));
   return VAR_3;
 }

      VAR_4 = FUNC_7 (VAR_6);

      if (VAR_4->ti_state == VAR_0 && VAR_4->ti_lid != 0)
 {
   FUNC_4 (VAR_3, sizeof (VAR_3), "Thread %ld (LWP %d)",
      (long) VAR_4->ti_tid, VAR_4->ti_lid);
 }
      else
 {
   FUNC_4 (VAR_3, sizeof (VAR_3), "Thread %ld (%s)",
      (long) VAR_4->ti_tid,
      FUNC_9 (VAR_4->ti_state));
 }

      return VAR_3;
    }

  if (VAR_1->to_pid_to_str (VAR_2))
    return VAR_1->to_pid_to_str (VAR_2);

  return FUNC_3 (VAR_2);
}
