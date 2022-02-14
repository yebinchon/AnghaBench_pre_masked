
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ) ;

int
FUNC_5 (tree VAR_1, tree VAR_2)
{
  if (VAR_1 == VAR_2)
    return 1;

  if (! VAR_1 || ! VAR_2)
    return 0;

  if (FUNC_2 (VAR_1) != FUNC_2 (VAR_2))
    return 0;

  if (FUNC_2 (VAR_1) == VAR_0)
    return
      FUNC_5 (FUNC_3 (VAR_1, 0),
   FUNC_3 (VAR_2, 0))
      && FUNC_5 (FUNC_3 (VAR_1, 1),
      FUNC_3 (VAR_2, 1));

  if (FUNC_1 (VAR_1))
    return FUNC_5 (FUNC_3 (VAR_1, 0),
        FUNC_3 (VAR_2, 0));



  FUNC_4 (FUNC_0 (VAR_1));


  return 0;
}
