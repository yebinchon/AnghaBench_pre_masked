
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct assign_parm_data_one {scalar_t__ promoted_mode; scalar_t__ nominal_mode; scalar_t__ entry_parm; scalar_t__ stack_parm; int passed_type; } ;
struct assign_parm_data_all {int conversion_insns; } ;
typedef int rtx ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (scalar_t__,int ,int) ;
 int FUNC_19 (scalar_t__) ;

__attribute__((used)) static void
FUNC_20 (struct assign_parm_data_all *VAR_1, tree VAR_2,
           struct assign_parm_data_one *VAR_3)
{


  bool VAR_4 = 0;

  if (VAR_3->promoted_mode != VAR_3->nominal_mode)
    {

      rtx VAR_5 = FUNC_14 (FUNC_1 (VAR_3->entry_parm));

      FUNC_12 (VAR_5, FUNC_19 (VAR_3->entry_parm));

      FUNC_17 (VAR_1->conversion_insns);
      VAR_4 = 1;

      VAR_3->entry_parm = FUNC_10 (VAR_3->nominal_mode, VAR_5,
       FUNC_7 (FUNC_5 (VAR_2)));

      if (VAR_3->stack_parm)

 VAR_3->stack_parm
   = FUNC_8 (VAR_3->stack_parm, VAR_3->nominal_mode, 0);
    }

  if (VAR_3->entry_parm != VAR_3->stack_parm)
    {
      rtx VAR_6, VAR_7;

      if (VAR_3->stack_parm == 0)
 {
   VAR_3->stack_parm
     = FUNC_9 (FUNC_1 (VAR_3->entry_parm),
      FUNC_2 (FUNC_1 (VAR_3->entry_parm)),
      FUNC_6 (VAR_3->passed_type));
   FUNC_18 (VAR_3->stack_parm, VAR_2, 1);
 }

      VAR_7 = FUNC_19 (VAR_3->stack_parm);
      VAR_6 = FUNC_19 (VAR_3->entry_parm);

      if (FUNC_3 (VAR_6))
 {

   if (!VAR_4)
     FUNC_17 (VAR_1->conversion_insns);
   VAR_4 = 1;

   FUNC_11 (VAR_7, VAR_6,
      FUNC_0 (FUNC_16 (VAR_3->passed_type)),
      VAR_0);
 }
      else
 FUNC_12 (VAR_7, VAR_6);
    }

  if (VAR_4)
    {
      VAR_1->conversion_insns = FUNC_15 ();
      FUNC_13 ();
    }

  FUNC_4 (VAR_2, VAR_3->stack_parm);
}
