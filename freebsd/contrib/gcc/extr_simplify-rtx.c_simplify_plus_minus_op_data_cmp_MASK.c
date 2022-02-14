
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simplify_plus_minus_op_data {int op; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (const void *VAR_0, const void *VAR_1)
{
  const struct simplify_plus_minus_op_data *VAR_2 = VAR_0;
  const struct simplify_plus_minus_op_data *VAR_3 = VAR_1;
  int VAR_4;

  VAR_4 = (FUNC_2 (VAR_3->op)
     - FUNC_2 (VAR_2->op));
  if (VAR_4)
    return VAR_4;


  if (FUNC_1 (VAR_2->op) && FUNC_1 (VAR_3->op))
    return FUNC_0 (VAR_2->op) - FUNC_0 (VAR_3->op);
  else
    return 0;
}
