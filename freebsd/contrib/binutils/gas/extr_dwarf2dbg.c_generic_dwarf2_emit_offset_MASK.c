
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_3__ {scalar_t__ X_add_number; int * X_add_symbol; int X_op; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static void
FUNC_1 (symbolS *VAR_1, unsigned int VAR_2)
{
  expressionS VAR_3;

  VAR_3.X_op = VAR_0;
  VAR_3.X_add_symbol = VAR_1;
  VAR_3.X_add_number = 0;
  FUNC_0 (&VAR_3, VAR_2);
}
