
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
typedef scalar_t__ lwpid_t ;
typedef int gregset_t ;
typedef int caddr_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int *) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_8 (ptid_t VAR_9)
{
  td_thrhandle_t VAR_10;
  td_thrinfo_t VAR_11;
  td_err_e VAR_12;
  gregset_t VAR_13;
  lwpid_t VAR_14;

  if (FUNC_2 (VAR_9))
    {
      VAR_12 = FUNC_5 (VAR_8, FUNC_1 (VAR_9), &VAR_10);
      if (VAR_12 != VAR_1)
        return 0;

      VAR_12 = FUNC_7 (&VAR_10, &VAR_11);
      if (VAR_12 != VAR_1)
        return 0;


      if (VAR_11.ti_state == VAR_2 || VAR_11.ti_state == VAR_3)
        return 0;

      return 1;
    }
  else if (FUNC_0 (VAR_9) == 0)
    {

      return 1;
    }

  if (VAR_6)
    {
      VAR_12 = FUNC_6 (VAR_8, FUNC_0 (VAR_9), &VAR_10);





      if (VAR_12 == VAR_1)
        return 0;
    }

  if (!VAR_7)
    {
      VAR_14 = FUNC_0 (VAR_9);
      FUNC_3 (VAR_4, VAR_5, &VAR_14);
      return (VAR_14 == 0);
    }


  return FUNC_4 (VAR_0, FUNC_0 (VAR_9), (caddr_t)&VAR_13, 0) == 0;
}
