
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ X_op; } ;
struct TYPE_6__ {TYPE_1__ sy_value; } ;
typedef TYPE_2__ symbolS ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;

int
FUNC_1 (symbolS *VAR_1)
{
  if (FUNC_0 (VAR_1))
    return 0;
  return VAR_1->sy_value.X_op == VAR_0;
}
