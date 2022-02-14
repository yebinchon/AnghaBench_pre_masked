
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int const FUNC_1 (struct type*) ;






 int const VAR_0 ;


 int const VAR_1 ;
 struct type* FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;

__attribute__((used)) static int
FUNC_4 (struct type *VAR_2, struct type *VAR_3, int VAR_4)
{
  FUNC_0 (VAR_2);
  FUNC_0 (VAR_3);

  if (FUNC_1 (VAR_2) == VAR_0)
    VAR_2 = FUNC_2 (VAR_2);
  if (FUNC_1 (VAR_3) == VAR_0)
    VAR_3 = FUNC_2 (VAR_3);

  if (FUNC_1 (VAR_2) == VAR_1
      || FUNC_1 (VAR_3) == VAR_1)
    return 1;

  switch (FUNC_1 (VAR_2))
    {
    default:
      return 1;
    case 131:
      if (FUNC_1 (VAR_3) == 131)
 return FUNC_4 (FUNC_2 (VAR_2),
          FUNC_2 (VAR_3), 0);
      else
 return (VAR_4 &&
  FUNC_4 (FUNC_2 (VAR_2), VAR_3, 0));
    case 132:
    case 134:
    case 130:
      switch (FUNC_1 (VAR_3))
 {
 case 132:
 case 134:
 case 130:
   return 1;
 default:
   return 0;
 }

    case 135:
      return (FUNC_1 (VAR_3) == 135
       || FUNC_3 (VAR_3));

    case 129:
      if (FUNC_3 (VAR_2))
 return (FUNC_1 (VAR_3) == 135
  || FUNC_3 (VAR_3));
      else
 return (FUNC_1 (VAR_3) == 129
  && !FUNC_3 (VAR_3));

    case 128:
    case 133:
      return (FUNC_1 (VAR_3) == FUNC_1 (VAR_2));
    }
}
