
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ti_state; int ti_lid; } ;
typedef TYPE_1__ td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef scalar_t__ td_err_e ;
typedef int ptid_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static ptid_t
FUNC_10 (ptid_t VAR_4, int VAR_5)
{
  td_thrinfo_t VAR_6;
  td_thrhandle_t VAR_7;
  td_err_e VAR_8;

  if (FUNC_4 (VAR_4))
    return VAR_4;



  VAR_8 = FUNC_5 (VAR_3, FUNC_1 (VAR_4), &VAR_7);
  if (VAR_8 == VAR_0)
    return FUNC_7 (-1);
  else if (VAR_8 != VAR_1)
    FUNC_3 ("thread_to_lwp: td_ta_map_id2thr %s", FUNC_8 (VAR_8));

  VAR_8 = FUNC_6 (&VAR_7, &VAR_6);
  if (VAR_8 == VAR_0)
    return FUNC_7 (-1);
  else if (VAR_8 != VAR_1)
    FUNC_3 ("thread_to_lwp: td_thr_get_info: %s", FUNC_8 (VAR_8));

  if (VAR_6.ti_state != VAR_2)
    {
      if (VAR_5 != -1)
 return FUNC_7 (VAR_5);
      FUNC_3 ("thread_to_lwp: thread state not active: %s",
      FUNC_9 (VAR_6.ti_state));
    }

  return FUNC_0 (VAR_6.ti_lid, FUNC_2 (VAR_4));
}
