
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bundle_state {int insn; int before_nops_num; int after_nops_num; int accumulated_insns_num; int branch_deviation; int dfa_state; struct bundle_state* allocated_states_chain; int cost; struct bundle_state* originator; scalar_t__ insn_num; } ;
typedef int state_t ;
typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct bundle_state*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 struct bundle_state* FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct bundle_state*) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int *) ;
 int VAR_8 ;
 int FUNC_13 (struct bundle_state*,int) ;
 int FUNC_14 (struct bundle_state*,int) ;

__attribute__((used)) static void
FUNC_15 (struct bundle_state *VAR_9, int VAR_10,
       rtx VAR_11, int VAR_12, int VAR_13)
{
  struct bundle_state *VAR_14;

  VAR_14 = FUNC_8 ();
  FUNC_11 (VAR_14->dfa_state, VAR_9->dfa_state, VAR_7);
  VAR_14->insn = VAR_11;
  VAR_14->insn_num = VAR_9->insn_num + 1;
  VAR_14->cost = VAR_9->cost;
  VAR_14->originator = VAR_9;
  VAR_14->before_nops_num = VAR_10;
  VAR_14->after_nops_num = 0;
  VAR_14->accumulated_insns_num
    = VAR_9->accumulated_insns_num + VAR_10;
  VAR_14->branch_deviation = VAR_9->branch_deviation;
  FUNC_6 (VAR_11);
  if (FUNC_2 (VAR_11) == VAR_1)
    {
      FUNC_6 (FUNC_1 (VAR_11) != VAR_3);
      if (!FUNC_14 (VAR_14, VAR_10))
 return;
      if (!FUNC_13 (VAR_14, VAR_11))
 return;
      FUNC_11 (VAR_8, VAR_14->dfa_state, VAR_7);
      if (FUNC_12 (VAR_8, VAR_6) >= 0
   && VAR_14->accumulated_insns_num % 3 != 0)
 {
   FUNC_5 (VAR_14);
   return;
 }
    }
  else if (FUNC_1 (VAR_11) != VAR_3)
    {
      if (!FUNC_14 (VAR_14, VAR_10))
 return;
      if (!FUNC_13 (VAR_14, VAR_11))
 return;
      VAR_14->accumulated_insns_num++;
      FUNC_6 (FUNC_0 (FUNC_3 (VAR_11)) != VAR_0
    && FUNC_4 (FUNC_3 (VAR_11)) < 0);

      if (FUNC_9 (VAR_11) == VAR_5)
 VAR_14->accumulated_insns_num++;
    }
  else
    {





      if (VAR_10 > 0 && FUNC_7 (VAR_11) == VAR_2)
 {
   FUNC_5 (VAR_14);
   return;
 }

      FUNC_12 (VAR_14->dfa_state, VAR_6);
      FUNC_12 (VAR_14->dfa_state, ((void*)0));
      VAR_14->cost++;
      if (!FUNC_14 (VAR_14, VAR_10))
 return;
      if (!FUNC_13 (VAR_14, VAR_11))
 return;
      VAR_14->accumulated_insns_num++;
      if (FUNC_0 (FUNC_3 (VAR_11)) == VAR_0
   || FUNC_4 (FUNC_3 (VAR_11)) >= 0)
 {

   VAR_14->after_nops_num
     = 3 - VAR_14->accumulated_insns_num % 3;
   VAR_14->accumulated_insns_num
     += 3 - VAR_14->accumulated_insns_num % 3;
 }
      else if (FUNC_9 (VAR_11) == VAR_5)
 VAR_14->accumulated_insns_num++;
    }
  if (FUNC_9 (VAR_11) == VAR_4)
    VAR_14->branch_deviation
      += 2 - (VAR_14->accumulated_insns_num - 1) % 3;
  if (VAR_12 && VAR_14->accumulated_insns_num % 3 != 0)
    {
      if (!VAR_13 && FUNC_10 (VAR_14))
 {
   state_t VAR_15;
   struct bundle_state *VAR_16;
   struct bundle_state *VAR_17;

   VAR_16 = FUNC_8 ();
   VAR_15 = VAR_16->dfa_state;
   VAR_17 = VAR_16->allocated_states_chain;
   *VAR_16 = *VAR_14;
   VAR_16->dfa_state = VAR_15;
   VAR_16->allocated_states_chain = VAR_17;
   FUNC_11 (VAR_16->dfa_state, VAR_14->dfa_state,
    VAR_7);
   VAR_14 = VAR_16;
 }
      if (!FUNC_14 (VAR_14,
      3 - VAR_14->accumulated_insns_num % 3))
 return;
      VAR_14->after_nops_num
 = 3 - VAR_14->accumulated_insns_num % 3;
      VAR_14->accumulated_insns_num
 += 3 - VAR_14->accumulated_insns_num % 3;
    }
  if (!FUNC_10 (VAR_14))
    FUNC_5 (VAR_14);
  return;
}
