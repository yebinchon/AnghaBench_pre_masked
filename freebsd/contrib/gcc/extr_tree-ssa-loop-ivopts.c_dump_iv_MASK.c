
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iv {scalar_t__ biv_p; scalar_t__ base_object; scalar_t__ base; scalar_t__ step; scalar_t__ ssa_name; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,scalar_t__,int ) ;

void
FUNC_3 (FILE *VAR_1, struct iv *VAR_2)
{
  if (VAR_2->ssa_name)
    {
      FUNC_1 (VAR_1, "ssa name ");
      FUNC_2 (VAR_1, VAR_2->ssa_name, VAR_0);
      FUNC_1 (VAR_1, "\n");
    }

  FUNC_1 (VAR_1, "  type ");
  FUNC_2 (VAR_1, FUNC_0 (VAR_2->base), VAR_0);
  FUNC_1 (VAR_1, "\n");

  if (VAR_2->step)
    {
      FUNC_1 (VAR_1, "  base ");
      FUNC_2 (VAR_1, VAR_2->base, VAR_0);
      FUNC_1 (VAR_1, "\n");

      FUNC_1 (VAR_1, "  step ");
      FUNC_2 (VAR_1, VAR_2->step, VAR_0);
      FUNC_1 (VAR_1, "\n");
    }
  else
    {
      FUNC_1 (VAR_1, "  invariant ");
      FUNC_2 (VAR_1, VAR_2->base, VAR_0);
      FUNC_1 (VAR_1, "\n");
    }

  if (VAR_2->base_object)
    {
      FUNC_1 (VAR_1, "  base object ");
      FUNC_2 (VAR_1, VAR_2->base_object, VAR_0);
      FUNC_1 (VAR_1, "\n");
    }

  if (VAR_2->biv_p)
    FUNC_1 (VAR_1, "  is a biv\n");
}
