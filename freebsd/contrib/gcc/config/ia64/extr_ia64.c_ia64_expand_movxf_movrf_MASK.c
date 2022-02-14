
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (scalar_t__,int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (int,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int VAR_7 ;
 int FUNC_15 (int ,int,int ,int) ;
 scalar_t__ FUNC_16 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (int ,int,int) ;
 int FUNC_18 (int ) ;

bool
FUNC_19 (enum machine_mode VAR_10, rtx VAR_11[])
{
  rtx VAR_12 = VAR_11[0];

  if (FUNC_1 (VAR_12) == VAR_4)
    VAR_12 = FUNC_5 (VAR_12);
  if (FUNC_1 (VAR_12) == VAR_3 && FUNC_3 (FUNC_4 (VAR_12)))
    {
      rtx VAR_13[2];



      FUNC_11 (!VAR_7);


      if ((FUNC_1 (VAR_11[1]) == VAR_4
    && FUNC_2 (FUNC_5 (VAR_11[1])) == VAR_5)
   || (FUNC_1 (VAR_11[1]) == VAR_3
       && FUNC_3 (FUNC_4 (VAR_11[1]))))
 {
   rtx VAR_14 = VAR_11[1];

   if (FUNC_1 (VAR_14) == VAR_4)
     VAR_14 = FUNC_5 (VAR_14);
   else
     VAR_14 = FUNC_12 (VAR_5, FUNC_4 (VAR_14));

   FUNC_8 (FUNC_12 (VAR_5, FUNC_4 (VAR_12)), VAR_14);
   return 1;
 }

      if (FUNC_1 (VAR_11[1]) == VAR_0)
 {

   FUNC_8 (FUNC_12 (VAR_1, FUNC_4 (VAR_12)),
     FUNC_15 (VAR_11[1], VAR_6,
        0, VAR_10));
   FUNC_8 (FUNC_12 (VAR_1, FUNC_4 (VAR_12) + 1),
     FUNC_15 (VAR_11[1], !VAR_6,
        0, VAR_10));
   return 1;
 }


      if (FUNC_16 (VAR_11[1], VAR_10))
 VAR_11[1] = FUNC_17 (VAR_11[1], 1, VAR_10);

      FUNC_11 (FUNC_1 (VAR_11[1]) == VAR_2);


      VAR_13[0] = FUNC_12 (VAR_1, FUNC_4 (VAR_12));
      VAR_13[1] = FUNC_12 (VAR_1, FUNC_4 (VAR_12) + 1);

      FUNC_8 (VAR_13[0], FUNC_6 (VAR_11[1], VAR_1, 0));
      FUNC_8 (VAR_13[1], FUNC_6 (VAR_11[1], VAR_1, 8));
      return 1;
    }

  if (FUNC_1 (VAR_11[1]) == VAR_3 && FUNC_3 (FUNC_4 (VAR_11[1])))
    {


      FUNC_11 (!VAR_7);





      if (FUNC_16 (VAR_11[0], VAR_10))
 {
   rtx VAR_15 = FUNC_12 (VAR_5, FUNC_4 (VAR_11[1]));
   VAR_15 = FUNC_13 (VAR_10, VAR_15, 0);
   VAR_11[1] = FUNC_17 (VAR_15, 0, VAR_10);
 }

      else
 {
   rtx VAR_16[2];

   FUNC_11 (FUNC_1 (VAR_11[0]) == VAR_2);


   VAR_16[0] = FUNC_12 (VAR_1, FUNC_4 (VAR_11[1]));
   VAR_16[1] = FUNC_12 (VAR_1, FUNC_4 (VAR_11[1]) + 1);

   FUNC_8 (FUNC_6 (VAR_11[0], VAR_1, 0), VAR_16[0]);
   FUNC_8 (FUNC_6 (VAR_11[0], VAR_1, 8), VAR_16[1]);
   return 1;
 }
    }

  if (!VAR_9 && !VAR_8)
    {
      VAR_11[1] = FUNC_17 (VAR_11[1], 0, VAR_10);

      if (FUNC_2 (VAR_12) == VAR_5 && FUNC_1 (VAR_12) == VAR_3)
 {
   rtx VAR_17, VAR_18, VAR_19 = VAR_11[1];
   if (FUNC_0 (VAR_19))
     VAR_19 = FUNC_18 (FUNC_9 (VAR_10, VAR_19));
   if (FUNC_1 (VAR_19) == VAR_2)
     VAR_17 = FUNC_6 (VAR_19, VAR_5, 0);
   else
     {
       VAR_17 = FUNC_7 (VAR_5, 16, 0);
       VAR_18 = FUNC_6 (VAR_17, VAR_10, 0);
       FUNC_8 (VAR_18, VAR_19);
     }
   FUNC_8 (VAR_12, VAR_17);
   return 1;
 }

      if (!FUNC_14 (VAR_11[0], VAR_11[1]))
 VAR_11[1] = FUNC_10 (VAR_10, VAR_11[1]);
    }

  return 0;
}
