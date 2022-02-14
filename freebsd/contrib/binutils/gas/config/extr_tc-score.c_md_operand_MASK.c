
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int X_op; } ;
typedef TYPE_1__ expressionS ;
struct TYPE_5__ {int * error; } ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;

void
FUNC_1 (expressionS * VAR_3)
{
  if (VAR_1)
    {
      VAR_3->X_op = VAR_0;
      if (VAR_2.error == ((void*)0))
        {
          VAR_2.error = FUNC_0("bad expression");
        }
    }
}
