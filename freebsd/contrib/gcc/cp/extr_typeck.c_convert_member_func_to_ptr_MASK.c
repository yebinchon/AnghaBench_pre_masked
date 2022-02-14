
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (char*,int ,int ) ;
 scalar_t__ VAR_3 ;

tree
FUNC_12 (tree VAR_4, tree VAR_5)
{
  tree VAR_6;
  tree VAR_7;

  VAR_6 = FUNC_2 (VAR_5);
  FUNC_8 (FUNC_3 (VAR_6)
       || FUNC_1 (VAR_6) == VAR_0);

  if (VAR_2 || VAR_3)
    FUNC_11 ("converting from %qT to %qT", VAR_6, VAR_4);

  if (FUNC_1 (VAR_6) == VAR_0)
    VAR_5 = FUNC_5 (VAR_5);
  else if (FUNC_1 (VAR_5) == VAR_1)
    VAR_5 = FUNC_6 (FUNC_0 (VAR_5));
  else
    {
      VAR_7 = FUNC_10 (FUNC_4 (VAR_6), 0);
      VAR_7 = FUNC_6 (VAR_7);
      VAR_5 = FUNC_9 (&VAR_7, VAR_5);
    }

  return FUNC_7 (VAR_4, VAR_5);
}
