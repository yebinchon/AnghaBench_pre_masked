
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * X_add_symbol; int X_add_number; int * X_op_symbol; int X_op; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4 (int VAR_3, expressionS *VAR_4)
{
  expressionS VAR_5;

  VAR_5.X_op = VAR_2;
  VAR_5.X_op_symbol = ((void*)0);
  VAR_5.X_add_symbol = ((void*)0);
  VAR_5.X_add_number = VAR_4->X_add_number;

  FUNC_2 (VAR_4->X_add_symbol);
  FUNC_0 (&VAR_5, VAR_0, "t,r,j",
        VAR_3, VAR_3, VAR_1);
  FUNC_3 ();
  FUNC_0 (VAR_4, VAR_0, "t,r,j", VAR_3, VAR_3, VAR_1);
  FUNC_1 ();
}
