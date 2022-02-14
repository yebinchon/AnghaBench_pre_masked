
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct du_chain {void** loc; int cl; int earlyclobber; struct du_chain* next_chain; struct du_chain* next_use; scalar_t__ need_caller_save_reg; void* insn; } ;
typedef void* rtx ;
typedef enum scan_actions { ____Placeholder_scan_actions } scan_actions ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum op_type { ____Placeholder_op_type } op_type ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 size_t FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (void*) ;
 scalar_t__ VAR_2 ;
 struct du_chain* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__,char*,char*,int,char*) ;
 int FUNC_4 (int) ;
 int** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct du_chain* FUNC_5 (int *,int) ;
 struct du_chain* VAR_9 ;
 char** VAR_10 ;
 int VAR_11 ;
 char** VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_6 (rtx VAR_16, rtx *VAR_17, enum reg_class VAR_18,
       enum scan_actions VAR_19, enum op_type VAR_20, int VAR_21)
{
  struct du_chain **VAR_22;
  rtx VAR_23 = *VAR_17;
  enum machine_mode VAR_24 = FUNC_0 (VAR_23);
  int VAR_25 = FUNC_2 (VAR_23);
  int VAR_26 = VAR_5[VAR_25][VAR_24];

  if (VAR_19 == VAR_8)
    {
      if (VAR_20 == VAR_1)
 {
   struct du_chain *VAR_27
     = FUNC_5 (&VAR_11, sizeof (struct du_chain));
   VAR_27->next_use = 0;
   VAR_27->next_chain = VAR_9;
   VAR_27->loc = VAR_17;
   VAR_27->insn = VAR_16;
   VAR_27->cl = VAR_18;
   VAR_27->need_caller_save_reg = 0;
   VAR_27->earlyclobber = VAR_21;
   VAR_9 = VAR_27;
 }
      return;
    }

  if ((VAR_20 == VAR_1) != (VAR_19 == VAR_15 || VAR_19 == VAR_6))
    return;

  for (VAR_22 = &VAR_9; *VAR_22;)
    {
      struct du_chain *VAR_28 = *VAR_22;
      if (*VAR_28->loc == VAR_2)
 VAR_22 = &VAR_28->next_chain;
      else
 {
   int VAR_29 = FUNC_2 (*VAR_28->loc);
   int VAR_30 = VAR_5[VAR_29][FUNC_0 (*VAR_28->loc)];
   int VAR_31 = (VAR_29 == VAR_25 && VAR_30 == VAR_26);

   if (VAR_29 + VAR_30 <= VAR_25
       || VAR_25 + VAR_26 <= VAR_29)
     {
       VAR_22 = &VAR_28->next_chain;
       continue;
     }

   if (VAR_19 == VAR_7 || VAR_19 == VAR_6)
     {
       FUNC_4 (VAR_31);





       if (VAR_18 != VAR_0)
  {
    VAR_28 = FUNC_5 (&VAR_11, sizeof (struct du_chain));
    VAR_28->next_use = 0;
    VAR_28->next_chain = (*VAR_22)->next_chain;
    VAR_28->loc = VAR_17;
    VAR_28->insn = VAR_16;
    VAR_28->cl = VAR_18;
    VAR_28->need_caller_save_reg = 0;
    while (*VAR_22)
      VAR_22 = &(*VAR_22)->next_use;
    *VAR_22 = VAR_28;
    return;
  }
     }

   if (VAR_19 != VAR_14 || ! VAR_31)
     {
       struct du_chain *VAR_32 = VAR_28->next_chain;





       if ((VAR_19 == VAR_13 || VAR_19 == VAR_15)
    && VAR_31)
  {
    VAR_28->next_chain = VAR_3;
    VAR_3 = VAR_28;
    if (VAR_4)
      FUNC_3 (VAR_4,
        "Closing chain %s at insn %d (%s)\n",
        VAR_10[FUNC_2 (*VAR_28->loc)], FUNC_1 (VAR_16),
        VAR_12[(int) VAR_19]);
  }
       else
  {
    if (VAR_4)
      FUNC_3 (VAR_4,
        "Discarding chain %s at insn %d (%s)\n",
        VAR_10[FUNC_2 (*VAR_28->loc)], FUNC_1 (VAR_16),
        VAR_12[(int) VAR_19]);
  }
       *VAR_22 = VAR_32;
     }
   else
     VAR_22 = &VAR_28->next_chain;
 }
    }
}
