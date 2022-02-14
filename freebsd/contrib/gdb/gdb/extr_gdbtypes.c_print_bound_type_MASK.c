
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1 (int VAR_0)
{
  switch (VAR_0)
    {
    case 129:
      FUNC_0 ("(BOUND_CANNOT_BE_DETERMINED)");
      break;
    case 132:
      FUNC_0 ("(BOUND_BY_REF_ON_STACK)");
      break;
    case 130:
      FUNC_0 ("(BOUND_BY_VALUE_ON_STACK)");
      break;
    case 133:
      FUNC_0 ("(BOUND_BY_REF_IN_REG)");
      break;
    case 131:
      FUNC_0 ("(BOUND_BY_VALUE_IN_REG)");
      break;
    case 128:
      FUNC_0 ("(BOUND_SIMPLE)");
      break;
    default:
      FUNC_0 ("(unknown bound type)");
      break;
    }
}
