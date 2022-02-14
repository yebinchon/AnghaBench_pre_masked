
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ti_tid; } ;
typedef TYPE_1__ td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef scalar_t__ td_err_e ;
typedef int ptid_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 (int *,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static ptid_t
FUNC_10 (ptid_t VAR_3, td_thrhandle_t *VAR_4, td_thrinfo_t *VAR_5)
{
  td_err_e VAR_6;

  FUNC_6 (FUNC_4 (VAR_3));

  if (VAR_1)
    {
      VAR_6 = FUNC_7 (VAR_2, FUNC_2 (VAR_3), VAR_4);
      if (VAR_6 == VAR_0)
        {
          VAR_6 = FUNC_8 (VAR_4, VAR_5);
          if (VAR_6 != VAR_0)
            FUNC_5 ("Cannot get thread info: %s", FUNC_9 (VAR_6));
          return FUNC_1 (VAR_5->ti_tid, FUNC_3 (VAR_3));
        }
    }


  return FUNC_0 (FUNC_2 (VAR_3), FUNC_3 (VAR_3));
}
