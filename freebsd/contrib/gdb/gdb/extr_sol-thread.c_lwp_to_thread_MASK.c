
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ti_tid; } ;
typedef TYPE_1__ td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef scalar_t__ td_err_e ;
typedef int ptid_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static ptid_t
FUNC_11 (ptid_t VAR_3)
{
  td_thrinfo_t VAR_4;
  td_thrhandle_t VAR_5;
  td_err_e VAR_6;

  if (FUNC_4 (VAR_3))
    return VAR_3;



  if (!FUNC_9 (VAR_3))
    return FUNC_8 (-1);

  VAR_6 = FUNC_5 (VAR_2, FUNC_1 (VAR_3), &VAR_5);
  if (VAR_6 == VAR_0)
    return FUNC_8 (-1);
  else if (VAR_6 != VAR_1)
    FUNC_3 ("lwp_to_thread: td_ta_map_lwp2thr: %s.", FUNC_10 (VAR_6));

  VAR_6 = FUNC_7 (&VAR_5);
  if (VAR_6 == VAR_0)
    return VAR_3;

  else if (VAR_6 != VAR_1)
    FUNC_3 ("lwp_to_thread: td_thr_validate: %s.", FUNC_10 (VAR_6));

  VAR_6 = FUNC_6 (&VAR_5, &VAR_4);
  if (VAR_6 == VAR_0)
    return FUNC_8 (-1);
  else if (VAR_6 != VAR_1)
    FUNC_3 ("lwp_to_thread: td_thr_get_info: %s.", FUNC_10 (VAR_6));

  return FUNC_0 (VAR_4.ti_tid, FUNC_2 (VAR_3));
}
