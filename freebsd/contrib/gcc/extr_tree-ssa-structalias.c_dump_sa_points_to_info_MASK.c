
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total_vars; int nonpointer_vars; int unified_vars_static; int unified_vars_dynamic; int iterations; int num_edges; int num_implicit_edges; } ;
typedef int FILE ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,char*,...) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_3 (FILE *VAR_5)
{
  unsigned int VAR_6;

  FUNC_2 (VAR_5, "\nPoints-to sets\n\n");

  if (VAR_1 & VAR_0)
    {
      FUNC_2 (VAR_5, "Stats:\n");
      FUNC_2 (VAR_5, "Total vars:               %d\n", VAR_2.total_vars);
      FUNC_2 (VAR_5, "Non-pointer vars:          %d\n",
        VAR_2.nonpointer_vars);
      FUNC_2 (VAR_5, "Statically unified vars:  %d\n",
        VAR_2.unified_vars_static);
      FUNC_2 (VAR_5, "Dynamically unified vars: %d\n",
        VAR_2.unified_vars_dynamic);
      FUNC_2 (VAR_5, "Iterations:               %d\n", VAR_2.iterations);
      FUNC_2 (VAR_5, "Number of edges:          %d\n", VAR_2.num_edges);
      FUNC_2 (VAR_5, "Number of implicit edges: %d\n",
        VAR_2.num_implicit_edges);
    }

  for (VAR_6 = 0; VAR_6 < FUNC_0 (VAR_3, VAR_4); VAR_6++)
    FUNC_1 (VAR_5, VAR_6);
}
