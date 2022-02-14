
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {scalar_t__ line; int symtab; int pc; int section; } ;
struct symtab {int filename; } ;
struct symbol {int dummy; } ;
struct minimal_symbol {int dummy; } ;
struct cleanup {int dummy; } ;
struct block {int dummy; } ;


 int FUNC_0 (struct symtab*) ;
 struct block* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct minimal_symbol*) ;
 scalar_t__ FUNC_4 (struct symbol*) ;
 scalar_t__ FUNC_5 (struct symbol*) ;
 int FUNC_6 (struct symbol*) ;
 int FUNC_7 (struct minimal_symbol*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct minimal_symbol* FUNC_8 (char*) ;
 int FUNC_9 (char*,struct block*,int ,struct symbol***,struct block***) ;
 char* FUNC_10 (char*) ;
 struct symtabs_and_lines FUNC_11 (int ,int,char***) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct cleanup*) ;
 int FUNC_14 (char*,...) ;
 char* FUNC_15 (struct symtab_and_line,int ) ;
 struct symtab_and_line FUNC_16 (struct symbol*,int) ;
 struct symtabs_and_lines FUNC_17 (int ,int,struct symbol**,int) ;
 struct block* FUNC_18 (int *) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (struct symtab_and_line*) ;
 scalar_t__ FUNC_23 (char) ;
 struct cleanup* FUNC_24 (int ,struct symtab_and_line*) ;
 int FUNC_25 (char*,char*,int) ;
 int FUNC_26 (struct symtab_and_line*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_27 (int ,char) ;
 int FUNC_28 (char*,char**,int) ;
 int FUNC_29 (struct symbol*) ;
 char FUNC_30 (char) ;
 int FUNC_31 (struct symbol**,struct block**,int,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_32 (int) ;

struct symtabs_and_lines
FUNC_33 (char **VAR_8, struct symtab *VAR_9,
     int VAR_10, char ***VAR_11)
{
  struct symbol **VAR_12;
  struct block **VAR_13;
  struct block *VAR_14;
  int VAR_15, VAR_16, VAR_17;
  struct symtabs_and_lines VAR_18;
  struct cleanup *VAR_19 = FUNC_24 (VAR_6, ((void*)0));
  char *VAR_20;

  int VAR_21;
  char *VAR_22;
  char *VAR_23;

  if (VAR_9 == ((void*)0))
    VAR_14 = FUNC_18 (((void*)0));
  else
    VAR_14 = FUNC_1 (FUNC_0 (VAR_9), VAR_2);

  if (VAR_11 != ((void*)0))
    *VAR_11 = (char **) ((void*)0);

  VAR_20 = *VAR_8;
  if (**VAR_8 == '*')
    *VAR_8 += 1;
  else
    {
      while (**VAR_8 != '\000' &&
      !FUNC_27 (VAR_4, **VAR_8))
 *VAR_8 += 1;
    }
  VAR_21 = *VAR_8 - VAR_20;

  VAR_17 = -1;
  if (VAR_9 != ((void*)0) && (*VAR_8)[0] == ':' && FUNC_23 ((*VAR_8)[1]))
    {
      VAR_17 = FUNC_28 (*VAR_8 + 1, VAR_8, 10);
      while (**VAR_8 == ' ' || **VAR_8 == '\t')
 *VAR_8 += 1;
    }

  if (VAR_20[0] == '*')
    {
      if (VAR_17 == -1)
 FUNC_14 ("Wild-card function with no line number or file name.");

      return FUNC_11 (VAR_9->filename, VAR_17, VAR_11);
    }

  if (VAR_20[0] == '\'')
    {
      VAR_20 += 1;
      VAR_21 -= 2;
    }

  if (VAR_20[0] == '<')
    {
      VAR_23 = (char *) FUNC_12 (VAR_21 - 1);
      FUNC_25 (VAR_23, VAR_20 + 1, VAR_21 - 2);
      VAR_23[VAR_21 - 2] = '\000';
      VAR_22 = ((void*)0);
    }
  else
    {
      VAR_23 = (char *) FUNC_12 (VAR_21 + 1);
      FUNC_25 (VAR_23, VAR_20, VAR_21);
      VAR_23[VAR_21] = '\000';
      VAR_22 = (char *) FUNC_12 (VAR_21 + 1);
      for (VAR_16 = 0; VAR_16 < VAR_21; VAR_16 += 1)
 VAR_22[VAR_16] = FUNC_30 (VAR_20[VAR_16]);
      VAR_22[VAR_21] = '\000';
    }

  VAR_15 = 0;
  if (VAR_22 != ((void*)0))
    VAR_15 = FUNC_9 (FUNC_10 (VAR_22), VAR_14,
     VAR_3, &VAR_12, &VAR_13);
  if (VAR_15 == 0)
    VAR_15 = FUNC_9 (VAR_23, VAR_14,
     VAR_3, &VAR_12, &VAR_13);
  if (VAR_15 == 0 && VAR_17 >= 0)
    FUNC_14 ("No line number information found for %s.", VAR_23);
  else if (VAR_15 == 0)
    {






      struct symtab_and_line VAR_24;

      struct minimal_symbol *VAR_25;

      FUNC_22 (&VAR_24);

      VAR_25 = ((void*)0);
      if (VAR_22 != ((void*)0))
 VAR_25 = FUNC_8 (FUNC_10 (VAR_22));
      if (VAR_25 == ((void*)0))
 VAR_25 = FUNC_8 (VAR_23);
      if (VAR_25 != ((void*)0))
 {
   VAR_24.pc = FUNC_7 (VAR_25);
   VAR_24.section = FUNC_3 (VAR_25);
   if (VAR_10)
     {
       VAR_24.pc += VAR_0;
       FUNC_2 (VAR_24.pc);
     }
   VAR_18.sals = (struct symtab_and_line *)
     FUNC_32 (sizeof (struct symtab_and_line));
   VAR_18.sals[0] = VAR_24;
   VAR_18.nelts = 1;
   return VAR_18;
 }

      if (!FUNC_19 () &&
   !FUNC_21 () && !FUNC_20 ())
 FUNC_14 (VAR_5);

      FUNC_14 ("Function \"%s\" not defined.", VAR_23);
      return VAR_18;
    }

  if (VAR_17 >= 0)
    {
      return
 FUNC_17 (VAR_9->filename, VAR_17,
          VAR_12, VAR_15);
    }
  else
    {
      VAR_18.nelts =
 FUNC_31 (VAR_12, VAR_13, VAR_15, VAR_15);
    }

  VAR_18.sals = (struct symtab_and_line *)
    FUNC_32 (sizeof (struct symtab_and_line) * VAR_18.nelts);
  FUNC_26 (VAR_18.sals, 0, VAR_18.nelts * sizeof (VAR_18.sals[VAR_16]));
  FUNC_24 (VAR_7, VAR_18.sals);

  VAR_16 = 0;
  while (VAR_16 < VAR_18.nelts)
    {
      if (FUNC_4 (VAR_12[VAR_16]) == VAR_1)
 VAR_18.sals[VAR_16] = FUNC_16 (VAR_12[VAR_16], VAR_10);
      else if (FUNC_5 (VAR_12[VAR_16]) != 0)
 {
   VAR_18.sals[VAR_16].symtab = FUNC_29 (VAR_12[VAR_16]);
   VAR_18.sals[VAR_16].line = FUNC_5 (VAR_12[VAR_16]);
 }
      else if (VAR_17 >= 0)
 {

   VAR_12[VAR_16] = VAR_12[VAR_18.nelts - 1];
   VAR_13[VAR_16] = VAR_13[VAR_18.nelts - 1];
   VAR_18.nelts -= 1;
   continue;
 }
      else
 FUNC_14 ("Line number not known for symbol \"%s\"", VAR_23);
      VAR_16 += 1;
    }

  if (VAR_11 != ((void*)0) && (VAR_17 >= 0 || VAR_15 > 1))
    {
      *VAR_11 = (char **) FUNC_32 (sizeof (char *) * VAR_18.nelts);
      for (VAR_16 = 0; VAR_16 < VAR_18.nelts; VAR_16 += 1)
 (*VAR_11)[VAR_16] =
   FUNC_15 (VAR_18.sals[VAR_16],
     FUNC_6 (VAR_12[VAR_16]));
    }

  FUNC_13 (VAR_19);
  return VAR_18;
}
