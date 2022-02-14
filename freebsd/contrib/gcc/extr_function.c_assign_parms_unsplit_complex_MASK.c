
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct assign_parm_data_all {int conversion_insns; scalar_t__ orig_fnargs; } ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {scalar_t__ (* split_complex_arg ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ calls; } ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int,scalar_t__) ;
 scalar_t__ FUNC_18 (int ,scalar_t__,scalar_t__) ;
 int FUNC_19 () ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (scalar_t__,scalar_t__) ;
 int FUNC_23 (scalar_t__,scalar_t__,int) ;
 int FUNC_24 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_25 (int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_26 (struct assign_parm_data_all *VAR_2, tree VAR_3)
{
  tree VAR_4;
  tree VAR_5 = VAR_2->orig_fnargs;

  for (VAR_4 = VAR_5; VAR_4; VAR_4 = FUNC_9 (VAR_4))
    {
      if (FUNC_10 (FUNC_11 (VAR_4)) == VAR_0
   && VAR_1.calls.split_complex_arg (FUNC_11 (VAR_4)))
 {
   rtx VAR_6, VAR_7, VAR_8;
   enum machine_mode VAR_9 = FUNC_4 (FUNC_1 (VAR_4));

   VAR_7 = FUNC_2 (VAR_3);
   VAR_8 = FUNC_2 (FUNC_9 (VAR_3));
   if (VAR_9 != FUNC_3 (VAR_7))
     {
       VAR_7 = FUNC_17 (VAR_9, VAR_7);
       VAR_8 = FUNC_17 (VAR_9, VAR_8);
     }

   if (FUNC_8 (VAR_4))
     {
       rtx VAR_10, VAR_11;
       HOST_WIDE_INT VAR_12 = FUNC_20 (FUNC_11 (VAR_4));



       VAR_6 = FUNC_14 (FUNC_1 (VAR_4), VAR_12,
     FUNC_12 (FUNC_11 (VAR_4)));
       FUNC_23 (VAR_6, VAR_4, 1);
       VAR_10 = FUNC_13 (VAR_6, VAR_9, 0);
       VAR_11 = FUNC_13 (VAR_6, VAR_9, FUNC_5 (VAR_9));
       FUNC_21 (VAR_2->conversion_insns);
       FUNC_15 (VAR_10, VAR_7);
       FUNC_15 (VAR_11, VAR_8);
       VAR_2->conversion_insns = FUNC_19 ();
       FUNC_16 ();
     }
   else
     VAR_6 = FUNC_18 (FUNC_1 (VAR_4), VAR_7, VAR_8);
   FUNC_7 (VAR_4, VAR_6);

   VAR_7 = FUNC_0 (VAR_3);
   VAR_8 = FUNC_0 (FUNC_9 (VAR_3));
   if (VAR_9 != FUNC_3 (VAR_7))
     {
       VAR_7 = FUNC_17 (VAR_9, VAR_7);
       VAR_8 = FUNC_17 (VAR_9, VAR_8);
     }
   VAR_6 = FUNC_18 (FUNC_1 (VAR_4), VAR_7, VAR_8);
   FUNC_22 (VAR_4, VAR_6);
   VAR_3 = FUNC_9 (VAR_3);
 }
      else
 {
   FUNC_7 (VAR_4, FUNC_2 (VAR_3));
   FUNC_22 (VAR_4, FUNC_0 (VAR_3));



   if (FUNC_0 (VAR_4) && FUNC_6 (FUNC_0 (VAR_4)))
     FUNC_24 (FUNC_0 (VAR_4), VAR_4);
 }

      VAR_3 = FUNC_9 (VAR_3);
    }
}
