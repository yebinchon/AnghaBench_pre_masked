
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_6__ {int * X_add_symbol; scalar_t__ X_add_number; int X_op_symbol; int X_op; } ;
typedef TYPE_2__ expressionS ;
struct TYPE_5__ {int sym; } ;
struct TYPE_7__ {TYPE_1__ u; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,unsigned int) ;
 TYPE_3__* VAR_2 ;

void
FUNC_1 (symbolS *VAR_3, unsigned int VAR_4)
{
  expressionS VAR_5;

  VAR_5.X_op = VAR_1;
  VAR_5.X_op_symbol = VAR_2[VAR_0].u.sym;
  VAR_5.X_add_number = 0;
  VAR_5.X_add_symbol = VAR_3;
  FUNC_0 (&VAR_5, VAR_4);
}
