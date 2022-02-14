
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_8 ;
 int FUNC_15 (int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_16 (int,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_17 (scalar_t__,int) ;
 int VAR_11 ;

int
FUNC_18 (rtx VAR_12, enum machine_mode VAR_13)
{
  enum rtx_code VAR_14 = FUNC_1 (VAR_12);

  if (VAR_13 == VAR_8)
    VAR_13 = FUNC_2 (VAR_12);



  if (FUNC_2 (VAR_12) == VAR_8 && VAR_13 != VAR_8
      && FUNC_3 (VAR_13) != VAR_3
      && FUNC_3 (VAR_13) != VAR_4)
    return 0;

  if (FUNC_1 (VAR_12) == VAR_0
      && VAR_13 != VAR_8
      && FUNC_17 (FUNC_5 (VAR_12), VAR_13) != FUNC_5 (VAR_12))
    return 0;

  if (FUNC_0 (VAR_12))
    return ((FUNC_2 (VAR_12) == VAR_8 || FUNC_2 (VAR_12) == VAR_13
      || VAR_13 == VAR_8)
     && (! VAR_9 || FUNC_7 (VAR_12))
     && FUNC_6 (VAR_12));




  if (FUNC_2 (VAR_12) != VAR_13)
    return 0;

  if (VAR_14 == VAR_7)
    {
      rtx VAR_15 = FUNC_14 (VAR_12);
      if (!VAR_10 && FUNC_13 (VAR_12) != 0
   && FUNC_8 (VAR_15))
 return 0;



      if (FUNC_12 (FUNC_2 (VAR_12))
   && FUNC_4 (FUNC_2 (VAR_12)) > FUNC_4 (FUNC_2 (VAR_15)))
 return 0;

      VAR_12 = VAR_15;
      VAR_14 = FUNC_1 (VAR_12);
    }

  if (VAR_14 == VAR_6)

    return (FUNC_10 (VAR_12) >= VAR_1
     || FUNC_11 (FUNC_10 (VAR_12)) != VAR_5);

  if (VAR_14 == VAR_2)
    {
      rtx VAR_16 = FUNC_15 (VAR_12, 0);

      if (! VAR_11 && FUNC_9 (VAR_12))
 return 0;


      if (FUNC_16 (FUNC_2 (VAR_12), VAR_16))
 return 1;
    }

  return 0;
}
