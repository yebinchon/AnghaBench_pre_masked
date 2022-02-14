
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_expr {scalar_t__ value; void* original_code; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int) ;

struct c_expr
FUNC_6 (struct c_expr VAR_3)
{
  struct c_expr VAR_4;
  if (VAR_3.value == VAR_2)
    {
      VAR_4.value = VAR_2;
      VAR_4.original_code = VAR_1;
      FUNC_5 (0);
    }
  else
    {
      VAR_4.value = FUNC_3 (FUNC_1 (VAR_3.value));
      VAR_4.original_code = VAR_1;
      if (FUNC_4 (FUNC_1 (VAR_3.value)))
 {

   VAR_4.value = FUNC_2 (VAR_0, FUNC_1 (VAR_4.value), VAR_3.value, VAR_4.value);
 }
      FUNC_5 (FUNC_0 (FUNC_1 (VAR_3.value)));
    }
  return VAR_4;
}
