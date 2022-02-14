
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int X_add_number; int X_op; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (int *,char*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3 (expressionS *VAR_5)
{

  int VAR_6;

  VAR_6 = FUNC_2 (&VAR_4, ".", VAR_1,
        &VAR_3);

  if (VAR_6)
    {
      if (VAR_6 == VAR_0)
 {
   FUNC_1 (FUNC_0("bad floating-point constant: exponent overflow"));
 }
      else
 {
   FUNC_1 (FUNC_0("bad floating-point constant: unknown error code=%d"),
    VAR_6);
 }
    }
  VAR_5->X_op = VAR_2;


  VAR_5->X_add_number = -1;
}
