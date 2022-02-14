
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum attr_cirrus { ____Placeholder_attr_cirrus } attr_cirrus ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_8 ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13 (rtx VAR_12)
{
  enum attr_cirrus VAR_13;
  rtx VAR_14 = FUNC_1 (VAR_12);
  rtx VAR_15;
  int VAR_16;


  if (FUNC_0 (VAR_12) == VAR_6 && FUNC_0 (VAR_14) != VAR_9)
    {
      VAR_16 = 0;
      VAR_15 = FUNC_12 (VAR_12);

      if (FUNC_6 (VAR_15))
 ++ VAR_16;

      if (FUNC_6 (FUNC_12 (VAR_15)))
 ++ VAR_16;

      while (VAR_16 --)
 FUNC_8 (FUNC_10 (), VAR_12);

      return;
    }


  if (FUNC_0 (VAR_14) == VAR_7 && FUNC_5 (VAR_14, 0) > 0)
    VAR_14 = FUNC_4 (VAR_14, 0, 0);

  if (FUNC_0 (VAR_14) == VAR_10)
    {
      rtx VAR_17 = FUNC_3 (VAR_14, 0), VAR_18 = FUNC_3 (VAR_14, 1);



      if (FUNC_11 (VAR_12) == VAR_1)
 {
   if (FUNC_6 (FUNC_12 (VAR_12)))
     FUNC_8 (FUNC_10 (), VAR_12);

   return;
 }
      else if (FUNC_7 (VAR_12))
 {
   unsigned int VAR_19;
   if (FUNC_0 (VAR_17) == VAR_8)
     VAR_19 = FUNC_2 (VAR_17);
   else
     {
       FUNC_9 (FUNC_0 (VAR_18) == VAR_8);
       VAR_19 = FUNC_2 (VAR_18);
     }


   VAR_12 = FUNC_12 (VAR_12);

   if (! FUNC_6 (VAR_12))
     return;

   VAR_14 = FUNC_1 (VAR_12);


          if (FUNC_0 (VAR_14) == VAR_7 && FUNC_5 (VAR_14, 0))
     VAR_14 = FUNC_4 (VAR_14, 0, 0);

   if (FUNC_0 (VAR_14) == VAR_4)
     VAR_14 = FUNC_3 (VAR_14, 0);

   if (FUNC_11 (VAR_12) == VAR_2
       && FUNC_0 (FUNC_3 (VAR_14, 1)) == VAR_8
       && VAR_19 == FUNC_2 (FUNC_3 (VAR_14, 1)))
     FUNC_8 (FUNC_10 (), VAR_12);

   return;
 }
    }


  if (!VAR_12
      || FUNC_0 (VAR_12) != VAR_5
      || FUNC_0 (FUNC_1 (VAR_12)) == VAR_11
      || FUNC_0 (FUNC_1 (VAR_12)) == VAR_3)
    return;

  VAR_13 = FUNC_11 (VAR_12);



  if (VAR_13 == VAR_0)
    {
      VAR_16 = 0;

      VAR_15 = FUNC_12 (VAR_12);

      if (FUNC_6 (VAR_15))
 ++ VAR_16;

      if (FUNC_6 (FUNC_12 (VAR_15)))
 ++ VAR_16;

      while (VAR_16 --)
 FUNC_8 (FUNC_10 (), VAR_12);

      return;
    }
}
