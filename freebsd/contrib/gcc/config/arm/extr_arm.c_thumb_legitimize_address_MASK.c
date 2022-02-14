
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;

rtx
FUNC_12 (rtx VAR_6, rtx VAR_7, enum machine_mode VAR_8)
{
  if (FUNC_4 (VAR_6))
    return FUNC_9 (VAR_6, VAR_1);

  if (FUNC_0 (VAR_6) == VAR_2
      && FUNC_0 (FUNC_3 (VAR_6, 1)) == VAR_0
      && (FUNC_2 (FUNC_3 (VAR_6, 1)) >= 32 * FUNC_1 (VAR_8)
   || FUNC_2 (FUNC_3 (VAR_6, 1)) < 0))
    {
      rtx VAR_9 = FUNC_3 (VAR_6, 0);
      rtx VAR_10 = FUNC_3 (VAR_6, 1);
      HOST_WIDE_INT VAR_11 = FUNC_2 (VAR_10);




      if (VAR_5 && VAR_11 >= 0
   && VAR_11 < 256 + 31 * FUNC_1 (VAR_8))
 {
   HOST_WIDE_INT VAR_12;

   if (VAR_11 >= 256)
     VAR_12 = VAR_11 - (256 - FUNC_1 (VAR_8));
   else if (VAR_11 < 32 * FUNC_1 (VAR_8) + 8)
     VAR_12 = 31 * FUNC_1 (VAR_8);
   else
     VAR_12 = VAR_11 & (~31 * FUNC_1 (VAR_8));

   VAR_9 = FUNC_5 (FUNC_10 (VAR_9, VAR_11 - VAR_12),
    VAR_1);
   VAR_6 = FUNC_10 (VAR_9, VAR_12);
 }
      else if (VAR_11 < 0 && VAR_11 > -256)



 VAR_6 = FUNC_5 (VAR_6, VAR_1);
      else
 {

   VAR_10 = FUNC_6 (VAR_3, VAR_10);
   VAR_6 = FUNC_7 (VAR_3, VAR_9, VAR_10);
 }
    }
  else if (FUNC_0 (VAR_6) == VAR_2
    && FUNC_11 (FUNC_3 (VAR_6, 1), VAR_3)
    && !FUNC_11 (FUNC_3 (VAR_6, 0), VAR_3))
    {
      rtx VAR_13 = FUNC_5 (FUNC_3 (VAR_6, 0), VAR_1);

      VAR_6 = FUNC_7 (VAR_3, VAR_13, FUNC_3 (VAR_6, 1));
    }

  if (VAR_4)
    {


      rtx VAR_14 = FUNC_8 (VAR_7, VAR_8, VAR_1);

      if (VAR_14 != VAR_7)
 VAR_6 = VAR_14;
    }

  return VAR_6;
}
