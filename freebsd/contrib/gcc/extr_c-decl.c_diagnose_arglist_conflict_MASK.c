
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_10 (tree VAR_2, tree VAR_3,
      tree VAR_4, tree VAR_5)
{
  tree VAR_6;

  if (FUNC_2 (VAR_3) != VAR_0
      || !FUNC_8 (FUNC_3 (VAR_5), FUNC_3 (VAR_4))
      || !((FUNC_5 (VAR_5) == 0 && FUNC_0 (VAR_3) == 0)
    ||
    (FUNC_5 (VAR_4) == 0 && FUNC_0 (VAR_2) == 0)))
    return;

  VAR_6 = FUNC_5 (VAR_5);
  if (VAR_6 == 0)
    VAR_6 = FUNC_5 (VAR_4);
  for (; VAR_6; VAR_6 = FUNC_1 (VAR_6))
    {
      tree VAR_7 = FUNC_4 (VAR_6);

      if (FUNC_1 (VAR_6) == 0
   && FUNC_6 (VAR_7) != VAR_1)
 {
   FUNC_9 ("a parameter list with an ellipsis can%'t match "
    "an empty parameter name list declaration");
   break;
 }

      if (FUNC_7 (VAR_7) != VAR_7)
 {
   FUNC_9 ("an argument type that has a default promotion can%'t match "
    "an empty parameter name list declaration");
   break;
 }
    }
}
