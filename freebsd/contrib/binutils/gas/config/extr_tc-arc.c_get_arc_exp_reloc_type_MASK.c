
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ X_op; scalar_t__ X_add_number; TYPE_3__* X_add_symbol; TYPE_2__* X_op_symbol; } ;
typedef TYPE_4__ expressionS ;
struct TYPE_9__ {TYPE_4__ sy_value; } ;
struct TYPE_7__ {scalar_t__ X_op; int X_add_number; } ;
struct TYPE_8__ {TYPE_1__ sy_value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static int
FUNC_0 (int VAR_6,
   int VAR_7,
   expressionS *VAR_8,
   expressionS *VAR_9)
{





  if (VAR_8->X_op == VAR_2
      && VAR_8->X_op_symbol != ((void*)0)
      && VAR_8->X_op_symbol->sy_value.X_op == VAR_1
      && VAR_8->X_op_symbol->sy_value.X_add_number == 2
      && VAR_8->X_add_number == 0)
    {
      if (VAR_8->X_add_symbol != ((void*)0)
   && (VAR_8->X_add_symbol->sy_value.X_op == VAR_1
       || VAR_8->X_add_symbol->sy_value.X_op == VAR_4))
 {
   *VAR_9 = *VAR_8;
   VAR_9->X_op = VAR_4;
   VAR_9->X_op_symbol = ((void*)0);
   return VAR_6 ? VAR_0 : VAR_5['J'];
 }
      else if (VAR_8->X_add_symbol != ((void*)0)
        && VAR_8->X_add_symbol->sy_value.X_op == VAR_3)
 {
   *VAR_9 = VAR_8->X_add_symbol->sy_value;
   return VAR_6 ? VAR_0 : VAR_5['J'];
 }
    }

  *VAR_9 = *VAR_8;
  return VAR_7;
}
