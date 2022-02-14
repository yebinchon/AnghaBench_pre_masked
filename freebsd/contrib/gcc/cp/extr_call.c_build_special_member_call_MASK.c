
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_11 (int ,int ,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int *) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_16 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_19 (int) ;
 int VAR_16 ;
 scalar_t__ FUNC_20 (scalar_t__,scalar_t__,int) ;
 int FUNC_21 (int ,scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__,scalar_t__) ;

tree
FUNC_23 (tree VAR_17, tree VAR_18, tree VAR_19,
      tree VAR_20, int VAR_21)
{
  tree VAR_22;

  tree VAR_23;

  FUNC_19 (VAR_18 == VAR_9
       || VAR_18 == VAR_6
       || VAR_18 == VAR_10
       || VAR_18 == VAR_7
       || VAR_18 == VAR_14
       || VAR_18 == FUNC_8 (VAR_3));
  if (FUNC_7 (VAR_20))
    {

      if (!FUNC_16 (VAR_20, VAR_4))
 return VAR_15;

      VAR_20 = FUNC_6 (VAR_20);
    }

  FUNC_19 (VAR_20 != VAR_4);

  VAR_23 = FUNC_1 (VAR_20);


  if (VAR_18 == VAR_9 && !VAR_17)
    {
      VAR_17 = FUNC_13 (FUNC_15 (VAR_23), 0);
      VAR_17 = FUNC_9 (VAR_2, VAR_23, VAR_17);
    }
  else
    {
      if (VAR_18 == VAR_10
   || VAR_18 == VAR_7
   || VAR_18 == VAR_14)
 FUNC_19 (VAR_19 == VAR_4);


      if (!FUNC_21
   (FUNC_5 (VAR_17), FUNC_1 (VAR_20)))
 {
   if (VAR_18 != FUNC_8 (VAR_3))





     VAR_17 = FUNC_17 (VAR_17, VAR_20);
   else


     VAR_17 = FUNC_12 (VAR_5, VAR_17,
     VAR_20, 1);
 }
    }

  FUNC_19 (VAR_17 != VAR_4);

  VAR_22 = FUNC_20 (VAR_20, VAR_18, 1);




  if ((VAR_18 == VAR_6
       || VAR_18 == VAR_7)
      && FUNC_2 (VAR_23))
    {
      tree VAR_24;
      tree VAR_25;




      VAR_24 = FUNC_4 (FUNC_3 (VAR_11));
      VAR_24 = FUNC_18 (VAR_24);
      VAR_24 = FUNC_11 (VAR_0, FUNC_5 (VAR_24),
      FUNC_10 (VAR_1, VAR_8,
       VAR_12, VAR_16),
      VAR_13,
      VAR_24);
      FUNC_19 (FUNC_0 (VAR_20));
      VAR_25 = FUNC_10 (VAR_5, FUNC_5 (VAR_24), VAR_24,
   FUNC_0 (VAR_20));

      VAR_19 = FUNC_22 (VAR_4, VAR_25, VAR_19);
    }

  return FUNC_14 (VAR_17, VAR_22, VAR_19,
    FUNC_6 (FUNC_1 (VAR_20)),
    VAR_21, ((void*)0));
}
