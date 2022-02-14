
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_3__ {scalar_t__ X_add_number; int * X_op_symbol; int * X_add_symbol; void* X_op; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (int VAR_7, symbolS *VAR_8, symbolS *VAR_9)
{
  expressionS VAR_10;


  if (VAR_7 == VAR_5)
    {
      FUNC_2 (VAR_4);
      VAR_10.X_op = VAR_6;
      VAR_10.X_add_symbol = VAR_8;
      VAR_10.X_op_symbol = VAR_9;
      VAR_10.X_add_number = 0;
      FUNC_0 (&VAR_10, 2);

      FUNC_2 (VAR_3);
      FUNC_1 (1);
      FUNC_2 (VAR_0);
      return;
    }

  FUNC_2 (VAR_1);
  FUNC_3 (VAR_7);

  FUNC_2 (VAR_4);
  VAR_10.X_op = VAR_6;
  VAR_10.X_add_symbol = VAR_8;
  VAR_10.X_op_symbol = VAR_9;
  VAR_10.X_add_number = 0;
  FUNC_0 (&VAR_10, 2);

  FUNC_2 (VAR_2);
}
