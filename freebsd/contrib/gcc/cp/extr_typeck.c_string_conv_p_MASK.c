
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int VAR_6 ;

int
FUNC_9 (tree VAR_7, tree VAR_8, int VAR_9)
{
  tree VAR_10;

  if (FUNC_1 (VAR_7) != VAR_2)
    return 0;

  VAR_10 = FUNC_3 (VAR_7);
  if (!FUNC_7 (VAR_10, VAR_5)
      && !FUNC_7 (VAR_10, VAR_6))
    return 0;

  if (FUNC_1 (VAR_8) == VAR_3)
    {

      if (!FUNC_7 (FUNC_4 (FUNC_3 (FUNC_3 (VAR_8))), VAR_10))
 return 0;
    }
  else
    {

      VAR_10 = FUNC_5 (FUNC_6 (VAR_10, VAR_4));
      if (!FUNC_7 (FUNC_3 (VAR_8), VAR_10))
 return 0;
      FUNC_0 (VAR_8);
      if (FUNC_1 (VAR_8) != VAR_0
   || FUNC_1 (FUNC_2 (VAR_8, 0)) != VAR_3)
 return 0;
    }


  if (VAR_9)
    FUNC_8 (VAR_1,
      "deprecated conversion from string constant to %qT",
      VAR_7);

  return 1;
}
