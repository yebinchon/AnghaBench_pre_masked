
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum lvalue_use { ____Placeholder_lvalue_use } lvalue_use ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;






void
FUNC_2 (enum lvalue_use VAR_0)
{
  switch (VAR_0)
    {
    case 130:
      FUNC_0 ("lvalue required as left operand of assignment");
      break;
    case 128:
      FUNC_0 ("lvalue required as increment operand");
      break;
    case 129:
      FUNC_0 ("lvalue required as decrement operand");
      break;
    case 132:
      FUNC_0 ("lvalue required as unary %<&%> operand");
      break;
    case 131:
      FUNC_0 ("lvalue required in asm statement");
      break;
    default:
      FUNC_1 ();
    }
}
