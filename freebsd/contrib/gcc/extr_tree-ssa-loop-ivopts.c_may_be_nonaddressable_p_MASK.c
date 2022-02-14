
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;



 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;


__attribute__((used)) static bool
FUNC_5 (tree VAR_0)
{
  switch (FUNC_2 (VAR_0))
    {
    case 129:
      return FUNC_1 (FUNC_3 (VAR_0, 1))
      || FUNC_5 (FUNC_3 (VAR_0, 0));

    case 130:
    case 131:
      return FUNC_5 (FUNC_3 (VAR_0, 0));

    case 128:




      return FUNC_0 (FUNC_4 (VAR_0))
      && !FUNC_0 (FUNC_4 (FUNC_3 (VAR_0, 0)));

    default:
      break;
    }

  return 0;
}
