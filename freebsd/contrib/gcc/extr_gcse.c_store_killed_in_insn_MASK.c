
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool
FUNC_16 (rtx VAR_5, rtx VAR_6, rtx VAR_7, int VAR_8)
{
  rtx VAR_9, VAR_10, VAR_11;

  if (!FUNC_4 (VAR_7))
    return 0;

  if (FUNC_0 (VAR_7))
    {


      if (! FUNC_1 (VAR_7) || FUNC_15 (VAR_7))
 return 1;



      for (VAR_9 = VAR_6; VAR_9; VAR_9 = FUNC_9 (VAR_9, 1))
 {
   VAR_10 = FUNC_11 (FUNC_9 (VAR_9, 0));
   if (!VAR_10
       || (FUNC_2 (VAR_10) == VAR_0
    && FUNC_3 (VAR_10) == VAR_1
    && FUNC_9 (VAR_10, 0) == VAR_4))
     return 1;
 }

      return 0;
    }

  if (FUNC_2 (FUNC_6 (VAR_7)) == VAR_2)
    {
      rtx VAR_12 = FUNC_6 (VAR_7);
      rtx VAR_13 = FUNC_7 (VAR_12);

      if (FUNC_2 (VAR_13) == VAR_3)
 VAR_13 = FUNC_9 (VAR_13, 0);


      if (FUNC_5 (VAR_13)
   && !FUNC_10 (VAR_13, VAR_5))
 {
   if (VAR_8)
     {
       if (FUNC_14 (VAR_13, VAR_5))
  return 1;
     }
   else
     {
       if (FUNC_14 (VAR_5, VAR_13))
  return 1;
     }
 }
      if (FUNC_12 (FUNC_8 (VAR_12), VAR_5, VAR_8))
 return 1;
    }
  else if (FUNC_12 (FUNC_6 (VAR_7), VAR_5, VAR_8))
    return 1;



  VAR_11 = FUNC_13 (VAR_7);
  if (! VAR_11)
    return 0;
  VAR_11 = FUNC_9 (VAR_11, 0);



  if (FUNC_10 (VAR_11, VAR_5))
    return 0;


  return FUNC_12 (VAR_11, VAR_5, VAR_8);
}
