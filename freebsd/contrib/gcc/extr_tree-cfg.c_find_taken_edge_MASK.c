
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int * edge ;
typedef int basic_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

edge
FUNC_11 (basic_block VAR_5, tree VAR_6)
{
  tree VAR_7;

  VAR_7 = FUNC_10 (VAR_5);

  FUNC_6 (VAR_7);
  FUNC_6 (FUNC_8 (VAR_7));
  FUNC_6 (VAR_6);

  if (! FUNC_9 (VAR_6))
    return ((void*)0);

  if (FUNC_0 (VAR_7) == VAR_1)
    return FUNC_4 (VAR_5, VAR_6);

  if (FUNC_0 (VAR_7) == VAR_4)
    return FUNC_5 (VAR_5, VAR_6);

  if (FUNC_2 (VAR_7))
    {






      if ((FUNC_0 (VAR_6) == VAR_0 || FUNC_0 (VAR_6) == VAR_3)
   && FUNC_0 (FUNC_1 (VAR_6, 0)) == VAR_2)
 return FUNC_3 (VAR_5, FUNC_1 (VAR_6, 0));
      return ((void*)0);
    }

  FUNC_7 ();
}
