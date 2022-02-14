
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int,int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_17 (int ,int ,int) ;
 scalar_t__* VAR_6 ;
 int FUNC_18 (int) ;
 int FUNC_19 (int,int) ;
 int FUNC_20 (int,int ) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int,int,int) ;
 int FUNC_23 (int,int ,int,int ) ;

rtx
FUNC_24 (enum machine_mode VAR_7, enum machine_mode VAR_8, rtx VAR_9, int VAR_10)
{
  rtx VAR_11;




  if (FUNC_0 (VAR_9) == VAR_4 && FUNC_13 (VAR_9)
      && FUNC_4 (FUNC_1 (FUNC_14 (VAR_9))) >= FUNC_4 (VAR_7)
      && FUNC_12 (VAR_9) == VAR_10)
    VAR_9 = FUNC_20 (VAR_7, VAR_9);

  if (FUNC_1 (VAR_9) != VAR_5)
    VAR_8 = FUNC_1 (VAR_9);

  if (VAR_7 == VAR_8)
    return VAR_9;







  if (VAR_10 && FUNC_3 (VAR_7) == VAR_3
      && FUNC_2 (VAR_7) == 2 * VAR_2
      && FUNC_0 (VAR_9) == VAR_1 && FUNC_7 (VAR_9) < 0)
    {
      HOST_WIDE_INT VAR_12 = FUNC_7 (VAR_9);

      if (VAR_8 != VAR_5
   && VAR_2 > FUNC_2 (VAR_8))
 {
   int VAR_13 = FUNC_2 (VAR_8);


   VAR_12 &= ((HOST_WIDE_INT) 1 << VAR_13) - 1;
 }

      return FUNC_22 (VAR_12, (HOST_WIDE_INT) 0, VAR_7);
    }






  if ((FUNC_0 (VAR_9) == VAR_1
       && FUNC_2 (VAR_7) <= VAR_2)
      || (FUNC_3 (VAR_7) == VAR_3
   && FUNC_3 (VAR_8) == VAR_3
   && (FUNC_0 (VAR_9) == VAR_0
       || (FUNC_4 (VAR_7) <= FUNC_4 (VAR_8)
    && ((FUNC_8 (VAR_9) && ! FUNC_9 (VAR_9)
         && VAR_6[(int) VAR_7])
        || (FUNC_11 (VAR_9)
     && (! FUNC_5 (VAR_9)
         || FUNC_6 (FUNC_10 (VAR_9), VAR_7))
     && FUNC_15 (FUNC_2 (VAR_7),
          FUNC_2 (FUNC_1 (VAR_9)))))))))
    {



      if (FUNC_0 (VAR_9) == VAR_1 && VAR_8 != VAR_5
   && FUNC_4 (VAR_7) > FUNC_4 (VAR_8))
 {
   HOST_WIDE_INT VAR_14 = FUNC_7 (VAR_9);
   int VAR_15 = FUNC_2 (VAR_8);



   VAR_14 &= ((HOST_WIDE_INT) 1 << VAR_15) - 1;
   if (! VAR_10
       && (VAR_14 & ((HOST_WIDE_INT) 1 << (VAR_15 - 1))))
     VAR_14 |= (HOST_WIDE_INT) (-1) << VAR_15;

   return FUNC_19 (VAR_14, VAR_7);
 }

      return FUNC_20 (VAR_7, VAR_9);
    }



  if (FUNC_16 (VAR_7) && FUNC_1 (VAR_9) == VAR_5)
    {
      FUNC_18 (FUNC_2 (VAR_7) == FUNC_2 (VAR_8));
      return FUNC_23 (VAR_7, VAR_9, VAR_8, 0);
    }

  VAR_11 = FUNC_21 (VAR_7);
  FUNC_17 (VAR_11, VAR_9, VAR_10);
  return VAR_11;
}
