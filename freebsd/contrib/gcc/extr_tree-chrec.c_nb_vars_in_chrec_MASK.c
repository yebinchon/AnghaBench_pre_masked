
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;

 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

unsigned
FUNC_3 (tree VAR_1)
{
  if (VAR_1 == VAR_0)
    return 0;

  switch (FUNC_1 (VAR_1))
    {
    case 128:
      return 1 + FUNC_3
 (FUNC_2 (VAR_1, FUNC_0 (VAR_1)));

    default:
      return 0;
    }
}
