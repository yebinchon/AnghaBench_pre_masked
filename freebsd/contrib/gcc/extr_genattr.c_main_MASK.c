
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int,char**) ;
 int FUNC_8 (char*) ;
 char* VAR_5 ;
 int FUNC_9 (char*) ;
 int * FUNC_10 (int*,int*) ;
 int VAR_6 ;

int
FUNC_11 (int VAR_7, char **VAR_8)
{
  rtx VAR_9;
  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = 0;
  int VAR_13 = 0;
  int VAR_14;

  VAR_5 = "genattr";

  if (FUNC_7 (VAR_7, VAR_8) != VAR_4)
    return (VAR_3);

  FUNC_9 ("/* Generated automatically by the program `genattr'");
  FUNC_9 ("   from the machine description file `md'.  */\n");
  FUNC_9 ("#ifndef GCC_INSN_ATTR_H");
  FUNC_9 ("#define GCC_INSN_ATTR_H\n");




  FUNC_9 ("#define HAVE_ATTR_alternative");
  FUNC_9 ("#define get_attr_alternative(insn) which_alternative");



  while (1)
    {
      int VAR_15, VAR_16;

      VAR_9 = FUNC_10 (&VAR_15, &VAR_16);
      if (VAR_9 == ((void*)0))
 break;

      if (FUNC_0 (VAR_9) == VAR_0)
 FUNC_6 (VAR_9);

      else if (FUNC_0 (VAR_9) == VAR_1)
        {
   if (! VAR_10)
     {
       FUNC_8 ("#define DELAY_SLOTS\n");
       FUNC_8 ("extern int num_delay_slots (rtx);\n");
       FUNC_8 ("extern int eligible_for_delay (rtx, int, rtx, int);\n\n");
       FUNC_8 ("extern int const_num_delay_slots (rtx);\n\n");
       VAR_10 = 1;
     }

   for (VAR_14 = 0; VAR_14 < FUNC_2 (VAR_9, 1); VAR_14 += 3)
     {
       if (FUNC_1 (VAR_9, 1, VAR_14 + 1) && ! VAR_11)
  {
    FUNC_8 ("#define ANNUL_IFTRUE_SLOTS\n");
    FUNC_8 ("extern int eligible_for_annul_true (rtx, int, rtx, int);\n");
    VAR_11 = 1;
  }

       if (FUNC_1 (VAR_9, 1, VAR_14 + 2) && ! VAR_12)
  {
    FUNC_8 ("#define ANNUL_IFFALSE_SLOTS\n");
    FUNC_8 ("extern int eligible_for_annul_false (rtx, int, rtx, int);\n");
    VAR_12 = 1;
  }
     }
        }

      else if (FUNC_0 (VAR_9) == VAR_2)
 VAR_13++;
    }

  if (VAR_13 > 0)
    {


      FUNC_8 ("\n#define INSN_SCHEDULING\n");
      FUNC_8 ("\n/* DFA based pipeline interface.  */");
      FUNC_8 ("\n#ifndef AUTOMATON_ALTS\n");
      FUNC_8 ("#define AUTOMATON_ALTS 0\n");
      FUNC_8 ("#endif\n\n");
      FUNC_8 ("\n#ifndef AUTOMATON_STATE_ALTS\n");
      FUNC_8 ("#define AUTOMATON_STATE_ALTS 0\n");
      FUNC_8 ("#endif\n\n");
      FUNC_8 ("#ifndef CPU_UNITS_QUERY\n");
      FUNC_8 ("#define CPU_UNITS_QUERY 0\n");
      FUNC_8 ("#endif\n\n");

      FUNC_8 ("/* Internal insn code number used by automata.  */\n");
      FUNC_8 ("extern int internal_dfa_insn_code (rtx);\n\n");
      FUNC_8 ("/* Insn latency time defined in define_insn_reservation. */\n");
      FUNC_8 ("extern int insn_default_latency (rtx);\n\n");
      FUNC_8 ("/* Return nonzero if there is a bypass for given insn\n");
      FUNC_8 ("   which is a data producer.  */\n");
      FUNC_8 ("extern int bypass_p (rtx);\n\n");
      FUNC_8 ("/* Insn latency time on data consumed by the 2nd insn.\n");
      FUNC_8 ("   Use the function if bypass_p returns nonzero for\n");
      FUNC_8 ("   the 1st insn. */\n");
      FUNC_8 ("extern int insn_latency (rtx, rtx);\n\n");
      FUNC_8 ("\n#if AUTOMATON_ALTS\n");
      FUNC_8 ("/* The following function returns number of alternative\n");
      FUNC_8 ("   reservations of given insn.  It may be used for better\n");
      FUNC_8 ("   insns scheduling heuristics. */\n");
      FUNC_8 ("extern int insn_alts (rtx);\n\n");
      FUNC_8 ("#endif\n\n");
      FUNC_8 ("/* Maximal possible number of insns waiting results being\n");
      FUNC_8 ("   produced by insns whose execution is not finished. */\n");
      FUNC_8 ("extern const int max_insn_queue_index;\n\n");
      FUNC_8 ("/* Pointer to data describing current state of DFA.  */\n");
      FUNC_8 ("typedef void *state_t;\n\n");
      FUNC_8 ("/* Size of the data in bytes.  */\n");
      FUNC_8 ("extern int state_size (void);\n\n");
      FUNC_8 ("/* Initiate given DFA state, i.e. Set up the state\n");
      FUNC_8 ("   as all functional units were not reserved.  */\n");
      FUNC_8 ("extern void state_reset (state_t);\n");
      FUNC_8 ("/* The following function returns negative value if given\n");
      FUNC_8 ("   insn can be issued in processor state described by given\n");
      FUNC_8 ("   DFA state.  In this case, the DFA state is changed to\n");
      FUNC_8 ("   reflect the current and future reservations by given\n");
      FUNC_8 ("   insn.  Otherwise the function returns minimal time\n");
      FUNC_8 ("   delay to issue the insn.  This delay may be zero\n");
      FUNC_8 ("   for superscalar or VLIW processors.  If the second\n");
      FUNC_8 ("   parameter is NULL the function changes given DFA state\n");
      FUNC_8 ("   as new processor cycle started.  */\n");
      FUNC_8 ("extern int state_transition (state_t, rtx);\n");
      FUNC_8 ("\n#if AUTOMATON_STATE_ALTS\n");
      FUNC_8 ("/* The following function returns number of possible\n");
      FUNC_8 ("   alternative reservations of given insn in given\n");
      FUNC_8 ("   DFA state.  It may be used for better insns scheduling\n");
      FUNC_8 ("   heuristics.  By default the function is defined if\n");
      FUNC_8 ("   macro AUTOMATON_STATE_ALTS is defined because its\n");
      FUNC_8 ("   implementation may require much memory.  */\n");
      FUNC_8 ("extern int state_alts (state_t, rtx);\n");
      FUNC_8 ("#endif\n\n");
      FUNC_8 ("extern int min_issue_delay (state_t, rtx);\n");
      FUNC_8 ("/* The following function returns nonzero if no one insn\n");
      FUNC_8 ("   can be issued in current DFA state. */\n");
      FUNC_8 ("extern int state_dead_lock_p (state_t);\n");
      FUNC_8 ("/* The function returns minimal delay of issue of the 2nd\n");
      FUNC_8 ("   insn after issuing the 1st insn in given DFA state.\n");
      FUNC_8 ("   The 1st insn should be issued in given state (i.e.\n");
      FUNC_8 ("    state_transition should return negative value for\n");
      FUNC_8 ("    the insn and the state).  Data dependencies between\n");
      FUNC_8 ("    the insns are ignored by the function.  */\n");
      FUNC_8
 ("extern int min_insn_conflict_delay (state_t, rtx, rtx);\n");
      FUNC_8 ("/* The following function outputs reservations for given\n");
      FUNC_8 ("   insn as they are described in the corresponding\n");
      FUNC_8 ("   define_insn_reservation.  */\n");
      FUNC_8 ("extern void print_reservation (FILE *, rtx);\n");
      FUNC_8 ("\n#if CPU_UNITS_QUERY\n");
      FUNC_8 ("/* The following function returns code of functional unit\n");
      FUNC_8 ("   with given name (see define_cpu_unit). */\n");
      FUNC_8 ("extern int get_cpu_unit_code (const char *);\n");
      FUNC_8 ("/* The following function returns nonzero if functional\n");
      FUNC_8 ("   unit with given code is currently reserved in given\n");
      FUNC_8 ("   DFA state.  */\n");
      FUNC_8 ("extern int cpu_unit_reservation_p (state_t, int);\n");
      FUNC_8 ("#endif\n\n");
      FUNC_8 ("/* Clean insn code cache.  It should be called if there\n");
      FUNC_8 ("   is a chance that condition value in a\n");
      FUNC_8 ("   define_insn_reservation will be changed after\n");
      FUNC_8 ("   last call of dfa_start.  */\n");
      FUNC_8 ("extern void dfa_clean_insn_cache (void);\n\n");
      FUNC_8 ("extern void dfa_clear_single_insn_cache (rtx);\n\n");
      FUNC_8 ("/* Initiate and finish work with DFA.  They should be\n");
      FUNC_8 ("   called as the first and the last interface\n");
      FUNC_8 ("   functions.  */\n");
      FUNC_8 ("extern void dfa_start (void);\n");
      FUNC_8 ("extern void dfa_finish (void);\n");
    }
  else
    {


      FUNC_8 ("typedef void *state_t;\n\n");
    }





  FUNC_8("\n#define ATTR_FLAG_forward\t0x1\n");
  FUNC_8("#define ATTR_FLAG_backward\t0x2\n");
  FUNC_8("#define ATTR_FLAG_likely\t0x4\n");
  FUNC_8("#define ATTR_FLAG_very_likely\t0x8\n");
  FUNC_8("#define ATTR_FLAG_unlikely\t0x10\n");
  FUNC_8("#define ATTR_FLAG_very_unlikely\t0x20\n");

  FUNC_9("\n#endif /* GCC_INSN_ATTR_H */");

  if (FUNC_4 (VAR_6) || FUNC_5 (VAR_6) || FUNC_3 (VAR_6))
    return VAR_3;

  return VAR_4;
}
