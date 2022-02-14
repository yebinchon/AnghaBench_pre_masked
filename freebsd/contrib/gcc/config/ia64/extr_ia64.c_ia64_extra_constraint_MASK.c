
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,char) ;
 int FUNC_10 (int,char) ;
 int FUNC_11 (int ,int ) ;
 int VAR_8 ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (int ,int ) ;

bool
FUNC_14 (rtx VAR_9, char VAR_10)
{
  switch (VAR_10)
    {
    case 'Q':

      return FUNC_11(VAR_9, VAR_7) && !FUNC_6 (VAR_9);

    case 'R':

      return (FUNC_1 (VAR_9) == VAR_0
       && FUNC_5 (VAR_9) >= 1 && FUNC_5 (VAR_9) <= 4);

    case 'S':

      return (FUNC_1 (VAR_9) == VAR_3
       && FUNC_4 (FUNC_1 (FUNC_7 (VAR_9, 0))) != VAR_5
       && (VAR_8 || FUNC_11 (VAR_9, VAR_7)));

    case 'T':

      return FUNC_13 (VAR_9, VAR_7);

    case 'U':

      return VAR_9 == FUNC_0 (FUNC_2 (VAR_9));

    case 'W':


      if (FUNC_1 (VAR_9) == VAR_1
   && FUNC_3 (FUNC_2 (VAR_9)) == VAR_4)
 {
   VAR_9 = FUNC_12 (VAR_2, VAR_9, FUNC_2 (VAR_9), 0);
   return FUNC_10 (FUNC_5 (VAR_9), 'J');
 }
      return 0;

    case 'Y':

      return
 (FUNC_1 (VAR_9) == VAR_1
  && FUNC_2 (VAR_9) == VAR_6
  && FUNC_9 (FUNC_8 (VAR_9, 0, 0), 'G')
  && FUNC_9 (FUNC_8 (VAR_9, 0, 1), 'G'));

    default:
      return 0;
    }
}
