
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_8 (rtx VAR_9, rtx VAR_10)
{
  rtx VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  enum machine_mode VAR_16;

  if (FUNC_0 (VAR_9) == VAR_0)
    {
      VAR_11 = FUNC_4 (VAR_9, 0);
      VAR_12 = FUNC_4 (VAR_9, 1);

      if (FUNC_2 (VAR_11))
 {
   VAR_15 = FUNC_7 (VAR_10, VAR_11, VAR_12);
   if (VAR_15 == VAR_8)
     return 1;
 }

      if (FUNC_2 (VAR_12))
 {
   VAR_15 = FUNC_7 (VAR_10, VAR_12, VAR_11);
   if (VAR_15 == VAR_8)
     return 1;
 }
    }


  if ((FUNC_0 (VAR_9) == VAR_2 || FUNC_0 (VAR_9) == VAR_4)
      && (FUNC_0 (VAR_10) == VAR_1 || FUNC_0 (VAR_10) == VAR_3))
    {
      VAR_11 = FUNC_4 (VAR_9, 0);
      VAR_12 = FUNC_4 (VAR_9, 1);
      VAR_13 = FUNC_4 (VAR_10, 0);
      VAR_14 = FUNC_4 (VAR_10, 1);

      if (FUNC_0 (VAR_9) == VAR_2)
 {
   VAR_15 = VAR_11;
   VAR_11 = VAR_12;
   VAR_12 = VAR_15;
 }

      if (FUNC_0 (VAR_10) == VAR_1)
 {
   VAR_15 = VAR_13;
   VAR_13 = VAR_14;
   VAR_14 = VAR_15;
 }

      VAR_16 = FUNC_1 (VAR_11);
      if (VAR_16 != FUNC_1 (VAR_13))
 VAR_16 = VAR_6;
      else if (VAR_16 == VAR_6)
 {
   VAR_16 = FUNC_1 (VAR_12);
   if (VAR_16 != FUNC_1 (VAR_14))
     VAR_16 = VAR_6;
 }

      if (FUNC_3 (VAR_16)
   && FUNC_5 (VAR_12, VAR_14)
   && FUNC_6 (VAR_5, VAR_16, VAR_13, VAR_11) == VAR_7)
 return 1;
    }

  return 0;
}
