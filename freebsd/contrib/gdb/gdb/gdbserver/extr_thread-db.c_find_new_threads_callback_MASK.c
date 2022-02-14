
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ti_state; } ;
typedef TYPE_1__ td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef scalar_t__ td_err_e ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int const*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int const*,TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4 (const td_thrhandle_t *VAR_3, void *VAR_4)
{
  td_thrinfo_t VAR_5;
  td_err_e VAR_6;

  VAR_6 = FUNC_2 (VAR_3, &VAR_5);
  if (VAR_6 != VAR_0)
    FUNC_0 ("Cannot get thread info: %s", FUNC_3 (VAR_6));


  if (VAR_5.ti_state == VAR_1 || VAR_5.ti_state == VAR_2)
    return 0;

  FUNC_1 (VAR_3, &VAR_5);

  return 0;
}
