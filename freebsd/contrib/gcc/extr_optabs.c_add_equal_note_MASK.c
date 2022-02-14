
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,int ,int ) ;
 scalar_t__ FUNC_11 (int,int ,int ,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;

__attribute__((used)) static int
FUNC_17 (rtx VAR_9, rtx VAR_10, enum rtx_code VAR_11, rtx VAR_12, rtx VAR_13)
{
  rtx VAR_14, VAR_15, VAR_16;
  rtx VAR_17;

  FUNC_9 (VAR_9 && FUNC_3 (VAR_9) && FUNC_4 (VAR_9));

  if (FUNC_2 (VAR_11) != VAR_3
      && FUNC_2 (VAR_11) != VAR_2
      && FUNC_2 (VAR_11) != VAR_4
      && FUNC_2 (VAR_11) != VAR_5
      && FUNC_2 (VAR_11) != VAR_6)
    return 1;

  if (FUNC_0 (VAR_10) == VAR_8)
    return 1;

  for (VAR_14 = VAR_9;
       FUNC_4 (VAR_14) != VAR_0;
       VAR_14 = FUNC_4 (VAR_14))
    ;

  VAR_16 = FUNC_16 (VAR_14);
  if (VAR_16 == VAR_0)
    return 1;

  if (! FUNC_14 (FUNC_6 (VAR_16), VAR_10)

      && (FUNC_0 (FUNC_6 (VAR_16)) != VAR_7
   || ! FUNC_14 (FUNC_7 (FUNC_6 (VAR_16), 0), VAR_10)))
    return 1;



  if (FUNC_12 (VAR_10, VAR_12)
      || (VAR_13 && FUNC_12 (VAR_10, VAR_13)))
    {
      VAR_15 = FUNC_5 (VAR_14);
      while (VAR_15 != VAR_0)
 {
   if (FUNC_13 (VAR_10, VAR_15))
     return 0;

   VAR_15 = FUNC_5 (VAR_15);
 }
    }

  if (FUNC_2 (VAR_11) == VAR_6)
    VAR_17 = FUNC_10 (VAR_11, FUNC_1 (VAR_10), FUNC_8 (VAR_12));
  else
    VAR_17 = FUNC_11 (VAR_11, FUNC_1 (VAR_10), FUNC_8 (VAR_12), FUNC_8 (VAR_13));

  FUNC_15 (VAR_14, VAR_1, VAR_17);

  return 1;
}
