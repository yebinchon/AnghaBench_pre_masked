
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cl; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 () ;





int
FUNC_2 (const REAL_VALUE_TYPE *VAR_0)
{
  switch (VAR_0->cl)
    {
    case 128:
      return 0;
    case 131:
    case 130:
      return (unsigned int)-1 >> 1;
    case 129:
      return FUNC_0 (VAR_0);
    default:
      FUNC_1 ();
    }
}
