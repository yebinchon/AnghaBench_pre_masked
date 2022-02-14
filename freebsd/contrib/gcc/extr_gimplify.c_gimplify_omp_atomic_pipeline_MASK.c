
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum gimplify_status { ____Placeholder_gimplify_status } gimplify_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (scalar_t__) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__,scalar_t__,int *) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__* VAR_12 ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (scalar_t__,int *) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_15 (scalar_t__*,scalar_t__*,scalar_t__,scalar_t__) ;
 scalar_t__* VAR_13 ;
 scalar_t__ FUNC_16 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static enum gimplify_status
FUNC_17 (tree *VAR_15, tree *VAR_16, tree VAR_17,
         tree VAR_18, int VAR_19)
{
  tree VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
  tree VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;

  VAR_28 = VAR_12[VAR_0 + VAR_19 + 1];
  VAR_26 = FUNC_3 (FUNC_2 (FUNC_2 (VAR_17)));
  VAR_27 = FUNC_2 (FUNC_2 (VAR_28));

  if (VAR_13[FUNC_4 (VAR_27)] == VAR_1)
    return VAR_6;

  VAR_20 = FUNC_12 (VAR_26, ((void*)0));
  VAR_23 = FUNC_12 (VAR_26, ((void*)0));



  if (FUNC_15 (&VAR_18, VAR_16, VAR_17, VAR_20) < 0)
    return VAR_5;

  VAR_30 = FUNC_8 (VAR_17);
  VAR_30 = FUNC_6 (VAR_8, VAR_14, VAR_20, VAR_30);
  FUNC_14 (VAR_30, VAR_16);




  if (FUNC_0 (VAR_26) || FUNC_1 (VAR_26))
    {
      VAR_21 = VAR_20;
      VAR_24 = VAR_23;
      VAR_31 = VAR_17;
    }
  else
    {
      VAR_21 = FUNC_12 (VAR_27, ((void*)0));
      VAR_24 = FUNC_12 (VAR_27, ((void*)0));

      VAR_30 = FUNC_5 (VAR_10, VAR_27, VAR_20);
      VAR_30 = FUNC_6 (VAR_8, VAR_14, VAR_21, VAR_30);
      FUNC_14 (VAR_30, VAR_16);
      VAR_31 = FUNC_13 (FUNC_10 (VAR_27), VAR_17);
    }

  VAR_22 = FUNC_12 (VAR_27, ((void*)0));

  VAR_25 = FUNC_11 ();
  VAR_30 = FUNC_5 (VAR_7, VAR_14, VAR_25);
  FUNC_14 (VAR_30, VAR_16);

  VAR_30 = FUNC_6 (VAR_8, VAR_14, VAR_23, VAR_18);
  FUNC_14 (VAR_30, VAR_16);

  if (VAR_23 != VAR_24)
    {
      VAR_30 = FUNC_5 (VAR_10, VAR_27, VAR_23);
      VAR_30 = FUNC_6 (VAR_8, VAR_14, VAR_24, VAR_30);
      FUNC_14 (VAR_30, VAR_16);
    }

  VAR_30 = FUNC_6 (VAR_8, VAR_14, VAR_22,
       FUNC_13 (VAR_27, VAR_21));
  FUNC_14 (VAR_30, VAR_16);

  VAR_29 = FUNC_16 (((void*)0), FUNC_13 (VAR_27, VAR_24), ((void*)0));
  VAR_29 = FUNC_16 (((void*)0), FUNC_13 (VAR_27, VAR_21), VAR_29);
  VAR_29 = FUNC_16 (((void*)0), VAR_31, VAR_29);
  VAR_30 = FUNC_9 (VAR_28, VAR_29);
  if (VAR_20 == VAR_21)
    VAR_30 = FUNC_13 (VAR_26, VAR_30);
  VAR_30 = FUNC_6 (VAR_8, VAR_14, VAR_21, VAR_30);
  FUNC_14 (VAR_30, VAR_16);


  if (VAR_20 != VAR_21)
    {
      VAR_30 = FUNC_5 (VAR_10, VAR_26, VAR_21);
      VAR_30 = FUNC_6 (VAR_8, VAR_14, VAR_20, VAR_30);
      FUNC_14 (VAR_30, VAR_16);
    }




  VAR_30 = FUNC_7 (VAR_2, VAR_14,
       FUNC_6 (VAR_9, VAR_11, VAR_21, VAR_22),
       FUNC_5 (VAR_3, VAR_14, VAR_25), ((void*)0));
  FUNC_14 (VAR_30, VAR_16);

  *VAR_15 = ((void*)0);
  return VAR_4;
}
