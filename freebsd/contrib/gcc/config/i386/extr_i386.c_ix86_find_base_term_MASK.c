
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;

rtx
FUNC_5 (rtx VAR_9)
{
  rtx VAR_10;

  if (VAR_6)
    {
      if (FUNC_0 (VAR_9) != VAR_0)
 return VAR_9;
      VAR_10 = FUNC_1 (VAR_9, 0);
      if (FUNC_0 (VAR_10) == VAR_4
   && (FUNC_0 (FUNC_1 (VAR_10, 1)) == VAR_2
       || FUNC_0 (FUNC_1 (VAR_10, 1)) == VAR_1))
 VAR_10 = FUNC_1 (VAR_10, 0);
      if (FUNC_0 (VAR_10) != VAR_7
   || FUNC_2 (VAR_10, 1) != VAR_8)
 return VAR_9;

      VAR_10 = FUNC_3 (VAR_10, 0, 0);

      if (FUNC_0 (VAR_10) != VAR_5
   && FUNC_0 (VAR_10) != VAR_3)
 return VAR_9;

      return VAR_10;
    }

  VAR_10 = FUNC_4 (VAR_9);

  if (FUNC_0 (VAR_10) != VAR_5
      && FUNC_0 (VAR_10) != VAR_3)
    return VAR_9;

  return VAR_10;
}
