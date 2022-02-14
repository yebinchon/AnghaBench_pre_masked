
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct var_ann_d {int dummy; } ;
struct tree_phi_node {int dummy; } ;
struct stmt_ann_d {int dummy; } ;
struct phi_arg_d {int dummy; } ;
struct dfa_stats_d {int num_stmt_anns; int num_var_anns; int num_uses; int num_defs; int num_vuses; int num_v_may_defs; int num_v_must_defs; int num_phis; int num_phi_args; int max_num_phi_args; } ;
struct TYPE_2__ {char* (* decl_printable_name ) (int ,int) ;} ;
typedef int FILE ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct dfa_stats_d*) ;
 int VAR_0 ;
 int FUNC_3 (int *,char const* const,...) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_4 (int ,int) ;

void
FUNC_5 (FILE *VAR_3)
{
  struct dfa_stats_d VAR_4;

  unsigned long VAR_5, VAR_6 = 0;
  const char * const VAR_7 = "%-30s%-13s%12s\n";
  const char * const VAR_8 = "%-30s%13lu%11lu%c\n";
  const char * const VAR_9 = "%-43s%11d%c\n";
  const char *VAR_10
    = VAR_1.decl_printable_name (VAR_0, 2);

  FUNC_2 (&VAR_4);

  FUNC_3 (VAR_3, "\nDFA Statistics for %s\n\n", VAR_10);

  FUNC_3 (VAR_3, "---------------------------------------------------------\n");
  FUNC_3 (VAR_3, VAR_7, "", "  Number of  ", "Memory");
  FUNC_3 (VAR_3, VAR_7, "", "  instances  ", "used ");
  FUNC_3 (VAR_3, "---------------------------------------------------------\n");

  VAR_5 = VAR_2 * sizeof (tree);
  VAR_6 += VAR_5;
  FUNC_3 (VAR_3, VAR_8, "Referenced variables", (unsigned long)VAR_2,
    FUNC_1 (VAR_5), FUNC_0 (VAR_5));

  VAR_5 = VAR_4.num_stmt_anns * sizeof (struct stmt_ann_d);
  VAR_6 += VAR_5;
  FUNC_3 (VAR_3, VAR_8, "Statements annotated", VAR_4.num_stmt_anns,
    FUNC_1 (VAR_5), FUNC_0 (VAR_5));

  VAR_5 = VAR_4.num_var_anns * sizeof (struct var_ann_d);
  VAR_6 += VAR_5;
  FUNC_3 (VAR_3, VAR_8, "Variables annotated", VAR_4.num_var_anns,
    FUNC_1 (VAR_5), FUNC_0 (VAR_5));

  VAR_5 = VAR_4.num_uses * sizeof (tree *);
  VAR_6 += VAR_5;
  FUNC_3 (VAR_3, VAR_8, "USE operands", VAR_4.num_uses,
    FUNC_1 (VAR_5), FUNC_0 (VAR_5));

  VAR_5 = VAR_4.num_defs * sizeof (tree *);
  VAR_6 += VAR_5;
  FUNC_3 (VAR_3, VAR_8, "DEF operands", VAR_4.num_defs,
    FUNC_1 (VAR_5), FUNC_0 (VAR_5));

  VAR_5 = VAR_4.num_vuses * sizeof (tree *);
  VAR_6 += VAR_5;
  FUNC_3 (VAR_3, VAR_8, "VUSE operands", VAR_4.num_vuses,
    FUNC_1 (VAR_5), FUNC_0 (VAR_5));

  VAR_5 = VAR_4.num_v_may_defs * sizeof (tree *);
  VAR_6 += VAR_5;
  FUNC_3 (VAR_3, VAR_8, "V_MAY_DEF operands", VAR_4.num_v_may_defs,
    FUNC_1 (VAR_5), FUNC_0 (VAR_5));

  VAR_5 = VAR_4.num_v_must_defs * sizeof (tree *);
  VAR_6 += VAR_5;
  FUNC_3 (VAR_3, VAR_8, "V_MUST_DEF operands", VAR_4.num_v_must_defs,
    FUNC_1 (VAR_5), FUNC_0 (VAR_5));

  VAR_5 = VAR_4.num_phis * sizeof (struct tree_phi_node);
  VAR_6 += VAR_5;
  FUNC_3 (VAR_3, VAR_8, "PHI nodes", VAR_4.num_phis,
    FUNC_1 (VAR_5), FUNC_0 (VAR_5));

  VAR_5 = VAR_4.num_phi_args * sizeof (struct phi_arg_d);
  VAR_6 += VAR_5;
  FUNC_3 (VAR_3, VAR_8, "PHI arguments", VAR_4.num_phi_args,
     FUNC_1 (VAR_5), FUNC_0 (VAR_5));

  FUNC_3 (VAR_3, "---------------------------------------------------------\n");
  FUNC_3 (VAR_3, VAR_9, "Total memory used by DFA/SSA data", FUNC_1 (VAR_6),
    FUNC_0 (VAR_6));
  FUNC_3 (VAR_3, "---------------------------------------------------------\n");
  FUNC_3 (VAR_3, "\n");

  if (VAR_4.num_phis)
    FUNC_3 (VAR_3, "Average number of arguments per PHI node: %.1f (max: %d)\n",
      (float) VAR_4.num_phi_args / (float) VAR_4.num_phis,
      VAR_4.max_num_phi_args);

  FUNC_3 (VAR_3, "\n");
}
