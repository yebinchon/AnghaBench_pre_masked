
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_table {int dummy; } ;
struct macro_definition {scalar_t__ kind; int argc; scalar_t__ replacement; scalar_t__* argv; struct macro_table* table; } ;


 int FUNC_0 (struct macro_table*,...) ;
 int FUNC_1 (struct macro_definition*,struct macro_table*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2 (void *VAR_1)
{
  struct macro_definition *VAR_2 = (struct macro_definition *) VAR_1;
  struct macro_table *VAR_3 = VAR_2->table;

  if (VAR_2->kind == VAR_0)
    {
      int VAR_4;

      for (VAR_4 = 0; VAR_4 < VAR_2->argc; VAR_4++)
        FUNC_0 (VAR_3, (char *) VAR_2->argv[VAR_4]);
      FUNC_0 (VAR_3, (char **) VAR_2->argv);
    }

  FUNC_0 (VAR_3, (char *) VAR_2->replacement);
  FUNC_1 (VAR_2, VAR_3);
}
