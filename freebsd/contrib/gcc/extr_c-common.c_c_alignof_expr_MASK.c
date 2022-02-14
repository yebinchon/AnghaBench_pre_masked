
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

tree
FUNC_11 (tree VAR_8)
{
  tree VAR_9;

  if (FUNC_6 (VAR_8))
    VAR_9 = FUNC_10 (FUNC_0 (VAR_8));

  else if (FUNC_2 (VAR_8) == VAR_0
    && FUNC_1 (FUNC_3 (VAR_8, 1)))
    {
      FUNC_8 ("%<__alignof%> applied to a bit-field");
      VAR_9 = VAR_6;
    }
  else if (FUNC_2 (VAR_8) == VAR_0
    && FUNC_2 (FUNC_3 (VAR_8, 1)) == VAR_2)
    VAR_9 = FUNC_10 (FUNC_0 (FUNC_3 (VAR_8, 1)));

  else if (FUNC_2 (VAR_8) == VAR_3)
    {
      tree VAR_10 = FUNC_3 (VAR_8, 0);
      tree VAR_11 = VAR_10;
      int VAR_12 = FUNC_5 (FUNC_4 (FUNC_4 (VAR_10)));

      while ((FUNC_2 (VAR_10) == VAR_4 || FUNC_2 (VAR_10) == VAR_1)
      && FUNC_2 (FUNC_4 (FUNC_3 (VAR_10, 0))) == VAR_5)
 {
   int VAR_13;

   VAR_10 = FUNC_3 (VAR_10, 0);
   VAR_13 = FUNC_5 (FUNC_4 (FUNC_4 (VAR_10)));
   if (VAR_13 > VAR_12)
     VAR_11 = VAR_10, VAR_12 = VAR_13;
 }
      return FUNC_7 (FUNC_4 (FUNC_4 (VAR_11)));
    }
  else
    return FUNC_7 (FUNC_4 (VAR_8));

  return FUNC_9 (VAR_7, VAR_9);
}
