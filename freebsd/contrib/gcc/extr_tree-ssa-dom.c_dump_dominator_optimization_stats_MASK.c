
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long num_exprs_considered; int num_copy_prop; int num_const_prop; int num_re; int num_stmts; } ;
typedef int FILE ;


 int FUNC_0 (int ,long) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__ VAR_1 ;

void
FUNC_3 (FILE *VAR_2)
{
  long VAR_3;

  FUNC_1 (VAR_2, "Total number of statements:                   %6ld\n\n",
    VAR_1.num_stmts);
  FUNC_1 (VAR_2, "Exprs considered for dominator optimizations: %6ld\n",
           VAR_1.num_exprs_considered);

  VAR_3 = VAR_1.num_exprs_considered;
  if (VAR_3 == 0)
    VAR_3 = 1;

  FUNC_1 (VAR_2, "    Redundant expressions eliminated:         %6ld (%.0f%%)\n",
    VAR_1.num_re, FUNC_0 (VAR_1.num_re,
          VAR_3));
  FUNC_1 (VAR_2, "    Constants propagated:                     %6ld\n",
    VAR_1.num_const_prop);
  FUNC_1 (VAR_2, "    Copies propagated:                        %6ld\n",
    VAR_1.num_copy_prop);

  FUNC_1 (VAR_2, "\nHash table statistics:\n");

  FUNC_1 (VAR_2, "    avail_exprs: ");
  FUNC_2 (VAR_2, VAR_0);
}
