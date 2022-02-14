
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {int pc; scalar_t__ end; scalar_t__ line; scalar_t__ symtab; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;


 int FUNC_0 (struct symtab*) ;
 struct block* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct symbol*) ;
 int FUNC_3 (struct symbol*) ;
 int FUNC_4 (struct symbol*) ;
 int FUNC_5 (struct symbol*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct symtab_and_line*,int ,char***) ;
 struct symtabs_and_lines FUNC_8 (struct symbol**,int,int,char***) ;
 struct symtab_and_line FUNC_9 (struct symbol*,int) ;
 char* FUNC_10 (struct symtab*,struct block*,char*,struct symbol**,int*,int*) ;
 struct symbol* FUNC_11 (int ) ;
 struct block* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (char*,int ) ;
 scalar_t__ FUNC_15 (int) ;

struct symtabs_and_lines
FUNC_16 (char **VAR_2, int VAR_3, struct symtab *VAR_4,
      char ***VAR_5, char *VAR_6)
{
  struct symtabs_and_lines VAR_7;
  struct symbol **VAR_8 = ((void*)0);
  struct symbol *VAR_9 = ((void*)0);
  char *VAR_10 = ((void*)0);
  struct block *VAR_11 = ((void*)0);
  int VAR_12 = 0;
  int VAR_13 = 0;

  VAR_7.sals = ((void*)0);
  VAR_7.nelts = 0;

  if (VAR_4 != ((void*)0))
    VAR_11 = FUNC_1 (FUNC_0 (VAR_4), VAR_1);
  else
    VAR_11 = FUNC_12 (0);

  VAR_10 = FUNC_10 (VAR_4, VAR_11, *VAR_2, ((void*)0), &VAR_12, &VAR_13);

  if (VAR_12 > 0)
    {
      VAR_8 = (struct symbol **) FUNC_6 ((VAR_12 + 1) * sizeof (struct symbol *));
      VAR_8[VAR_12] = 0;

      VAR_10 = FUNC_10 (VAR_4, VAR_11, *VAR_2, VAR_8, &VAR_12, &VAR_13);
      *VAR_2 = VAR_10;
    }






  if (VAR_12 == 1)
    {
      if (VAR_13 > 0)
 {

   VAR_9 = VAR_8[0];
 }
      else
 {
   VAR_9 = FUNC_11 (FUNC_5 (VAR_8[0]));
   if ((VAR_9 != ((void*)0)) && FUNC_13 (FUNC_3 (VAR_8[0]), FUNC_3 (VAR_9)) != 0)
     {
       FUNC_14 ("debugging symbol \"%s\" does not match selector; ignoring", FUNC_3 (VAR_9));
       VAR_9 = ((void*)0);
     }
 }

      VAR_7.sals = (struct symtab_and_line *) FUNC_15 (sizeof (struct symtab_and_line));
      VAR_7.nelts = 1;

      if (VAR_9 && FUNC_2 (VAR_9) == VAR_0)
 {

   VAR_7.sals[0] = FUNC_9 (VAR_9, VAR_3);
   FUNC_7 (VAR_7.sals, FUNC_4 (VAR_9), VAR_5);
 }
      else
 {

   VAR_7.sals[0].symtab = 0;
   VAR_7.sals[0].line = 0;
   VAR_7.sals[0].end = 0;
   VAR_7.sals[0].pc = FUNC_5 (VAR_8[0]);
 }
      return VAR_7;
    }

  if (VAR_12 > 1)
    {

      return FUNC_8 (VAR_8, VAR_13, VAR_3, VAR_5);
    }

  return VAR_7;
}
