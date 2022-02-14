
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 unsigned int FUNC_8 (unsigned int,unsigned int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 unsigned int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;
 scalar_t__ FUNC_17 (int) ;
 scalar_t__ FUNC_18 (scalar_t__,int) ;
 scalar_t__ FUNC_19 () ;
 int FUNC_20 (scalar_t__,unsigned int) ;
 int FUNC_21 (scalar_t__,int ) ;
 int FUNC_22 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__) ;

rtx
FUNC_24 (enum machine_mode VAR_8, rtx VAR_9)
{
  rtx VAR_10, VAR_11, VAR_12;

  if (FUNC_9 (VAR_9))
    return VAR_9;

  if (FUNC_18 (VAR_9, VAR_8))
    {
      VAR_10 = FUNC_17 (VAR_8);
      VAR_11 = FUNC_14 (VAR_10, VAR_9);
    }
  else
    {
      VAR_10 = FUNC_16 (VAR_9, VAR_4);
      if (FUNC_9 (VAR_10))
 VAR_11 = FUNC_19 ();
      else
 {
   rtx VAR_13 = FUNC_17 (VAR_8);
   VAR_11 = FUNC_14 (VAR_13, VAR_10);
   VAR_10 = VAR_13;
 }
    }




  if (FUNC_0 (VAR_9)
      && (VAR_12 = FUNC_23 (VAR_11)) != 0
      && FUNC_10 (VAR_12) == VAR_10
      && ! FUNC_21 (VAR_9, FUNC_11 (VAR_12)))
    FUNC_22 (VAR_11, VAR_6, VAR_9);



  {
    unsigned VAR_14 = 0;
    if (FUNC_3 (VAR_9) == VAR_7)
      {
        VAR_14 = VAR_0;
 if (FUNC_12 (VAR_9) && FUNC_2 (FUNC_12 (VAR_9)))
   VAR_14 = FUNC_1 (FUNC_12 (VAR_9));
      }
    else if (FUNC_3 (VAR_9) == VAR_3)
      VAR_14 = VAR_0;
    else if (FUNC_3 (VAR_9) == VAR_1
      && FUNC_3 (FUNC_13 (VAR_9, 0)) == VAR_5
      && FUNC_3 (FUNC_13 (FUNC_13 (VAR_9, 0), 0)) == VAR_7
      && FUNC_3 (FUNC_13 (FUNC_13 (VAR_9, 0), 1)) == VAR_2)
      {
 rtx VAR_15 = FUNC_13 (FUNC_13 (VAR_9, 0), 0);
 rtx VAR_16 = FUNC_13 (FUNC_13 (VAR_9, 0), 1);
 unsigned VAR_17, VAR_18;

 VAR_17 = VAR_0;
 if (FUNC_12 (VAR_15) && FUNC_2 (FUNC_12 (VAR_15)))
   VAR_17 = FUNC_1 (FUNC_12 (VAR_15));

 VAR_18 = FUNC_15 (FUNC_4 (VAR_16) & -FUNC_4 (VAR_16)) * VAR_0;

 VAR_14 = FUNC_8 (VAR_17, VAR_18);
      }
    else if (FUNC_6 (VAR_9) && FUNC_7 (VAR_9))
      VAR_14 = FUNC_5 (VAR_9);

    if (VAR_14)
      FUNC_20 (VAR_10, VAR_14);
  }

  return VAR_10;
}
