
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value_range_t ;
typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int * FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int*) ;

__attribute__((used)) static bool
FUNC_6 (tree VAR_4, bool *VAR_5)
{
  if (FUNC_5 (VAR_4, VAR_5))
    return 1;



  if (FUNC_0 (VAR_4) == VAR_0)
    {
      tree VAR_6 = FUNC_2 (FUNC_1 (VAR_4, 0));

      if (VAR_6 != VAR_2
   && FUNC_0 (VAR_6) == VAR_1
   && FUNC_0 (FUNC_1 (VAR_6, 0)) == VAR_3)
 {
   value_range_t *VAR_7 = FUNC_3 (FUNC_1 (VAR_6, 0));
   if (FUNC_4 (VAR_7))
     return 1;
 }
    }

  return 0;
}
