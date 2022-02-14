
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static bool
FUNC_5 (rtx VAR_5)
{
  rtx VAR_6;
  HOST_WIDE_INT VAR_7;

  if (!VAR_2)
    {
      if (FUNC_0 (VAR_5) == VAR_0)
 return 1;

      FUNC_3 (VAR_5, &VAR_6, &VAR_7);
      if (FUNC_4 (VAR_6, VAR_3) && FUNC_1 (VAR_7))
 return 1;
    }

  if (VAR_1 && FUNC_2 (&VAR_5, &VAR_4, 0))
    return 1;

  return 0;
}
