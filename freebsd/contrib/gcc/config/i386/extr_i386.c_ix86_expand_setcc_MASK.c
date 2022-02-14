
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int FUNC_10 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_11 (int,scalar_t__*,scalar_t__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_14 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

int
FUNC_15 (enum rtx_code VAR_8, rtx VAR_9)
{
  rtx VAR_10, VAR_11, VAR_12, VAR_13;
  rtx VAR_14, VAR_15;

  if (FUNC_1 (VAR_6) == (VAR_3 ? VAR_4 : VAR_0))
    return 0;

  FUNC_5 (FUNC_1 (VAR_9) == VAR_1);

  VAR_10 = FUNC_11 (VAR_8, &VAR_14, &VAR_15);
  FUNC_3 (VAR_10, VAR_1);

  VAR_11 = VAR_9;
  VAR_12 = VAR_9;

  FUNC_4 (FUNC_9 (VAR_5, VAR_11, VAR_10));
  if (VAR_15 || VAR_14)
    {
      rtx VAR_16 = VAR_14;
      int VAR_17 = 0;
      rtx VAR_18 = FUNC_8 (VAR_1);
      if (VAR_15)
 {
   FUNC_5 (!VAR_14);
   VAR_16 = VAR_15;
   VAR_17 = 1;
   FUNC_2 (VAR_16, FUNC_12 (FUNC_0 (VAR_16)));
 }
      FUNC_3 (VAR_16, VAR_1);
      FUNC_4 (FUNC_9 (VAR_5, VAR_18, VAR_16));

      if (VAR_17)
 FUNC_4 (FUNC_6 (VAR_11, VAR_12, VAR_18));
      else
 FUNC_4 (FUNC_7 (VAR_11, VAR_12, VAR_18));
    }


  if (VAR_6 && VAR_7)
    {
      VAR_13 = FUNC_14 (VAR_8, VAR_1,
           FUNC_1 (VAR_6),
           VAR_6, VAR_7);
      FUNC_13 (FUNC_10 (), VAR_2, VAR_13);
    }

  return 1;
}
