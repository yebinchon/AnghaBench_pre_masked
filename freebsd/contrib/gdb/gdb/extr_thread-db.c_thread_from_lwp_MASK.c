
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int td_thrhandle_t ;
typedef scalar_t__ td_err_e ;
struct thread_info {TYPE_2__* private; } ;
typedef int ptid_t ;
struct TYPE_3__ {int ti_tid; } ;
struct TYPE_4__ {TYPE_1__ ti; scalar_t__ ti_valid; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,scalar_t__,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int *) ;
 int VAR_1 ;
 char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,struct thread_info**) ;

__attribute__((used)) static ptid_t
FUNC_10 (ptid_t VAR_2)
{
  td_thrhandle_t VAR_3;
  td_err_e VAR_4;
  struct thread_info *VAR_5;
  ptid_t VAR_6;

  if (FUNC_2 (VAR_2) == 0)
    VAR_2 = FUNC_0 (FUNC_3 (VAR_2), FUNC_3 (VAR_2));

  FUNC_5 (FUNC_6 (VAR_2));

  VAR_4 = FUNC_7 (VAR_1, FUNC_2 (VAR_2), &VAR_3);
  if (VAR_4 != VAR_0)
    FUNC_4 ("Cannot find user-level thread for LWP %ld: %s",
    FUNC_2 (VAR_2), FUNC_8 (VAR_4));

  VAR_5 = ((void*)0);
  FUNC_9 (&VAR_3, &VAR_5);
  FUNC_5 (VAR_5 && VAR_5->private->ti_valid);

  return FUNC_1 (VAR_5->private->ti.ti_tid, FUNC_3 (VAR_2));
}
