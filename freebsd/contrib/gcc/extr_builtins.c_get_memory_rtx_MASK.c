
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef int rtx ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *,int) ;
 int * FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 scalar_t__ VAR_13 ;
 int * FUNC_13 (int ,int *,int *) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int *,int ) ;
 int FUNC_18 (int ,int ) ;
 int VAR_14 ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int *,int ) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 scalar_t__ FUNC_24 (int *,int) ;

__attribute__((used)) static rtx
FUNC_25 (tree VAR_15, tree VAR_16)
{
  rtx VAR_17 = FUNC_14 (VAR_15, VAR_11, VAR_14, VAR_7);
  rtx VAR_18 = FUNC_16 (VAR_3, FUNC_18 (VAR_3, VAR_17));




  while ((FUNC_9 (VAR_15) == VAR_10 || FUNC_9 (VAR_15) == VAR_6
   || FUNC_9 (VAR_15) == VAR_9)
  && FUNC_8 (FUNC_11 (FUNC_10 (VAR_15, 0))))
    VAR_15 = FUNC_10 (VAR_15, 0);

  if (FUNC_9 (VAR_15) == VAR_0)
    VAR_15 = FUNC_10 (VAR_15, 0);
  else if (FUNC_8 (FUNC_11 (VAR_15)))
    VAR_15 = FUNC_13 (VAR_8, FUNC_11 (FUNC_11 (VAR_15)), VAR_15);
  else
    VAR_15 = ((void*)0);




  if (VAR_15)
    {
      FUNC_20 (VAR_18, VAR_15, 0);






      if (FUNC_6 (VAR_18) && FUNC_9 (FUNC_6 (VAR_18)) == VAR_4)
 {
   tree VAR_19 = FUNC_6 (VAR_18);
   HOST_WIDE_INT VAR_20 = -1, VAR_21 = -1;
   tree VAR_22 = VAR_15;

   while (FUNC_9 (VAR_22) == VAR_1
   || FUNC_9 (VAR_22) == VAR_10
   || FUNC_9 (VAR_22) == VAR_6
   || FUNC_9 (VAR_22) == VAR_9
   || FUNC_9 (VAR_22) == VAR_13
   || FUNC_9 (VAR_22) == VAR_12)
     VAR_22 = FUNC_10 (VAR_22, 0);

   FUNC_15 (FUNC_9 (VAR_22) == VAR_4);

   if (FUNC_7 (VAR_18)
       && FUNC_4 (FUNC_7 (VAR_18)) == VAR_5)
     VAR_20 = FUNC_5 (FUNC_7 (VAR_18));

   if (VAR_20 >= 0 && VAR_16 && FUNC_17 (VAR_16, 0))
     VAR_21 = FUNC_24 (VAR_16, 0);

   while (FUNC_9 (VAR_22) == VAR_4)
     {
       tree VAR_23 = FUNC_10 (VAR_22, 1);
       FUNC_15 (! FUNC_0 (VAR_23));
       FUNC_15 (FUNC_9 (VAR_19) == VAR_4);
       FUNC_15 (VAR_23 == FUNC_10 (VAR_19, 1));

       if (VAR_21 >= 0
    && FUNC_12 (FUNC_11 (VAR_22))
    && FUNC_17 (FUNC_12 (FUNC_11 (VAR_22)), 0))
  {
    HOST_WIDE_INT VAR_24
      = FUNC_24 (FUNC_12 (FUNC_11 (VAR_22)), 0);



    if (VAR_20 <= VAR_24
        && VAR_21 <= VAR_24
        && VAR_20 + VAR_21 <= VAR_24)
      break;
  }

       if (VAR_20 >= 0
    && FUNC_17 (FUNC_2 (VAR_23), 0))
  VAR_20 += FUNC_24 (FUNC_2 (VAR_23), 0)
     + FUNC_24 (FUNC_1 (VAR_23), 1)
       / VAR_2;
       else
  {
    VAR_20 = -1;
    VAR_21 = -1;
  }

       VAR_19 = FUNC_10 (VAR_19, 0);
       VAR_22 = FUNC_10 (VAR_22, 0);
     }

   if (VAR_19 == ((void*)0))
     VAR_20 = -1;
   if (VAR_19 != FUNC_6 (VAR_18))
     {
       FUNC_21 (VAR_18, VAR_19);
       FUNC_22 (VAR_18, VAR_20 >= 0 ? FUNC_3 (VAR_20) : VAR_11);
     }
 }
      FUNC_19 (VAR_18, 0);
      FUNC_23 (VAR_18, VAR_11);
    }

  return VAR_18;
}
