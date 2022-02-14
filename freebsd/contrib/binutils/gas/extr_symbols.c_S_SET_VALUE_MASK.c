
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ valueT ;
struct TYPE_6__ {scalar_t__ X_unsigned; scalar_t__ X_add_number; int X_op; } ;
struct TYPE_7__ {TYPE_1__ sy_value; } ;
typedef TYPE_2__ symbolS ;
struct local_symbol {scalar_t__ lsy_value; } ;
typedef scalar_t__ offsetT ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2 (symbolS *VAR_1, valueT VAR_2)
{
  if (FUNC_0 (VAR_1))
    {
      ((struct local_symbol *) VAR_1)->lsy_value = VAR_2;
      return;
    }

  VAR_1->sy_value.X_op = VAR_0;
  VAR_1->sy_value.X_add_number = (offsetT) VAR_2;
  VAR_1->sy_value.X_unsigned = 0;
  FUNC_1 (VAR_1);
}
