
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int ,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_14 (int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_15 (int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_16 (int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (scalar_t__,int ) ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 int FUNC_22 (int ) ;
 int * VAR_11 ;
 scalar_t__ FUNC_23 (scalar_t__,int ) ;
 int FUNC_24 (int ,int ,int ) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int ,int ,int ) ;
 int FUNC_27 (int ,int ,int ,int ) ;

__attribute__((used)) static rtx
FUNC_28 (tree VAR_12, rtx VAR_13, enum machine_mode VAR_14)
{
  tree VAR_15 = FUNC_5 (VAR_12, 1);

  if (VAR_13 == VAR_10)
    {
      tree VAR_16 = VAR_11[VAR_0];
      if (!VAR_16)
 return 0;

      return FUNC_15 (FUNC_8 (VAR_16, VAR_15),
     VAR_13, VAR_14, VAR_2);
    }

  if (!FUNC_27 (VAR_15, VAR_7, VAR_7, VAR_8))
    return 0;
  else
    {
      tree VAR_17, VAR_18, VAR_19, VAR_20;
      tree VAR_21;
      rtx VAR_22;





      VAR_18 = FUNC_7 (FUNC_3 (VAR_15));
      if (! FUNC_10 (VAR_18) || ! (VAR_19 = FUNC_11 (VAR_18, 0)))
 return FUNC_16 (FUNC_7 (VAR_15),
         FUNC_7 (FUNC_3 (VAR_15)),
         VAR_13, 2);

      VAR_17 = FUNC_7 (VAR_15);
      VAR_20 = FUNC_24 (VAR_6, VAR_19, FUNC_25 (1));
      VAR_21 = FUNC_9 (VAR_5, VAR_20);
      VAR_21 = FUNC_26 (VAR_5, VAR_18, VAR_21);
      VAR_21 = FUNC_26 (VAR_5, VAR_17, VAR_21);
      VAR_22 = FUNC_13 (VAR_21, FUNC_6 (VAR_12),
        VAR_13, VAR_14, 2);

      if (VAR_22)
 return VAR_22;

      if (FUNC_4 (VAR_19) == VAR_3)
 {
   rtx VAR_23 = FUNC_17 (VAR_19);

   if (FUNC_0 (VAR_23) == VAR_1)
     {
       VAR_22 = FUNC_14 (FUNC_22 (VAR_12),
        VAR_15, VAR_13, VAR_14);

       if (VAR_22)
  {
    if (! VAR_13)
      {
        if (VAR_14 != VAR_9)
   VAR_13 = FUNC_21 (VAR_14);
        else
   VAR_13 = FUNC_21 (FUNC_1 (VAR_22));
      }
    if (FUNC_1 (VAR_13) != FUNC_1 (VAR_22))
      VAR_22 = FUNC_20 (FUNC_1 (VAR_13), VAR_22);

    VAR_22 = FUNC_23 (VAR_22, FUNC_2 (VAR_23));
    VAR_22 = FUNC_12 (VAR_13, FUNC_18 (VAR_22, VAR_4));
    FUNC_19 (VAR_22);

    return VAR_13;
  }
     }
 }

      return FUNC_16 (FUNC_7 (VAR_15),
       FUNC_7 (FUNC_3 (VAR_15)),
       VAR_13, 2);
    }
}
