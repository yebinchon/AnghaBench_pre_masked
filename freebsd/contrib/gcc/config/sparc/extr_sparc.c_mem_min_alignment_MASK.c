
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

int
FUNC_7 (rtx VAR_15, int VAR_16)
{
  rtx VAR_17, VAR_18, VAR_19;


  if (FUNC_1 (VAR_15) != VAR_4)
    return 0;


  if (!VAR_10
      && FUNC_3 (VAR_15) / VAR_0 >= (unsigned)VAR_16)
    return 1;



  VAR_17 = FUNC_6 (VAR_15, 0);
  VAR_18 = VAR_19 = VAR_5;
  if (FUNC_1 (VAR_17) == VAR_6)
    {
      if (FUNC_1 (FUNC_6 (VAR_17, 0)) == VAR_7)
 {
   VAR_18 = FUNC_6 (VAR_17, 0);





   if (FUNC_1 (FUNC_6 (VAR_17, 1)) == VAR_1)
     VAR_19 = FUNC_6 (VAR_17, 1);
   else
     VAR_19 = VAR_12;
 }
    }
  else if (FUNC_1 (VAR_17) == VAR_7)
    {
      VAR_18 = VAR_17;
      VAR_19 = VAR_12;
    }

  if (VAR_18 != VAR_5)
    {
      int VAR_20 = FUNC_4 (VAR_18);

      if (VAR_20 != VAR_2 && VAR_20 != VAR_9)
 {





   if (((VAR_11 != 0
  && FUNC_5 (VAR_20) >= VAR_16 * VAR_0)
        || (VAR_13 && VAR_14))
       && (FUNC_2 (VAR_19) & (VAR_16 - 1)) == 0)
     return 1;
 }
      else
 {
   if (((FUNC_2 (VAR_19) - VAR_8) & (VAR_16 - 1)) == 0)
     return 1;
 }
    }
  else if (! VAR_10
    || FUNC_0 (VAR_17)
    || FUNC_1 (VAR_17) == VAR_3)
    {



      return 1;
    }


  return 0;
}
