
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__,int,int ) ;
 int FUNC_9 (int,scalar_t__,int ) ;
 int FUNC_10 (int,int ,int,int) ;
 int FUNC_11 (int,int) ;

rtx
FUNC_12 (enum machine_mode VAR_14, rtx VAR_15)
{
  int VAR_16 = FUNC_3 (VAR_14);
  int VAR_17;
  int VAR_18 = 0;
  enum machine_mode VAR_19;



  VAR_19 = FUNC_1 (VAR_15);
  if (FUNC_0 (VAR_15) == VAR_4
      && VAR_16 * VAR_0 <= VAR_6)
    VAR_19 = FUNC_9 (VAR_6, VAR_7, 0);
  else if (VAR_19 == VAR_12)
    VAR_19 = FUNC_9 (VAR_6 * 2, VAR_7, 0);

  VAR_17 = FUNC_3 (VAR_19);

  FUNC_7 (VAR_19 != VAR_12 && VAR_19 != VAR_1);

  if (VAR_19 == VAR_14)
    return VAR_15;


  if ((VAR_16 + (VAR_11 - 1)) / VAR_11
      > ((VAR_17 + (VAR_11 - 1)) / VAR_11))
    return 0;


  if (FUNC_5 (VAR_14) && VAR_16 > VAR_17)
    return 0;

  VAR_18 = FUNC_11 (VAR_14, VAR_19);

  if ((FUNC_0 (VAR_15) == VAR_13 || FUNC_0 (VAR_15) == VAR_9)
      && (FUNC_2 (VAR_14) == VAR_7
   || FUNC_2 (VAR_14) == VAR_8))
    {
      if (FUNC_1 (FUNC_6 (VAR_15, 0)) == VAR_14)
 return FUNC_6 (VAR_15, 0);
      else if (VAR_16 < FUNC_3 (FUNC_1 (FUNC_6 (VAR_15, 0))))
 return FUNC_12 (VAR_14, FUNC_6 (VAR_15, 0));
      else if (VAR_16 < VAR_17)
 return FUNC_8 (FUNC_0 (VAR_15), VAR_14, FUNC_6 (VAR_15, 0));
    }
  else if (FUNC_0 (VAR_15) == VAR_10 || FUNC_4 (VAR_15)
    || FUNC_0 (VAR_15) == VAR_2 || FUNC_0 (VAR_15) == VAR_5
    || FUNC_0 (VAR_15) == VAR_3 || FUNC_0 (VAR_15) == VAR_4)
    return FUNC_10 (VAR_14, VAR_15, VAR_19, VAR_18);


  return 0;
}
