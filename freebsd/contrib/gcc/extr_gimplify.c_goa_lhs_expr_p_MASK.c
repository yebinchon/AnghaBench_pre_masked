
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static bool
FUNC_4 (tree VAR_6, tree VAR_7)
{



  while ((FUNC_0 (VAR_6) == VAR_4
          || FUNC_0 (VAR_6) == VAR_1
          || FUNC_0 (VAR_6) == VAR_3)
         && FUNC_1 (VAR_6, 0) != VAR_5
         && (FUNC_3 (FUNC_2 (VAR_6))
             == FUNC_3 (FUNC_2 (FUNC_1 (VAR_6, 0)))))
    VAR_6 = FUNC_1 (VAR_6, 0);

  if (FUNC_0 (VAR_6) == VAR_2 && FUNC_1 (VAR_6, 0) == VAR_7)
    return 1;
  if (FUNC_0 (VAR_7) == VAR_0 && VAR_6 == FUNC_1 (VAR_7, 0))
    return 1;
  return 0;
}
