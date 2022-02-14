
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* X_op_symbol; TYPE_3__* X_add_symbol; } ;
struct TYPE_14__ {int sy_resolving; TYPE_2__ sy_value; scalar_t__ sy_forward_ref; TYPE_1__* bsym; } ;
typedef TYPE_3__ symbolS ;
struct TYPE_12__ {scalar_t__ section; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_3 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_4 (int ) ;

symbolS *
FUNC_5 (symbolS *VAR_1, int VAR_2)
{
  if (VAR_1 && !FUNC_0 (VAR_1))
    {
      symbolS *VAR_3 = VAR_1->sy_value.X_add_symbol;
      symbolS *VAR_4 = VAR_1->sy_value.X_op_symbol;

      if (VAR_1->sy_forward_ref)
 VAR_2 = 1;

      if (VAR_2)
 {



   if (VAR_3 && FUNC_2 (VAR_3))
     VAR_3 = FUNC_4 (FUNC_1 (VAR_3));
   if (VAR_4 && FUNC_2 (VAR_4))
     VAR_4 = FUNC_4 (FUNC_1 (VAR_4));
 }



      if (VAR_1->bsym->section == VAR_0 && !VAR_1->sy_resolving)
 {
   VAR_1->sy_resolving = 1;
   VAR_3 = FUNC_5 (VAR_3, VAR_2);
   VAR_4 = FUNC_5 (VAR_4, VAR_2);
   VAR_1->sy_resolving = 0;
 }

      if (VAR_1->sy_forward_ref
   || VAR_3 != VAR_1->sy_value.X_add_symbol
   || VAR_4 != VAR_1->sy_value.X_op_symbol)
 VAR_1 = FUNC_3 (VAR_1, 0);

      VAR_1->sy_value.X_add_symbol = VAR_3;
      VAR_1->sy_value.X_op_symbol = VAR_4;
    }

  return VAR_1;
}
