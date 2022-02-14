
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_expr {int value; int original_code; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ) ;

struct c_expr
FUNC_3 (enum tree_code VAR_1, struct c_expr VAR_2)
{
  struct c_expr VAR_3;

  VAR_3.original_code = VAR_0;
  VAR_3.value = FUNC_1 (VAR_1, VAR_2.value, 0);

  if (FUNC_0 (VAR_3.value) && !FUNC_0 (VAR_2.value))
    FUNC_2 (VAR_3.value);

  return VAR_3;
}
