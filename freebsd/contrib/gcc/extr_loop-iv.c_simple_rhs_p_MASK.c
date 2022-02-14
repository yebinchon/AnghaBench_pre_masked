
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static bool
FUNC_4 (rtx VAR_0)
{
  rtx VAR_1, VAR_2;

  if (FUNC_0 (VAR_0)
      || FUNC_2 (VAR_0))
    return 1;

  switch (FUNC_1 (VAR_0))
    {
    case 128:
    case 129:
      VAR_1 = FUNC_3 (VAR_0, 0);
      VAR_2 = FUNC_3 (VAR_0, 1);

      if (FUNC_2 (VAR_1) && FUNC_0 (VAR_2))
 return 1;
      if (FUNC_2 (VAR_2) && FUNC_0 (VAR_1))
 return 1;

      return 0;

    default:
      return 0;
    }
}
