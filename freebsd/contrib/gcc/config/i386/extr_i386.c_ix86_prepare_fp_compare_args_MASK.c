
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static enum rtx_code
FUNC_12 (enum rtx_code VAR_8, rtx *VAR_9, rtx *VAR_10)
{
  enum machine_mode VAR_11 = FUNC_6 (VAR_8);
  rtx VAR_12 = *VAR_9, VAR_13 = *VAR_10;
  enum machine_mode VAR_14 = FUNC_2 (VAR_12);
  int VAR_15 = VAR_5 && FUNC_3 (VAR_14);







  if (!VAR_15
      && (VAR_11 == VAR_0
   || (VAR_14 == VAR_6
       && ! (FUNC_9 (VAR_12) == 1
      || FUNC_9 (VAR_13) == 1)
       && FUNC_1 (VAR_13) != VAR_1)
   || FUNC_8 (VAR_8)))
    {
      VAR_12 = FUNC_5 (VAR_14, VAR_12);
      VAR_13 = FUNC_5 (VAR_14, VAR_13);
    }
  else
    {




      if (FUNC_9 (VAR_12) == 0
   || (FUNC_1 (VAR_12) == VAR_2
       && ! (FUNC_9 (VAR_13) == 0
      || FUNC_1 (VAR_13) == VAR_2)))
 {
   rtx VAR_16;
   VAR_16 = VAR_12, VAR_12 = VAR_13, VAR_13 = VAR_16;
   VAR_8 = FUNC_10 (VAR_8);
 }

      if (FUNC_1 (VAR_12) != VAR_3)
 VAR_12 = FUNC_5 (VAR_14, VAR_12);

      if (FUNC_0 (VAR_13))
 {
   int VAR_17 = FUNC_9 (VAR_13);
   if (VAR_17 == 0)
     VAR_13 = FUNC_11 (FUNC_4 (VAR_14, VAR_13));
   else if (VAR_17 == 1)
     {
       if (VAR_4)
  VAR_13 = FUNC_5 (VAR_14, VAR_13);
     }
   else
     VAR_13 = FUNC_5 (VAR_14, VAR_13);
 }
    }


  if (FUNC_7 (VAR_8)
      > FUNC_7 (FUNC_10 (VAR_8))
      && (FUNC_1 (VAR_13) == VAR_3 || !VAR_7))
    {
      rtx VAR_18;
      VAR_18 = VAR_12, VAR_12 = VAR_13, VAR_13 = VAR_18;
      VAR_8 = FUNC_10 (VAR_8);
      if (FUNC_1 (VAR_12) != VAR_3)
 VAR_12 = FUNC_5 (VAR_14, VAR_12);
    }

  *VAR_9 = VAR_12;
  *VAR_10 = VAR_13;
  return VAR_8;
}
