
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ti_state; int ti_tid; } ;
typedef TYPE_1__ td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef scalar_t__ td_err_e ;
typedef int ptid_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int const*,TYPE_1__*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int const*,TYPE_1__*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7 (const td_thrhandle_t *VAR_4, void *VAR_5)
{
  td_thrinfo_t VAR_6;
  td_err_e VAR_7;
  ptid_t VAR_8;

  VAR_7 = FUNC_5 (VAR_4, &VAR_6);
  if (VAR_7 != VAR_0)
    FUNC_3 ("find_new_threads_callback: cannot get thread info: %s",
    FUNC_6 (VAR_7));

  if (VAR_6.ti_state == VAR_1 || VAR_6.ti_state == VAR_2)
    return 0;

  VAR_8 = FUNC_0 (VAR_6.ti_tid, FUNC_1 (VAR_3));

  if (!FUNC_4 (VAR_8))
    FUNC_2 (VAR_8, VAR_4, &VAR_6, 1);

  return 0;
}
