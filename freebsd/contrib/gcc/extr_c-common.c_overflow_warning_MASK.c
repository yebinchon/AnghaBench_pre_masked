
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;




 int VAR_0 ;

 int const FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3 (tree VAR_2)
{
  if (VAR_1) return;

  switch (FUNC_0 (VAR_2))
    {
    case 130:
      FUNC_2 (VAR_0, "integer overflow in expression");
      break;

    case 129:
      FUNC_2 (VAR_0, "floating point overflow in expression");
      break;

    case 128:
      FUNC_2 (VAR_0, "vector overflow in expression");
      break;

    case 131:
      if (FUNC_0 (FUNC_1 (VAR_2)) == 130)
 FUNC_2 (VAR_0, "complex integer overflow in expression");
      else if (FUNC_0 (FUNC_1 (VAR_2)) == 129)
 FUNC_2 (VAR_0, "complex floating point overflow in expression");
      break;

    default:
      break;
    }
}
