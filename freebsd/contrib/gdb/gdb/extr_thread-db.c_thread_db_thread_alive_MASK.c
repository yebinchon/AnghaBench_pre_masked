
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int td_thrhandle_t ;
typedef int td_err_e ;
struct thread_info {TYPE_1__* private; } ;
typedef int ptid_t ;
struct TYPE_6__ {int (* to_thread_alive ) (int ) ;} ;
struct TYPE_5__ {scalar_t__ ti_state; } ;
struct TYPE_4__ {int ti_valid; TYPE_2__ ti; int th; int th_valid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct thread_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct thread_info*,int ) ;

__attribute__((used)) static int
FUNC_6 (ptid_t VAR_4)
{
  td_thrhandle_t VAR_5;
  td_err_e VAR_6;

  if (FUNC_1 (VAR_4))
    {
      struct thread_info *VAR_7;
      VAR_7 = FUNC_0 (VAR_4);

      FUNC_5 (VAR_7, 0);
      if (!VAR_7->private->th_valid)
 return 0;

      VAR_6 = FUNC_4 (&VAR_7->private->th);
      if (VAR_6 != VAR_0)
 return 0;

      if (!VAR_7->private->ti_valid)
 {
   VAR_6 =
     FUNC_3 (&VAR_7->private->th,
          &VAR_7->private->ti);
   if (VAR_6 != VAR_0)
     return 0;
   VAR_7->private->ti_valid = 1;
 }

      if (VAR_7->private->ti.ti_state == VAR_1
   || VAR_7->private->ti.ti_state == VAR_2)
 return 0;

      return 1;
    }

  if (VAR_3->to_thread_alive)
    return VAR_3->to_thread_alive (VAR_4);

  return 0;
}
