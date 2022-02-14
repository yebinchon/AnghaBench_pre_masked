
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ X_op; int * X_op_symbol; } ;
struct TYPE_9__ {TYPE_1__ sy_value; scalar_t__ sy_resolved; } ;
typedef TYPE_2__ symbolS ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

int
FUNC_4 (symbolS *VAR_1)
{
  if (FUNC_0 (VAR_1))
    return 0;



  return (VAR_1->sy_value.X_op == VAR_0



   && ((VAR_1->sy_resolved && VAR_1->sy_value.X_op_symbol != ((void*)0))
       || ! FUNC_2 (VAR_1)
       || FUNC_1 (VAR_1)));
}
