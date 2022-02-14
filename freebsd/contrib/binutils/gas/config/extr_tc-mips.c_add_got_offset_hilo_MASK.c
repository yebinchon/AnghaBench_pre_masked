
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * X_add_symbol; int X_add_number; int * X_op_symbol; int X_op; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6 (int VAR_6, expressionS *VAR_7, int VAR_8)
{
  expressionS VAR_9;
  int VAR_10;

  VAR_9.X_op = VAR_4;
  VAR_9.X_op_symbol = ((void*)0);
  VAR_9.X_add_symbol = ((void*)0);
  VAR_9.X_add_number = VAR_7->X_add_number;

  FUNC_4 (VAR_7->X_add_symbol);
  FUNC_0 (VAR_8, &VAR_9, VAR_3);
  FUNC_5 ();


  VAR_10 = VAR_5;
  VAR_5 = 2;
  FUNC_2 (&VAR_9, VAR_8);
  VAR_5 = VAR_10;
  FUNC_1 (VAR_7, VAR_0, "t,r,j", VAR_8, VAR_8, VAR_2);
  FUNC_3 ();

  FUNC_1 (((void*)0), VAR_1, "d,v,t", VAR_6, VAR_6, VAR_8);
}
