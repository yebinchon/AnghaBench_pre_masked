
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {struct symtab* symtab; int pc; int section; int line; } ;
struct symtab {int dummy; } ;


 struct symtabs_and_lines FUNC_0 (char**,int,struct symtab*,int ,char***,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct symtab* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 struct symtab_and_line FUNC_3 () ;
 int FUNC_4 (struct symtab_and_line*) ;
 scalar_t__ FUNC_5 (char) ;
 char* FUNC_6 (char*,int) ;
 int * FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 char** FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11 (char **VAR_4,
         struct symtabs_and_lines *VAR_5,
         char ***VAR_6,
         int *VAR_7)
{
  char *VAR_8 = *VAR_4;
  *VAR_6 = ((void*)0);


  if ((*VAR_4) == ((void*)0)
      || (FUNC_8 ((*VAR_4), "if", 2) == 0 && FUNC_5 ((*VAR_4)[2])))
    {
      if (VAR_3)
 {
   struct symtab_and_line VAR_9;
   FUNC_4 (&VAR_9);
   VAR_5->sals = (struct symtab_and_line *)
     FUNC_10 (sizeof (struct symtab_and_line));
   VAR_9.pc = VAR_0;
   VAR_9.line = VAR_1;
   VAR_9.symtab = VAR_2;
   VAR_9.section = FUNC_2 (VAR_9.pc);
   VAR_5->sals[0] = VAR_9;
   VAR_5->nelts = 1;
 }
      else
 FUNC_1 ("No default breakpoint address now.");
    }
  else
    {







      struct symtab_and_line VAR_10 = FUNC_3 ();

      if (VAR_3
   && (!VAR_10.symtab
        || ((FUNC_7 ("+-", (*VAR_4)[0]) != ((void*)0))
     && ((*VAR_4)[1] != '['))))
 *VAR_5 = FUNC_0 (VAR_4, 1, VAR_2,
          VAR_1, VAR_6,
          VAR_7);
      else
 *VAR_5 = FUNC_0 (VAR_4, 1, (struct symtab *) ((void*)0), 0,
                 VAR_6, VAR_7);
    }

  if (VAR_5->nelts > 0 && *VAR_6 == ((void*)0))
    *VAR_6 = FUNC_9 (VAR_5->nelts, sizeof (char **));
  if (VAR_8 != (*VAR_4))
    {
      int VAR_11;
      for (VAR_11 = 0; VAR_11 < VAR_5->nelts; VAR_11++)
 {

   if ((*VAR_6)[VAR_11] == ((void*)0))
     (*VAR_6)[VAR_11] = FUNC_6 (VAR_8, (*VAR_4) - VAR_8);
 }
    }
}
