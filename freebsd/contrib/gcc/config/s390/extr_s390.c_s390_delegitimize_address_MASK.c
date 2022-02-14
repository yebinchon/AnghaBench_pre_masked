
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static rtx
FUNC_5 (rtx VAR_8)
{
  rtx VAR_9 = VAR_8, VAR_10;

  if (FUNC_0 (VAR_9) != VAR_1)
    return VAR_8;

  VAR_9 = FUNC_2 (VAR_9, 0);
  if (FUNC_0 (VAR_9) == VAR_3
      && FUNC_0 (FUNC_2 (VAR_9, 1)) == VAR_0
      && FUNC_0 (FUNC_2 (VAR_9, 0)) == VAR_4
      && FUNC_1 (FUNC_2 (VAR_9, 0)) == VAR_2)
    {
      VAR_10 = FUNC_2 (FUNC_2 (VAR_9, 1), 0);
      if (FUNC_0 (VAR_10) == VAR_5
   && FUNC_3 (VAR_10, 1) == VAR_6)
 return FUNC_4 (VAR_10, 0, 0);
      return VAR_8;
    }

  if (FUNC_0 (VAR_9) == VAR_0)
    {
      VAR_10 = FUNC_2 (VAR_9, 0);
      if (FUNC_0 (VAR_10) == VAR_5
   && FUNC_3 (VAR_10, 1) == VAR_7)
 return FUNC_4 (VAR_10, 0, 0);
      return VAR_8;
    }

  return VAR_8;
}
