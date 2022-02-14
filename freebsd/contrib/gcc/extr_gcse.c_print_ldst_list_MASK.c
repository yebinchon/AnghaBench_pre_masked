
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ls_expr {int index; scalar_t__ stores; scalar_t__ loads; scalar_t__ pattern; } ;
typedef int FILE ;


 struct ls_expr* FUNC_0 () ;
 int FUNC_1 (int *,char*,...) ;
 struct ls_expr* FUNC_2 (struct ls_expr*) ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (FILE * VAR_0)
{
  struct ls_expr * VAR_1;

  FUNC_1 (VAR_0, "LDST list: \n");

  for (VAR_1 = FUNC_0(); VAR_1 != ((void*)0); VAR_1 = FUNC_2 (VAR_1))
    {
      FUNC_1 (VAR_0, "  Pattern (%3d): ", VAR_1->index);

      FUNC_3 (VAR_0, VAR_1->pattern);

      FUNC_1 (VAR_0, "\n	 Loads : ");

      if (VAR_1->loads)
 FUNC_3 (VAR_0, VAR_1->loads);
      else
 FUNC_1 (VAR_0, "(nil)");

      FUNC_1 (VAR_0, "\n	Stores : ");

      if (VAR_1->stores)
 FUNC_3 (VAR_0, VAR_1->stores);
      else
 FUNC_1 (VAR_0, "(nil)");

      FUNC_1 (VAR_0, "\n\n");
    }

  FUNC_1 (VAR_0, "\n");
}
