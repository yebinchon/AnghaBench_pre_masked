
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int non_integral_constant_expression_p; int allow_non_integral_constant_expression_p; scalar_t__ integral_constant_expression_p; } ;
typedef TYPE_1__ cp_parser ;


 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static bool
FUNC_1 (cp_parser *VAR_0,
         const char *VAR_1)
{
  VAR_0->non_integral_constant_expression_p = 1;
  if (VAR_0->integral_constant_expression_p)
    {
      if (!VAR_0->allow_non_integral_constant_expression_p)
 {
   FUNC_0 ("%s cannot appear in a constant-expression", VAR_1);
   return 1;
 }
    }
  return 0;
}
