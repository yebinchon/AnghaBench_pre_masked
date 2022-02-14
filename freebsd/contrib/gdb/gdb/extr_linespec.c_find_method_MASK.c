
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {int dummy; } ;
struct symbol {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct symbol*) ;
 int FUNC_1 (struct symbol*) ;
 struct symbol** FUNC_2 (int) ;
 int FUNC_3 (char*,struct type*,struct symbol**) ;
 int FUNC_4 (char*,char*,int ,...) ;
 struct symtabs_and_lines FUNC_5 (struct symbol**,int,int,char***) ;
 struct symtab_and_line FUNC_6 (struct symbol*,int) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct type*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static struct symtabs_and_lines
FUNC_13 (int VAR_1, char ***VAR_2, char *VAR_3,
      char *VAR_4, struct type *VAR_5, struct symbol *VAR_6)
{
  struct symtabs_and_lines VAR_7;
  struct symbol *VAR_8 = 0;
  int VAR_9;
  struct symbol **VAR_10 = FUNC_2 (FUNC_11 (VAR_5)
         * sizeof (struct symbol *));




  VAR_9 = FUNC_3 (VAR_4, VAR_5, VAR_10);

  if (VAR_9 == 1)
    {

      VAR_8 = VAR_10[0];

      if (VAR_8 && FUNC_0 (VAR_8) == VAR_0)
 {
   VAR_7.sals = (struct symtab_and_line *)
     FUNC_12 (sizeof (struct symtab_and_line));
   VAR_7.nelts = 1;
   VAR_7.sals[0] = FUNC_6 (VAR_8,
          VAR_1);
 }
      else
 {
   VAR_7.nelts = 0;
 }
      return VAR_7;
    }
  if (VAR_9 > 0)
    {


      return FUNC_5 (VAR_10, VAR_9, VAR_1, VAR_2);
    }
  else
    {
      char *VAR_11;

      if (FUNC_7 (VAR_4))
 {
   VAR_11 = (char *) FUNC_2 (FUNC_10 (VAR_4 + 3) + 9);
   FUNC_9 (VAR_11, "operator ");
   FUNC_8 (VAR_11, VAR_4 + 3);
 }
      else
 VAR_11 = VAR_4;
      if (VAR_11[0] == '~')
 FUNC_4 (VAR_3,
    "the class `%s' does not have destructor defined\n",
    FUNC_1 (VAR_6));
      else
 FUNC_4 (VAR_3,
    "the class %s does not have any method named %s\n",
    FUNC_1 (VAR_6), VAR_11);
    }
}
