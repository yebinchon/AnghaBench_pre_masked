
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolS ;
typedef int offsetT ;
struct TYPE_3__ {int X_unsigned; int X_add_number; int X_op; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;

symbolS *
FUNC_1 (offsetT VAR_1)
{
  expressionS VAR_2;

  VAR_2.X_op = VAR_0;
  VAR_2.X_add_number = VAR_1;
  VAR_2.X_unsigned = 1;
  return FUNC_0 (&VAR_2);
}
