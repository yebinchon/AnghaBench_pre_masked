
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

rtx
FUNC_11 (rtx VAR_3)
{

  if (FUNC_5 (VAR_3) && FUNC_4 (VAR_3) >= VAR_1)
    {
      rtx VAR_4 = FUNC_8 (FUNC_4 (VAR_3));
      if (VAR_4 == VAR_3)
 return VAR_3;
      if (VAR_4)
 return FUNC_11 (VAR_4);
    }

  if (FUNC_0 (VAR_3) == VAR_2)
    {
      rtx VAR_5 = FUNC_11 (FUNC_6 (VAR_3, 0));
      rtx VAR_6 = FUNC_11 (FUNC_6 (VAR_3, 1));

      if (VAR_5 != FUNC_6 (VAR_3, 0) || VAR_6 != FUNC_6 (VAR_3, 1))
 {
   if (FUNC_0 (VAR_5) == VAR_0)
     return FUNC_9 (VAR_6, FUNC_2 (VAR_5));
   else if (FUNC_0 (VAR_6) == VAR_0)
     return FUNC_9 (VAR_5, FUNC_2 (VAR_6));
   return FUNC_7 (FUNC_1 (VAR_3), VAR_5, VAR_6);
 }
    }





  else if (FUNC_3 (VAR_3))
    VAR_3 = FUNC_10 (VAR_3, FUNC_11 (FUNC_6 (VAR_3, 0)));

  return VAR_3;
}
