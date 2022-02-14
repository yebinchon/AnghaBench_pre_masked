
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {int integral_constant_expression_p; int allow_non_integral_constant_expression_p; int non_integral_constant_expression_p; } ;
typedef TYPE_1__ cp_parser ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;

__attribute__((used)) static tree
FUNC_1 (cp_parser* VAR_1,
          bool VAR_2,
          bool *VAR_3)
{
  bool VAR_4;
  bool VAR_5;
  bool VAR_6;
  tree VAR_7;
  VAR_4 = VAR_1->integral_constant_expression_p;
  VAR_5
    = VAR_1->allow_non_integral_constant_expression_p;
  VAR_6 = VAR_1->non_integral_constant_expression_p;

  VAR_1->integral_constant_expression_p = 1;
  VAR_1->allow_non_integral_constant_expression_p = VAR_2;
  VAR_1->non_integral_constant_expression_p = 0;
  VAR_7 = FUNC_0 (VAR_1, 0);

  VAR_1->integral_constant_expression_p
    = VAR_4;
  VAR_1->allow_non_integral_constant_expression_p
    = VAR_5;
  if (VAR_2)
    *VAR_3 = VAR_1->non_integral_constant_expression_p;
  else if (VAR_1->non_integral_constant_expression_p)
    VAR_7 = VAR_0;
  VAR_1->non_integral_constant_expression_p
    = VAR_6;

  return VAR_7;
}
