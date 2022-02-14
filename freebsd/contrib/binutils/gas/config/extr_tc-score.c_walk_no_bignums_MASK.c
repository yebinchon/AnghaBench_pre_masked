
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_2__ {scalar_t__ X_op; int * X_op_symbol; int * X_add_symbol; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1 (symbolS * VAR_1)
{
  if (FUNC_0 (VAR_1)->X_op == VAR_0)
    return 1;

  if (FUNC_0 (VAR_1)->X_add_symbol)
    return (FUNC_1 (FUNC_0 (VAR_1)->X_add_symbol)
     || (FUNC_0 (VAR_1)->X_op_symbol
  && FUNC_1 (FUNC_0 (VAR_1)->X_op_symbol)));

  return 0;
}
