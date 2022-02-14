
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (int ,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int,int ,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_16 (scalar_t__,int,int ,int ) ;
 int FUNC_17 (int ,int,int ,int) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static rtx
FUNC_20 (rtx VAR_16)
{
  rtx VAR_17;
  rtx VAR_18;
  int VAR_19;
  rtx VAR_20, VAR_21, VAR_22;
  enum machine_mode VAR_23;


  while (1)
    {
      if (FUNC_2 (FUNC_8 (VAR_16)) == VAR_10
   && FUNC_2 (FUNC_11 (FUNC_8 (VAR_16), 0)) == VAR_11)
 {
   VAR_17 = FUNC_10 (FUNC_11 (FUNC_8 (VAR_16), 0));
   VAR_19 = FUNC_4 (FUNC_3 (FUNC_11 (FUNC_8 (VAR_16), 0)));
   VAR_18 = FUNC_1 (FUNC_19 (FUNC_11 (FUNC_8 (VAR_16), 0)));
 }
      else if (FUNC_2 (FUNC_8 (VAR_16)) == VAR_14
        && FUNC_2 (FUNC_11 (FUNC_8 (VAR_16), 1)) == VAR_4)
 {
   VAR_17 = FUNC_11 (FUNC_8 (VAR_16), 0);
   VAR_19 = FUNC_6 (FUNC_11 (FUNC_8 (VAR_16), 1));
   VAR_18 = FUNC_11 (FUNC_8 (VAR_16), 2);


   if (FUNC_2 (VAR_18) == VAR_4
       && FUNC_6 (VAR_18) + VAR_19 > FUNC_4 (FUNC_3 (VAR_17)))
     break;

   if (VAR_2)
     {
       if (FUNC_2 (VAR_18) == VAR_4)
  VAR_18 = FUNC_1 (FUNC_4 (FUNC_3 (VAR_17)) - VAR_19
          - FUNC_6 (VAR_18));
       else if (FUNC_2 (VAR_18) == VAR_7
         && FUNC_2 (FUNC_11 (VAR_18, 1)) == VAR_4
         && (FUNC_6 (FUNC_11 (VAR_18, 1))
      == FUNC_4 (FUNC_3 (VAR_17)) - VAR_19))

  VAR_18 = FUNC_11 (VAR_18, 0);
       else
  VAR_18 = FUNC_16 (VAR_7, FUNC_3 (VAR_18),
        FUNC_1 (FUNC_4 (
          FUNC_3 (VAR_17))
          - VAR_19),
        VAR_18);
     }
 }



      else if (FUNC_2 (FUNC_8 (VAR_16)) == VAR_11

        && VAR_15
        && (((FUNC_5 (FUNC_3 (FUNC_8 (VAR_16)))
       + (VAR_12 - 1)) / VAR_12)
     == ((FUNC_5 (FUNC_3 (FUNC_10 (FUNC_8 (VAR_16))))
   + (VAR_12 - 1)) / VAR_12)))
 {
   VAR_16 = FUNC_14 (VAR_13, FUNC_10 (FUNC_8 (VAR_16)),
      FUNC_13
      (FUNC_3 (FUNC_10 (FUNC_8 (VAR_16))),
       FUNC_9 (VAR_16)));
   continue;
 }
      else
 break;

      while (FUNC_2 (VAR_17) == VAR_11 && FUNC_18 (VAR_17))
 VAR_17 = FUNC_10 (VAR_17);

      VAR_23 = FUNC_3 (VAR_17);


      if (! FUNC_7 (VAR_23))
 {
   enum machine_mode VAR_24;


   if (! FUNC_0 (VAR_23))
     break;


   VAR_24 = FUNC_15 (FUNC_4 (VAR_23), VAR_8, 0);
   if (VAR_24 == VAR_3)
     break;

   VAR_23 = VAR_24;
   VAR_17 = FUNC_13 (VAR_24, VAR_17);
 }


      if (VAR_19 >= VAR_5)
 break;




      VAR_20 = FUNC_1 (((HOST_WIDE_INT) 1 << VAR_19) - 1);
      VAR_21 = FUNC_16 (VAR_0, VAR_23,
         FUNC_17 (VAR_9, VAR_23,
           FUNC_16 (VAR_1,
           VAR_23,
           VAR_20, VAR_18),
           VAR_23),
         VAR_17);
      VAR_22 = FUNC_16 (VAR_1, VAR_23,
        FUNC_16 (
          VAR_0, VAR_23,
          FUNC_13 (VAR_23, FUNC_9 (VAR_16)),
          VAR_20),
        VAR_18);

      VAR_16 = FUNC_14 (VAR_13, FUNC_12 (VAR_17),
         FUNC_16 (VAR_6, VAR_23,
         VAR_21, VAR_22));
    }

  return VAR_16;
}
