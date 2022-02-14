
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,scalar_t__) ;

void
FUNC_6 (tree VAR_0, tree VAR_1)
{
  if (!FUNC_1 (VAR_0))
    {
      FUNC_3 (VAR_0, VAR_1);
      return;
    }
  if (VAR_1 == FUNC_0 (VAR_0))
    return;

  if (FUNC_4 (FUNC_0 (VAR_0))
      && FUNC_2 (VAR_0))
    FUNC_5 (0, "%D renamed after being referenced in assembly", VAR_0);

  FUNC_3 (VAR_0, VAR_1);
}
