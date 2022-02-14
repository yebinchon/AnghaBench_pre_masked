
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int valueT ;
struct TYPE_10__ {scalar_t__ X_op; int X_add_number; TYPE_2__* X_add_symbol; } ;
struct TYPE_11__ {TYPE_1__ sy_value; int sy_resolved; } ;
typedef TYPE_2__ symbolS ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_2__*) ;

valueT
FUNC_8 (symbolS *VAR_3)
{
  if (FUNC_0 (VAR_3))
    return FUNC_7 (VAR_3);

  if (!VAR_3->sy_resolved)
    {
      valueT VAR_4 = FUNC_7 (VAR_3);
      if (!VAR_2)
 return VAR_4;
    }
  if (FUNC_4 (VAR_3))
    return FUNC_8 (VAR_3->sy_value.X_add_symbol);

  if (VAR_3->sy_value.X_op != VAR_0)
    {
      if (! VAR_3->sy_resolved
   || VAR_3->sy_value.X_op != VAR_1
   || (FUNC_3 (VAR_3) && ! FUNC_2 (VAR_3)))
 FUNC_6 (FUNC_5("attempt to get value of unresolved symbol `%s'"),
  FUNC_1 (VAR_3));
    }
  return (valueT) VAR_3->sy_value.X_add_number;
}
