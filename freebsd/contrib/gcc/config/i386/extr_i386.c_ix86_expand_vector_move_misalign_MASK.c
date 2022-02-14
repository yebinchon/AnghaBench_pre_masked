
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 scalar_t__ VAR_12 ;

void
FUNC_20 (enum machine_mode VAR_13, rtx VAR_14[])
{
  rtx VAR_15, VAR_16, VAR_17;

  VAR_15 = VAR_14[0];
  VAR_16 = VAR_14[1];

  if (FUNC_2 (VAR_16))
    {

      if (VAR_12)
 {
   VAR_15 = FUNC_7 (VAR_10, VAR_15);
   VAR_16 = FUNC_7 (VAR_10, VAR_16);
   FUNC_4 (FUNC_17 (VAR_15, VAR_16));
   return;
 }




      if (VAR_2 && FUNC_1 (VAR_13) == VAR_1)
 {
   VAR_15 = FUNC_7 (VAR_7, VAR_15);
   VAR_16 = FUNC_7 (VAR_7, VAR_16);
   FUNC_4 (FUNC_11 (VAR_15, VAR_16));
   return;
 }

      if (VAR_2 && VAR_13 == VAR_8)
        {
          rtx VAR_18;

          if (VAR_6)
            {
              VAR_15 = FUNC_7 (VAR_8, VAR_15);
              VAR_16 = FUNC_7 (VAR_8, VAR_16);
              FUNC_4 (FUNC_12 (VAR_15, VAR_16));
              return;
            }



   if (VAR_4)
     {
       FUNC_4 (FUNC_8 (VAR_11, VAR_15));
       VAR_18 = VAR_15;
     }
   else
     {
       VAR_18 = FUNC_0 (VAR_8);
     }

   VAR_17 = FUNC_3 (VAR_16, VAR_0, 0);
   FUNC_4 (FUNC_10 (VAR_15, VAR_18, VAR_17));
   VAR_17 = FUNC_3 (VAR_16, VAR_0, 8);
   FUNC_4 (FUNC_9 (VAR_15, VAR_15, VAR_17));
 }
      else
        {
          if (VAR_6)
            {
              VAR_15 = FUNC_7 (VAR_10, VAR_15);
              VAR_16 = FUNC_7 (VAR_10, VAR_16);
              FUNC_4 (FUNC_17 (VAR_15, VAR_16));
              return;
            }

   if (VAR_3)
     FUNC_5 (VAR_15, FUNC_0 (VAR_13));
   else
     FUNC_4 (FUNC_8 (VAR_11, VAR_15));

   if (VAR_13 != VAR_10)
     VAR_15 = FUNC_7 (VAR_10, VAR_15);
   VAR_17 = FUNC_3 (VAR_16, VAR_9, 0);
   FUNC_4 (FUNC_16 (VAR_15, VAR_15, VAR_17));
   VAR_17 = FUNC_3 (VAR_16, VAR_9, 8);
   FUNC_4 (FUNC_15 (VAR_15, VAR_15, VAR_17));
 }
    }
  else if (FUNC_2 (VAR_15))
    {

      if (VAR_12)
 {
   VAR_15 = FUNC_7 (VAR_10, VAR_15);
   VAR_16 = FUNC_7 (VAR_10, VAR_16);
   FUNC_4 (FUNC_17 (VAR_15, VAR_16));
   return;
 }



      if (VAR_2 && !VAR_5
   && FUNC_1 (VAR_13) == VAR_1)
        {
   VAR_15 = FUNC_7 (VAR_7, VAR_15);
   VAR_16 = FUNC_7 (VAR_7, VAR_16);
   FUNC_4 (FUNC_11 (VAR_15, VAR_16));
   return;
 }

      if (VAR_2 && VAR_13 == VAR_8)
 {
   VAR_17 = FUNC_3 (VAR_15, VAR_0, 0);
   FUNC_4 (FUNC_14 (VAR_17, VAR_16));
   VAR_17 = FUNC_3 (VAR_15, VAR_0, 8);
   FUNC_4 (FUNC_13 (VAR_17, VAR_16));
 }
      else
 {
   if (VAR_13 != VAR_10)
     VAR_16 = FUNC_7 (VAR_10, VAR_16);
   VAR_17 = FUNC_3 (VAR_15, VAR_9, 0);
   FUNC_4 (FUNC_19 (VAR_17, VAR_16));
   VAR_17 = FUNC_3 (VAR_15, VAR_9, 8);
   FUNC_4 (FUNC_18 (VAR_17, VAR_16));
 }
    }
  else
    FUNC_6 ();
}
