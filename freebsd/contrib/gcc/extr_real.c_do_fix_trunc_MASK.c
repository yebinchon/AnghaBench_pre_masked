
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int cl; int sign; int decimal; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ) ;





__attribute__((used)) static void
FUNC_5 (REAL_VALUE_TYPE *VAR_1, const REAL_VALUE_TYPE *VAR_2)
{
  *VAR_1 = *VAR_2;

  switch (VAR_1->cl)
    {
    case 128:
    case 131:
    case 130:
      break;

    case 129:
      if (VAR_1->decimal)
 {
   FUNC_2 (VAR_1, VAR_2);
   return;
 }
      if (FUNC_0 (VAR_1) <= 0)
 FUNC_4 (VAR_1, VAR_1->sign);
      else if (FUNC_0 (VAR_1) < VAR_0)
 FUNC_1 (VAR_1, VAR_0 - FUNC_0 (VAR_1));
      break;

    default:
      FUNC_3 ();
    }
}
