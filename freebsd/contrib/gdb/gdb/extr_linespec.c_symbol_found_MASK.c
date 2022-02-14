
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {scalar_t__ line; struct symtab* symtab; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct blockvector {int dummy; } ;
struct block {int dummy; } ;


 struct blockvector* FUNC_0 (struct symtab*) ;
 struct block* FUNC_1 (struct blockvector*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct symbol*) ;
 scalar_t__ FUNC_3 (struct symbol*) ;
 int VAR_2 ;
 int FUNC_4 (struct symtab_and_line*,char*,char***) ;
 int FUNC_5 (char*,char*) ;
 struct symtab_and_line FUNC_6 (struct symbol*,int) ;
 int * FUNC_7 (struct block*,char*,int *,int ) ;
 int FUNC_8 (struct symtab_and_line*,int ,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct symtabs_and_lines
FUNC_10 (int VAR_3, char ***VAR_4, char *VAR_5,
       struct symbol *VAR_6, struct symtab *VAR_7,
       struct symtab *VAR_8)
{
  struct symtabs_and_lines VAR_9;

  if (FUNC_2 (VAR_6) == VAR_0)
    {

      VAR_9.sals = (struct symtab_and_line *)
 FUNC_9 (sizeof (struct symtab_and_line));
      VAR_9.sals[0] = FUNC_6 (VAR_6, VAR_3);
      VAR_9.nelts = 1;







      if (VAR_7 == 0)
 {
   struct blockvector *VAR_10 = FUNC_0 (VAR_8);
   struct block *VAR_11 = FUNC_1 (VAR_10, VAR_1);
   if (FUNC_7 (VAR_11, VAR_5, ((void*)0), VAR_2) != ((void*)0))
     FUNC_4 (VAR_9.sals, VAR_5, VAR_4);
 }
      return VAR_9;
    }
  else
    {
      if (VAR_3)
 FUNC_5 ("\"%s\" is not a function", VAR_5);
      else if (FUNC_3 (VAR_6) != 0)
 {

   VAR_9.sals = (struct symtab_and_line *)
     FUNC_9 (sizeof (struct symtab_and_line));
   VAR_9.nelts = 1;
   FUNC_8 (&VAR_9.sals[0], 0, sizeof (VAR_9.sals[0]));
   VAR_9.sals[0].symtab = VAR_8;
   VAR_9.sals[0].line = FUNC_3 (VAR_6);
   return VAR_9;
 }
      else





 FUNC_5 ("Line number not known for symbol \"%s\"", VAR_5);
    }
}
