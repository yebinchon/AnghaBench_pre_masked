
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iv_use {int id; int type; scalar_t__ related_cands; int iv; int * op_p; int stmt; } ;
typedef int FILE ;


 int VAR_0 ;



 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,int ) ;

void
FUNC_5 (FILE *VAR_1, struct iv_use *VAR_2)
{
  FUNC_2 (VAR_1, "use %d\n", VAR_2->id);

  switch (VAR_2->type)
    {
    case 128:
      FUNC_2 (VAR_1, "  generic\n");
      break;

    case 130:
      FUNC_2 (VAR_1, "  address\n");
      break;

    case 129:
      FUNC_2 (VAR_1, "  compare\n");
      break;

    default:
      FUNC_3 ();
    }

  FUNC_2 (VAR_1, "  in statement ");
  FUNC_4 (VAR_1, VAR_2->stmt, VAR_0);
  FUNC_2 (VAR_1, "\n");

  FUNC_2 (VAR_1, "  at position ");
  if (VAR_2->op_p)
    FUNC_4 (VAR_1, *VAR_2->op_p, VAR_0);
  FUNC_2 (VAR_1, "\n");

  FUNC_1 (VAR_1, VAR_2->iv);

  if (VAR_2->related_cands)
    {
      FUNC_2 (VAR_1, "  related candidates ");
      FUNC_0 (VAR_1, VAR_2->related_cands);
    }
}
