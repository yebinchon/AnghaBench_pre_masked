
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {int * parray; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static bool
FUNC_8 (tree VAR_3, int VAR_4)
{
  if (FUNC_6 (VAR_3))
    return 1;

  if (FUNC_3 (VAR_3) == VAR_1
      && FUNC_7 (VAR_2->parray[VAR_4],
       VAR_3))
    return 1;

  if (FUNC_3 (VAR_3) == VAR_0)
    {
      if (FUNC_2 (VAR_3) == (unsigned) VAR_4
   || !FUNC_8 (FUNC_1 (VAR_3),
           VAR_4)
   || !FUNC_8 (FUNC_0 (VAR_3),
           VAR_4))
 return 0;
      return 1;
    }

  switch (FUNC_4 (FUNC_3 (VAR_3)))
    {
    case 2:
      if (!FUNC_8 (FUNC_5 (VAR_3, 1),
        VAR_4))
 return 0;

    case 1:
      if (!FUNC_8 (FUNC_5 (VAR_3, 0),
        VAR_4))
 return 0;
      return 1;

    default:
      return 0;
    }

  return 0;
}
