
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {scalar_t__ (* type_for_mode ) (int,int) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 TYPE_2__ VAR_10 ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int,int) ;
 scalar_t__ FUNC_17 (int,int) ;
 int FUNC_18 (scalar_t__) ;

tree
FUNC_19 (enum tree_code VAR_11, tree VAR_12, tree VAR_13,
        tree VAR_14)
{

  if ((VAR_11 == VAR_4 || VAR_11 == VAR_2)
      && FUNC_1 (VAR_12) == VAR_0 && FUNC_14 (VAR_13)
      && FUNC_13 (FUNC_4 (VAR_12, 1)))
    {
      tree VAR_15 = FUNC_4 (VAR_12, 0);
      tree VAR_16 = FUNC_5 (VAR_12);
      int VAR_17 = FUNC_18 (FUNC_4 (VAR_12, 1));
      enum machine_mode VAR_18 = FUNC_6 (VAR_16);
      int VAR_19;
      tree VAR_20, VAR_21, VAR_22;
      tree VAR_23;



      VAR_23 = FUNC_12 (VAR_11, VAR_12, VAR_13,
       VAR_14);
      if (VAR_23)
 return VAR_23;







      if (FUNC_1 (VAR_15) == VAR_6
   && FUNC_1 (FUNC_4 (VAR_15, 1)) == VAR_3
   && FUNC_2 (FUNC_4 (VAR_15, 1)) == 0
   && VAR_17 < FUNC_7 (VAR_16)
   && 0 > FUNC_9 (FUNC_4 (VAR_15, 1),
       VAR_17 - FUNC_7 (VAR_16)))
 {
   VAR_17 += FUNC_3 (FUNC_4 (VAR_15, 1));
   VAR_15 = FUNC_4 (VAR_15, 0);
 }
      VAR_19 = 1;


      VAR_20 = VAR_10.types.type_for_mode (VAR_18, 0);
      VAR_21 = VAR_10.types.type_for_mode (VAR_18, 1);
      VAR_22 = VAR_19 ? VAR_21 : VAR_20;
      VAR_15 = FUNC_11 (VAR_22, VAR_15);

      if (VAR_17 != 0)
 VAR_15 = FUNC_8 (VAR_6, VAR_22,
   VAR_15, FUNC_15 (VAR_17));

      if (VAR_11 == VAR_2)
 VAR_15 = FUNC_10 (VAR_1, VAR_22,
        VAR_15, VAR_9);


      VAR_15 = FUNC_8 (VAR_0, VAR_22,
        VAR_15, VAR_9);


      VAR_15 = FUNC_11 (VAR_14, VAR_15);

      return VAR_15;
    }
  return VAR_5;
}
