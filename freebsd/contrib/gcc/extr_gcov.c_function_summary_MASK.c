
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ calls; int calls_executed; scalar_t__ branches; int branches_taken; int branches_executed; scalar_t__ lines; int lines_executed; int name; } ;
typedef TYPE_1__ coverage_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (const coverage_t *VAR_2, const char *VAR_3)
{
  FUNC_0 (VAR_1, "%s '%s'\n", VAR_3, VAR_2->name);

  if (VAR_2->lines)
    FUNC_0 (VAR_1, "Lines executed:%s of %d\n",
      FUNC_1 (VAR_2->lines_executed, VAR_2->lines, 2),
      VAR_2->lines);
  else
    FUNC_0 (VAR_1, "No executable lines\n");

  if (VAR_0)
    {
      if (VAR_2->branches)
 {
   FUNC_0 (VAR_1, "Branches executed:%s of %d\n",
     FUNC_1 (VAR_2->branches_executed,
    VAR_2->branches, 2),
     VAR_2->branches);
   FUNC_0 (VAR_1, "Taken at least once:%s of %d\n",
     FUNC_1 (VAR_2->branches_taken,
    VAR_2->branches, 2),
     VAR_2->branches);
 }
      else
 FUNC_0 (VAR_1, "No branches\n");
      if (VAR_2->calls)
 FUNC_0 (VAR_1, "Calls executed:%s of %d\n",
   FUNC_1 (VAR_2->calls_executed, VAR_2->calls, 2),
   VAR_2->calls);
      else
 FUNC_0 (VAR_1, "No calls\n");
    }
}
