
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool
FUNC_2 (tree VAR_1)
{
  tree VAR_2;

  if (FUNC_0 (VAR_1) != VAR_0)
    return 0;

  VAR_2 = FUNC_1 (VAR_1, 0);

  switch (FUNC_0 (VAR_2))
    {
    case 128:
      return 1;

    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 129:
      return 1;

    default:
      return 0;
    }

  return 0;
}
