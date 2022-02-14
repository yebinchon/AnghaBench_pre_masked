
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum built_in_function { ____Placeholder_built_in_function } built_in_function ;
struct TYPE_3__ {scalar_t__ (* global_bindings_p ) () ;} ;
struct TYPE_4__ {TYPE_1__ decls; } ;
typedef int REAL_VALUE_TYPE ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_8 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_9 ;
 int FUNC_13 (int,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int *,int,int *) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 () ;
 scalar_t__ FUNC_18 () ;

__attribute__((used)) static tree
FUNC_19 (enum built_in_function VAR_13, enum tree_code VAR_14,
       tree VAR_15, tree VAR_16, tree VAR_17)
{
  REAL_VALUE_TYPE VAR_18;

  if (FUNC_0 (VAR_13))
    {
      tree VAR_19 = FUNC_10 (FUNC_7 (VAR_16, 1));
      enum machine_mode VAR_20 = FUNC_11 (FUNC_9 (VAR_16));

      VAR_18 = FUNC_8 (VAR_17);
      if (FUNC_6 (VAR_18))
 {

   if (VAR_14 == VAR_0 || VAR_14 == VAR_4 || VAR_14 == VAR_3)
     return FUNC_14 (VAR_15, VAR_11, VAR_19);



   if (VAR_14 == VAR_6 || !FUNC_3 (VAR_20))
     return FUNC_14 (VAR_15, VAR_10, VAR_19);


   return FUNC_13 (VAR_1, VAR_15, VAR_19,
         FUNC_12 (FUNC_9 (VAR_19), VAR_9));
 }
      else if (VAR_14 == VAR_2 || VAR_14 == VAR_1)
 {
   REAL_VALUE_TYPE VAR_21;

   FUNC_4 (VAR_21, VAR_5, VAR_18, VAR_18);
   FUNC_15 (&VAR_21, VAR_20, &VAR_21);

   if (FUNC_5 (VAR_21))
     {

       if (FUNC_2 (VAR_20))
  return FUNC_13 (VAR_0, VAR_15, VAR_19,
        FUNC_12 (FUNC_9 (VAR_19), VAR_21));



       return FUNC_14 (VAR_15, VAR_11, VAR_19);
     }


   return FUNC_13 (VAR_14, VAR_15, VAR_19,
         FUNC_12 (FUNC_9 (VAR_19), VAR_21));
 }
      else if (VAR_14 == VAR_4 || VAR_14 == VAR_3)
 {
   REAL_VALUE_TYPE VAR_22;

   FUNC_4 (VAR_22, VAR_5, VAR_18, VAR_18);
   FUNC_15 (&VAR_22, VAR_20, &VAR_22);

   if (FUNC_5 (VAR_22))
     {


       if (! FUNC_3 (VAR_20) && ! FUNC_2 (VAR_20))
  return FUNC_14 (VAR_15, VAR_10, VAR_19);



       if (! FUNC_3 (VAR_20))
  return FUNC_13 (VAR_6, VAR_15, VAR_19,
        FUNC_12 (FUNC_9 (VAR_19), VAR_22));



       if (! FUNC_2 (VAR_20))
  return FUNC_13 (VAR_1, VAR_15, VAR_19,
        FUNC_12 (FUNC_9 (VAR_19), VAR_9));


       if (VAR_12.decls.global_bindings_p () != 0
    || FUNC_1 (VAR_19))
  return VAR_7;

       VAR_19 = FUNC_16 (VAR_19);
       return FUNC_13 (VAR_8, VAR_15,
      FUNC_13 (VAR_1, VAR_15, VAR_19,
            FUNC_12 (FUNC_9 (VAR_19),
          VAR_9)),
      FUNC_13 (VAR_6, VAR_15, VAR_19,
            FUNC_12 (FUNC_9 (VAR_19),
          VAR_22)));
     }


   if (! FUNC_3 (VAR_20))
     return FUNC_13 (VAR_14, VAR_15, VAR_19,
    FUNC_12 (FUNC_9 (VAR_19), VAR_22));


   if (VAR_12.decls.global_bindings_p () == 0
       && ! FUNC_1 (VAR_19))
     {
       VAR_19 = FUNC_16 (VAR_19);
       return FUNC_13 (VAR_8, VAR_15,
      FUNC_13 (VAR_1, VAR_15, VAR_19,
            FUNC_12 (FUNC_9 (VAR_19),
          VAR_9)),
      FUNC_13 (VAR_14, VAR_15, VAR_19,
            FUNC_12 (FUNC_9 (VAR_19),
          VAR_22)));
     }
 }
    }

  return VAR_7;
}
