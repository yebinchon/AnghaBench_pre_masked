
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

int
FUNC_6 (rtx VAR_7, int VAR_8, int VAR_9)
{
  if (!VAR_9)
    {
      if (FUNC_2 (VAR_7) != VAR_2)
 return 0;

      VAR_7 = FUNC_3 (VAR_7, 0);
    }

  if (FUNC_2 (VAR_7) != VAR_3)
    return 0;

  if (VAR_8 & VAR_1)
    return 0;

  if (VAR_4)
    {
      if (VAR_6
   || FUNC_0 (VAR_5))


 return 1;
    }

  if (FUNC_5 (VAR_7))
    return 0;

  return (VAR_8 & VAR_0)
    || FUNC_1 (FUNC_4 (VAR_7, 0))
    || VAR_4;
}
