
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ti_tid; } ;
typedef TYPE_1__ td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef int td_err_e ;
typedef int ptid_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int const*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5 (const td_thrhandle_t *VAR_2, void *VAR_3)
{
  td_err_e VAR_4;
  td_thrinfo_t VAR_5;
  ptid_t VAR_6;

  if ((VAR_4 = FUNC_4 (VAR_2, &VAR_5)) != VAR_0)
    {
      return -1;
    }
  VAR_6 = FUNC_0 (VAR_5.ti_tid, FUNC_1 (VAR_1));
  if (!FUNC_3 (VAR_6))
    FUNC_2 (VAR_6);

  return 0;
}
