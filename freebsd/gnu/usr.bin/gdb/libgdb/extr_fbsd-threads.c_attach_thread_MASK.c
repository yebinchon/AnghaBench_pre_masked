
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ti_state; } ;
typedef TYPE_1__ td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef scalar_t__ td_err_e ;
typedef int ptid_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int const*,int) ;
 char* FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8 (ptid_t VAR_4, const td_thrhandle_t *VAR_5,
               const td_thrinfo_t *VAR_6, int VAR_7)
{
  td_err_e VAR_8;


  if (!FUNC_3 (VAR_4)) {
    FUNC_1 (VAR_4);
    if (VAR_7)
      FUNC_4 ("[New %s]\n", FUNC_5 (VAR_4));
  }

  if (VAR_6->ti_state == VAR_1 || VAR_6->ti_state == VAR_2)
    return;

  if (! FUNC_0(VAR_4))
    return;
  if (VAR_3 != 0)
    return;

  VAR_8 = FUNC_6 (VAR_5, 1);
  if (VAR_8 != VAR_0)
    FUNC_2 ("Cannot enable thread event reporting for %s: %s",
           FUNC_5 (VAR_4), FUNC_7 (VAR_8));
}
