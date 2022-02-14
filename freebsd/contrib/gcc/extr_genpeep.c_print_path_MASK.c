
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link {scalar_t__ vecelt; int pos; struct link* next; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1 (struct link *VAR_0)
{
  if (VAR_0 == 0)
    FUNC_0 ("pat");
  else if (VAR_0->vecelt >= 0)
    {
      FUNC_0 ("XVECEXP (");
      FUNC_1 (VAR_0->next);
      FUNC_0 (", %d, %d)", VAR_0->pos, VAR_0->vecelt);
    }
  else
    {
      FUNC_0 ("XEXP (");
      FUNC_1 (VAR_0->next);
      FUNC_0 (", %d)", VAR_0->pos);
    }
}
