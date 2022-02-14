
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iv_cand {int id; int pos; scalar_t__ depends_on; scalar_t__ important; struct iv* iv; } ;
struct iv {int dummy; } ;
typedef int FILE ;





 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,struct iv*) ;
 int FUNC_2 (int *,char*,...) ;

void
FUNC_3 (FILE *VAR_0, struct iv_cand *VAR_1)
{
  struct iv *VAR_2 = VAR_1->iv;

  FUNC_2 (VAR_0, "candidate %d%s\n",
    VAR_1->id, VAR_1->important ? " (important)" : "");

  if (VAR_1->depends_on)
    {
      FUNC_2 (VAR_0, "  depends on ");
      FUNC_0 (VAR_0, VAR_1->depends_on);
    }

  if (!VAR_2)
    {
      FUNC_2 (VAR_0, "  final value replacement\n");
      return;
    }

  switch (VAR_1->pos)
    {
    case 129:
      FUNC_2 (VAR_0, "  incremented before exit test\n");
      break;

    case 130:
      FUNC_2 (VAR_0, "  incremented at end\n");
      break;

    case 128:
      FUNC_2 (VAR_0, "  original biv\n");
      break;
    }

  FUNC_1 (VAR_0, VAR_2);
}
