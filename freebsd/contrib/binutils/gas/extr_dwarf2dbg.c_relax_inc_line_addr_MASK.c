
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_3__ {scalar_t__ X_add_number; int * X_op_symbol; int * X_add_symbol; int X_op; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int,int ,int,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3 (int VAR_3, symbolS *VAR_4, symbolS *VAR_5)
{
  expressionS VAR_6;
  int VAR_7;

  VAR_6.X_op = VAR_1;
  VAR_6.X_add_symbol = VAR_4;
  VAR_6.X_op_symbol = VAR_5;
  VAR_6.X_add_number = 0;



  VAR_7 = FUNC_2 (VAR_3, -VAR_0);

  FUNC_0 (VAR_2, VAR_7, VAR_7, 1,
     FUNC_1 (&VAR_6), VAR_3, ((void*)0));
}
