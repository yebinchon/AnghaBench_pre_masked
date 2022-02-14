
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;


 int FUNC_0 (struct minimal_symbol*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 struct minimal_symbol* FUNC_2 (char*,int *,int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7 (void)
{
  struct minimal_symbol *VAR_3, *VAR_4;

  FUNC_5 ();
  VAR_3 = FUNC_2 ("_novlys", ((void*)0), ((void*)0));
  if (! VAR_3)
    {
      FUNC_1 ("Error reading inferior's overlay table: "
             "couldn't find `_novlys' variable\n"
             "in inferior.  Use `overlay manual' mode.");
      return 0;
    }

  VAR_4 = FUNC_2 ("_ovly_table", ((void*)0), ((void*)0));
  if (! VAR_4)
    {
      FUNC_1 ("Error reading inferior's overlay table: couldn't find "
             "`_ovly_table' array\n"
             "in inferior.  Use `overlay manual' mode.");
      return 0;
    }

  VAR_0 = FUNC_3 (FUNC_0 (VAR_3), 4);
  VAR_1
    = (void *) FUNC_6 (VAR_0 * sizeof (*VAR_1));
  VAR_2 = FUNC_0 (VAR_4);
  FUNC_4 (VAR_2,
                          (int *) VAR_1,
                          VAR_0 * 4);

  return 1;
}
