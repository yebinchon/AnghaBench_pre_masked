
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__* VAR_5 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_10 (int ,int ) ;

int
FUNC_11 (rtx VAR_7, int VAR_8, int VAR_9)
{
  int VAR_10;

  if (VAR_4
      && (VAR_8 == 'T' || VAR_8 == 'U'))
    return 0;

  switch (VAR_8)
    {
    case 'Q':
      return FUNC_7 (VAR_7);

    case 'R':
      return FUNC_6 (VAR_7);

    case 'S':
      return FUNC_5 (VAR_7);

    case 'U':
      if (! VAR_9
   || (FUNC_0 (VAR_7) == VAR_3
       && (FUNC_2 (VAR_7) < VAR_0
    || VAR_5[FUNC_2 (VAR_7)] >= 0)))
 return FUNC_9 (VAR_7);

      return 0;

    case 'W':
    case 'T':
      break;

    case 'Y':
      return FUNC_4 (VAR_7, FUNC_1 (VAR_7));

    default:
      return 0;
    }




  if (FUNC_0 (VAR_7) == VAR_1)
    {
      VAR_10 = 0;
      if ((VAR_4 || FUNC_8 (VAR_7, 8))
   && (! VAR_9
       || FUNC_10 (VAR_2, FUNC_3 (VAR_7, 0))))
 VAR_10 = 1;
    }
  else
    {
      VAR_10 = (VAR_6
         && FUNC_0 (VAR_7) == VAR_3
         && FUNC_2 (VAR_7) >= VAR_0
         && VAR_5 [FUNC_2 (VAR_7)] < 0);
    }

  return VAR_10;
}
