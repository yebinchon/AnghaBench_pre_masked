
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int X_op; int X_add_number; } ;
typedef TYPE_1__ expressionS ;




 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 char FUNC_4 () ;
 char* VAR_0 ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static unsigned
FUNC_7 (void)
{
  int VAR_1;
  expressionS VAR_2;
  FUNC_3 (&VAR_2);
  switch (VAR_2.X_op)
    {
    case 128:
    case 129:
      VAR_1 = VAR_2.X_add_number;
      break;

    default:
      FUNC_2 (FUNC_1("bad register expression"));
      VAR_1 = 0;
      break;
    }

  return VAR_1;
}
