
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (scalar_t__,int ,int ) ;
 int FUNC_14 (scalar_t__,int ,int ) ;
 int FUNC_15 (int ,scalar_t__,int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_17 (int ,int) ;
 scalar_t__ FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (int ,int ) ;

bool
FUNC_20 (rtx VAR_8, rtx VAR_9)
{
  FUNC_8 (FUNC_1 (VAR_8) == VAR_2);





  if (FUNC_2 (VAR_8) != VAR_1)
    VAR_8 = FUNC_15 (VAR_8, VAR_1, FUNC_4 (VAR_8), 0);

  if (VAR_5)
    return 0;
  if (FUNC_19 (VAR_9, VAR_6))
    return 0;

  if (VAR_4)
    FUNC_7 (FUNC_11 (VAR_8, VAR_9));
  else if (FUNC_1 (VAR_9) == VAR_3 && FUNC_5 (VAR_9))
    FUNC_7 (FUNC_9 (VAR_8, VAR_9));
  else if (FUNC_18 (VAR_9, VAR_6))
    FUNC_7 (FUNC_10 (VAR_8, VAR_9));
  else
    {
      HOST_WIDE_INT VAR_10 = 0;
      rtx VAR_11;






      if (FUNC_1 (VAR_9) == VAR_0)
 {
   HOST_WIDE_INT VAR_12, VAR_13;

   VAR_12 = FUNC_3 (FUNC_6 (FUNC_6 (VAR_9, 0), 1));
   VAR_13 = ((VAR_12 & 0x3fff) ^ 0x2000) - 0x2000;
   VAR_12 = VAR_12 - VAR_13;

   if (VAR_13 != 0)
     {
       VAR_10 = VAR_13;
       VAR_9 = FUNC_17 (FUNC_6 (FUNC_6 (VAR_9, 0), 0), VAR_12);
     }
 }

      VAR_11 = FUNC_12 (VAR_1, VAR_9);
      VAR_11 = FUNC_14 (VAR_1, VAR_11, VAR_7);
      FUNC_7 (FUNC_16 (VAR_6, VAR_8, VAR_11));

      VAR_11 = FUNC_13 (VAR_1, VAR_8, VAR_9);
      FUNC_7 (FUNC_16 (VAR_6, VAR_8, VAR_11));

      if (VAR_10)
 {
   VAR_11 = FUNC_14 (VAR_1, VAR_8, FUNC_0 (VAR_10));
   FUNC_7 (FUNC_16 (VAR_6, VAR_8, VAR_11));
 }
    }

  return 1;
}
