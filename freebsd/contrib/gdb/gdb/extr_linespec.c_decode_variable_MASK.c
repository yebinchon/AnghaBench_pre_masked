
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int dummy; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct minimal_symbol {int dummy; } ;


 int FUNC_0 (struct symtab*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct minimal_symbol* FUNC_8 (char*,int *,int *) ;
 struct symbol* FUNC_9 (char*,int ,int ,int ,struct symtab**) ;
 struct symtabs_and_lines FUNC_10 (int,struct minimal_symbol*) ;
 struct symtabs_and_lines FUNC_11 (int,char***,char*,struct symbol*,struct symtab*,struct symtab*) ;

__attribute__((used)) static struct symtabs_and_lines
FUNC_12 (char *VAR_2, int VAR_3, char ***VAR_4,
   struct symtab *VAR_5, int *VAR_6)
{
  struct symbol *VAR_7;

  struct symtab *VAR_8;

  struct minimal_symbol *VAR_9;

  VAR_7 = FUNC_9 (VAR_2,
         (VAR_5
   ? FUNC_1 (FUNC_0 (VAR_5),
          VAR_0)
   : FUNC_4 (0)),
         VAR_1, 0, &VAR_8);

  if (VAR_7 != ((void*)0))
    return FUNC_11 (VAR_3, VAR_4, VAR_2, VAR_7,
    VAR_5, VAR_8);

  VAR_9 = FUNC_8 (VAR_2, ((void*)0), ((void*)0));

  if (VAR_9 != ((void*)0))
    return FUNC_10 (VAR_3, VAR_9);

  if (!FUNC_5 () &&
      !FUNC_7 () && !FUNC_6 ())
    FUNC_2 ("No symbol table is loaded.  Use the \"file\" command.");

  if (VAR_6)
    {
      *VAR_6 = 1;







      FUNC_3 ("Function \"%s\" not defined.", VAR_2);
    }

  FUNC_2 ("Function \"%s\" not defined.", VAR_2);
}
