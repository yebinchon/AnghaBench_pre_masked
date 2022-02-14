
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;




int
FUNC_6 (tree VAR_1, tree VAR_2)
{
  while (VAR_1 && FUNC_2 (VAR_1) != VAR_0)
    switch (FUNC_3 (FUNC_2 (VAR_1)))
      {
      case 130:
 VAR_1 = FUNC_1 (VAR_1); break;
      case 128:
 VAR_1 = FUNC_4 (VAR_1); break;
      case 129:
 VAR_1 = FUNC_0 (VAR_1); break;
      default: FUNC_5 ();
      }

  while (VAR_2 && FUNC_2 (VAR_2) != VAR_0)
    switch (FUNC_3 (FUNC_2 (VAR_2)))
      {
      case 130:
 VAR_2 = FUNC_1 (VAR_2); break;
      case 128:
 VAR_2 = FUNC_4 (VAR_2); break;
      case 129:
 VAR_2 = FUNC_0 (VAR_2); break;
      default: FUNC_5 ();
      }

  return VAR_1 == VAR_2;
}
