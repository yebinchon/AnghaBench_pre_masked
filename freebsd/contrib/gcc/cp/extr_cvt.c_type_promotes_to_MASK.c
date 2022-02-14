
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

tree
FUNC_9 (tree VAR_8)
{
  if (VAR_8 == VAR_3)
    return VAR_3;

  VAR_8 = FUNC_2 (VAR_8);



  if (VAR_8 == VAR_1)
    VAR_8 = VAR_5;



  else if (FUNC_1 (VAR_8) == VAR_0
    || VAR_8 == VAR_7)
    {
      int VAR_9 = FUNC_0 (FUNC_4 (VAR_8),
      FUNC_4 (VAR_5));
      tree VAR_10 = FUNC_6 (VAR_9, 0);
      if (FUNC_5 (VAR_8)
   && ! FUNC_8 (FUNC_3 (VAR_8), VAR_10))
 VAR_8 = FUNC_6 (VAR_9, 1);
      else
 VAR_8 = VAR_10;
    }
  else if (FUNC_7 (VAR_8))
    {

      if (FUNC_5 (VAR_8)
   && FUNC_4 (VAR_8) == FUNC_4 (VAR_5))
 VAR_8 = VAR_6;
      else
 VAR_8 = VAR_5;
    }
  else if (VAR_8 == VAR_4)
    VAR_8 = VAR_2;

  return VAR_8;
}
