
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_21 (int) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;
 int FUNC_23 (scalar_t__,scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_25 (scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_26 (int ,scalar_t__,int ) ;

bool
FUNC_27 (tree VAR_6, tree VAR_7)
{
  bool VAR_8 = 1;
  int VAR_9;

  FUNC_21 (FUNC_12 (VAR_6) == VAR_0
       || FUNC_12 (VAR_6) == VAR_3);




  if (FUNC_12 (VAR_7) == VAR_0
      && FUNC_6 (VAR_7)
      && !FUNC_9 (VAR_7))
    {

      VAR_7 = FUNC_8 (VAR_7);
      VAR_8 = 0;
    }
  else if (FUNC_12 (VAR_7) == VAR_2
    && !FUNC_10 (VAR_7))
    VAR_8 = 0;


  if (FUNC_12 (VAR_7) != VAR_2)
    return 0;

  if (FUNC_22 (VAR_6, VAR_7))
    return 1;
  VAR_9 = FUNC_24 (FUNC_3 (VAR_7));
  if (VAR_9
      && FUNC_2 (VAR_6)
      && FUNC_22 (FUNC_16 (FUNC_3 (VAR_6)),
          FUNC_1 (FUNC_3 (VAR_7))))
    {
      tree VAR_10 = FUNC_3 (VAR_6);
      tree VAR_11 = VAR_1;
      int VAR_12 = 0;

      while (VAR_12 < VAR_9)
 {
   if (FUNC_0 (VAR_10))
     {
       if (VAR_12 == 0)
  VAR_11 = FUNC_17 (VAR_10);
       else
  VAR_11 = FUNC_18 (FUNC_17 (VAR_10), VAR_11);
       VAR_12++;
     }
   VAR_10 = FUNC_15 (VAR_10);
 }

      if (FUNC_12 (VAR_6) == VAR_0)
 {
   bool VAR_13;
   tree VAR_14;
   tree VAR_15;
   tree VAR_16;
   tree VAR_17;



   VAR_13 = FUNC_6 (VAR_6)
   && FUNC_10 (FUNC_8 (VAR_6));
   if (VAR_8 ^ VAR_13)
     return 0;
   else if (VAR_13)
     {

       tree VAR_18
  = FUNC_26 (FUNC_7 (VAR_7),
      VAR_11, VAR_5);
       if (!FUNC_19
       (FUNC_7 (FUNC_8 (VAR_6)),
        VAR_18))
  return 0;

       VAR_15 = FUNC_13 (FUNC_8 (VAR_6));
     }
   else
     VAR_15 = FUNC_13 (VAR_6);

   VAR_14 = FUNC_25 (FUNC_13 (VAR_7), VAR_11,
           VAR_5, VAR_1);
   if (VAR_14 == VAR_4)
     return 0;


   if (!FUNC_23 (FUNC_13 (VAR_15), FUNC_13 (VAR_14)))
     return 0;



   VAR_16 = FUNC_14 (VAR_14);
   VAR_17 = FUNC_14 (VAR_15);
   if (FUNC_5 (VAR_7))
     VAR_16 = FUNC_11 (VAR_16);
   if (FUNC_5 (VAR_6))
     VAR_17 = FUNC_11 (VAR_17);

   return FUNC_20 (VAR_17, VAR_16);
 }
      else
 {

   bool VAR_19;
   tree VAR_20 = FUNC_13 (VAR_6);



   VAR_19
     = FUNC_0 (VAR_20)
       && FUNC_10 (FUNC_1 (VAR_20));

   if (VAR_8 ^ VAR_19)
     return 0;
   else if (VAR_19)
     {
       tree VAR_21;


       if (FUNC_4 (FUNC_1 (VAR_20))
    != FUNC_4 (VAR_7))
  return 0;


       VAR_21
  = FUNC_26 (FUNC_7 (VAR_7),
      VAR_11, VAR_5);
       return FUNC_19
  (FUNC_7 (FUNC_1 (VAR_20)),
   VAR_21);
     }
   else
     return (FUNC_4 (VAR_6)
      == FUNC_4 (VAR_7));
 }
    }
  return 0;
}
