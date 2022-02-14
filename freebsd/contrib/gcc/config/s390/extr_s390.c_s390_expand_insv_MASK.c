
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int,int ) ;
 int VAR_9 ;

bool
FUNC_18 (rtx VAR_10, rtx VAR_11, rtx VAR_12, rtx VAR_13)
{
  int VAR_14 = FUNC_3 (VAR_11);
  int VAR_15 = FUNC_3 (VAR_12);


  if (VAR_14 % VAR_0)
    return 0;

  if (VAR_15 == 0
      && FUNC_13 (VAR_10, VAR_7)
      && (FUNC_14 (VAR_13, VAR_9)
   || FUNC_5 (VAR_13, VAR_7)))
    {

      enum machine_mode VAR_16 = FUNC_17 (VAR_14, VAR_3);
      if (FUNC_1 (VAR_16) == VAR_14)
 FUNC_6 (FUNC_4 (VAR_10, VAR_16, 0), FUNC_10 (VAR_16, VAR_13));


      else if (FUNC_5 (VAR_13, VAR_7))
 {
   int VAR_17 = VAR_14 / VAR_0;
   rtx VAR_18 = FUNC_4 (FUNC_7 (VAR_9, VAR_13), VAR_1,
     FUNC_2 (VAR_9) - VAR_17);

   VAR_10 = FUNC_4 (VAR_10, VAR_1, 0);
   FUNC_16 (VAR_10, FUNC_0 (VAR_17));
   FUNC_15 (VAR_10, VAR_18, FUNC_0 (VAR_17));
 }


      else if (FUNC_14 (VAR_13, VAR_9))
 {
   if (VAR_14 <= FUNC_1 (VAR_4))
     FUNC_6 (FUNC_12 (VAR_9, VAR_10, VAR_11,
        VAR_8), VAR_13);
   else
     {

       int VAR_19 = VAR_14 - FUNC_1 (VAR_4);
       int VAR_20 = VAR_19 / VAR_0;

       FUNC_6 (FUNC_4 (VAR_10, VAR_4, VAR_20),
         FUNC_10 (VAR_4, VAR_13));
       FUNC_16 (VAR_10, FUNC_0 (VAR_20));
       FUNC_6 (FUNC_12 (VAR_9, VAR_10, FUNC_0
          (VAR_19), VAR_8),
         FUNC_11 (VAR_9, VAR_13, FUNC_0
      (FUNC_1 (VAR_4))));
     }
 }
      else
 return 0;

      return 1;
    }


  if (VAR_6
      && FUNC_14 (VAR_10, VAR_9)
      && (VAR_15 % 16) == 0
      && (VAR_14 % 16) == 0
      && FUNC_5 (VAR_13, VAR_7))
    {
      HOST_WIDE_INT VAR_21 = FUNC_3 (VAR_13);
      int VAR_22 = VAR_15 + VAR_14;

      while (VAR_22 > VAR_15)
 {
   enum machine_mode VAR_23;
   int VAR_24;

   if (VAR_5 && (VAR_22 % 32 == 0) && (VAR_22 >= VAR_15 + 32))
     VAR_23 = VAR_4;
   else
     VAR_23 = VAR_2;

   VAR_24 = FUNC_1 (VAR_23);
   VAR_22 -= VAR_24;
   FUNC_6 (FUNC_12 (VAR_9, VAR_10,
      FUNC_0 (VAR_24),
      FUNC_0 (VAR_22)),
     FUNC_9 (VAR_21, VAR_23));
   VAR_21 >>= VAR_24;
 }
      FUNC_8 (VAR_22 == VAR_15);
      return 1;
    }

  return 0;
}
