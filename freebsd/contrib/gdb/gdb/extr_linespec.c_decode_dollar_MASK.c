
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {scalar_t__ pc; int line; struct symtab* symtab; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct minimal_symbol {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct value*) ;
 int VAR_1 ;
 struct value* FUNC_2 (int) ;
 int FUNC_3 (struct symtab_and_line*,int *,char***) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct symtab_and_line*) ;
 int FUNC_6 (char*) ;
 struct minimal_symbol* FUNC_7 (char*,int *,int *) ;
 struct symbol* FUNC_8 (char*,int ,int ,int ,struct symtab**) ;
 struct symtabs_and_lines FUNC_9 (int,struct minimal_symbol*) ;
 int FUNC_10 (char*,char*,int*) ;
 struct symtabs_and_lines FUNC_11 (int,char***,char*,struct symbol*,int *,struct symtab*) ;
 int FUNC_12 (struct value*) ;
 struct value* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static struct symtabs_and_lines
FUNC_15 (char *VAR_2, int VAR_3, struct symtab *VAR_4,
        char ***VAR_5, struct symtab *VAR_6)
{
  struct value *VAR_7;
  int VAR_8 = 0;
  int VAR_9 = 0;
  struct symtabs_and_lines VAR_10;
  struct symtab_and_line VAR_11;
  char *VAR_12;
  struct symbol *VAR_13;

  struct symtab *VAR_14;
  struct minimal_symbol *VAR_15;

  VAR_12 = (VAR_2[1] == '$') ? VAR_2 + 2 : VAR_2 + 1;
  while (*VAR_12 >= '0' && *VAR_12 <= '9')
    VAR_12++;
  if (!*VAR_12)
    {

      FUNC_10 ((VAR_2[1] == '$') ? VAR_2 + 2 : VAR_2 + 1, "%d", &VAR_8);
      VAR_7 = FUNC_2 ((VAR_2[1] == '$') ? -VAR_8 : VAR_8);
      if (FUNC_0 (FUNC_1 (VAR_7)) != VAR_0)
 FUNC_4 ("History values used in line specs must have integer values.");
    }
  else
    {




      VAR_13 = FUNC_8 (VAR_2, 0, VAR_1, 0, &VAR_14);
      VAR_6 = (struct symtab *) 0;
      VAR_9 = 1;

      if (VAR_13)
 return FUNC_11 (VAR_3, VAR_5, VAR_2, VAR_13,
        ((void*)0), VAR_14);


      VAR_15 = FUNC_7 (VAR_2, ((void*)0), ((void*)0));

      if (VAR_15)
 return FUNC_9 (VAR_3, VAR_15);


      VAR_9 = (VAR_6 == 0) ? 1 : 0;
      VAR_7 = FUNC_13 (FUNC_6 (VAR_2 + 1));
      if (FUNC_0 (FUNC_1 (VAR_7)) != VAR_0)
 FUNC_4 ("Convenience variables used in line specs must have integer values.");
    }

  FUNC_5 (&VAR_11);


  VAR_11.symtab = VAR_6 ? VAR_6 : VAR_4;
  VAR_11.line = FUNC_12 (VAR_7);
  VAR_11.pc = 0;

  VAR_10.sals = (struct symtab_and_line *) FUNC_14 (sizeof VAR_11);
  VAR_10.sals[0] = VAR_11;
  VAR_10.nelts = 1;

  if (VAR_9)
    FUNC_3 (VAR_10.sals, ((void*)0), VAR_5);

  return VAR_10;
}
