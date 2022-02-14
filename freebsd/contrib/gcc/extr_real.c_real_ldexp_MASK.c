
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int cl; int sign; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;





void
FUNC_5 (REAL_VALUE_TYPE *VAR_1, const REAL_VALUE_TYPE *VAR_2, int VAR_3)
{
  *VAR_1 = *VAR_2;
  switch (VAR_1->cl)
    {
    case 128:
    case 131:
    case 130:
      break;

    case 129:
      VAR_3 += FUNC_0 (VAR_2);
      if (VAR_3 > VAR_0)
 FUNC_3 (VAR_1, VAR_1->sign);
      else if (VAR_3 < -VAR_0)
 FUNC_4 (VAR_1, VAR_1->sign);
      else
 FUNC_1 (VAR_1, VAR_3);
      break;

    default:
      FUNC_2 ();
    }
}
