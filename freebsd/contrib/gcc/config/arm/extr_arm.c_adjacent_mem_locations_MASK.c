
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (int ) ;

int
FUNC_7 (rtx VAR_5, rtx VAR_6)
{

  if (FUNC_6 (VAR_5) || FUNC_6 (VAR_6))
    return 0;

  if ((FUNC_0 (FUNC_3 (VAR_5, 0)) == VAR_2
       || (FUNC_0 (FUNC_3 (VAR_5, 0)) == VAR_1
    && FUNC_0 (FUNC_3 (FUNC_3 (VAR_5, 0), 1)) == VAR_0))
      && (FUNC_0 (FUNC_3 (VAR_6, 0)) == VAR_2
   || (FUNC_0 (FUNC_3 (VAR_6, 0)) == VAR_1
       && FUNC_0 (FUNC_3 (FUNC_3 (VAR_6, 0), 1)) == VAR_0)))
    {
      HOST_WIDE_INT VAR_7 = 0, VAR_8 = 0;
      rtx VAR_9, VAR_10;
      int VAR_11;

      if (FUNC_0 (FUNC_3 (VAR_5, 0)) == VAR_1)
        {
   VAR_9 = FUNC_3 (FUNC_3 (VAR_5, 0), 0);
   VAR_7 = FUNC_1 (FUNC_3 (FUNC_3 (VAR_5, 0), 1));
        }
      else
 VAR_9 = FUNC_3 (VAR_5, 0);

      if (FUNC_0 (FUNC_3 (VAR_6, 0)) == VAR_1)
        {
   VAR_10 = FUNC_3 (FUNC_3 (VAR_6, 0), 0);
   VAR_8 = FUNC_1 (FUNC_3 (FUNC_3 (VAR_6, 0), 1));
        }
      else
 VAR_10 = FUNC_3 (VAR_6, 0);




      if (!FUNC_5 (VAR_1, VAR_7) || !FUNC_5 (VAR_1, VAR_8))
 return 0;



      if (FUNC_4 (VAR_9))
 return 0;

      VAR_11 = VAR_8 - VAR_7;

      if (VAR_3)
 {



   return (VAR_4 && (FUNC_2 (VAR_9) == FUNC_2 (VAR_10))
    && (VAR_7 == 0 || VAR_8 == 0 || VAR_7 == 4 || VAR_8 == 4)
    && (VAR_11 == 4 || VAR_11 == -4));
 }

      return ((FUNC_2 (VAR_9) == FUNC_2 (VAR_10))
       && (VAR_11 == 4 || VAR_11 == -4));
    }

  return 0;
}
