
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct c_type_name {int dummy; } ;
struct c_expr {int original_code; int value; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct c_type_name*) ;
 int FUNC_3 (int) ;

struct c_expr
FUNC_4 (struct c_type_name *VAR_2)
{
  tree VAR_3;
  struct c_expr VAR_4;
  VAR_3 = FUNC_2 (VAR_2);
  VAR_4.value = FUNC_1 (VAR_3);
  VAR_4.original_code = VAR_0;
  FUNC_3 (VAR_3 != VAR_1
    ? FUNC_0 (VAR_3) : 0);
  return VAR_4;
}
