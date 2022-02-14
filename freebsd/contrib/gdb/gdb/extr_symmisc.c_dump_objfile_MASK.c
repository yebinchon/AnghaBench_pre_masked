
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {struct symtab* objfile; int filename; struct symtab* next; struct symtab* symtabs; struct symtab* psymtabs; int minimal_symbol_count; struct symtab* obfd; int name; } ;
struct partial_symtab {struct partial_symtab* objfile; int filename; struct partial_symtab* next; struct partial_symtab* symtabs; struct partial_symtab* psymtabs; int minimal_symbol_count; struct partial_symtab* obfd; int name; } ;
struct objfile {struct objfile* objfile; int filename; struct objfile* next; struct objfile* symtabs; struct objfile* psymtabs; int minimal_symbol_count; struct objfile* obfd; int name; } ;


 int FUNC_0 (struct symtab*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (struct objfile *VAR_1)
{
  struct symtab *VAR_2;
  struct partial_symtab *VAR_3;

  FUNC_1 ("\nObject file %s:  ", VAR_1->name);
  FUNC_1 ("Objfile at ");
  FUNC_0 (VAR_1, VAR_0);
  FUNC_1 (", bfd at ");
  FUNC_0 (VAR_1->obfd, VAR_0);
  FUNC_1 (", %d minsyms\n\n",
     VAR_1->minimal_symbol_count);

  if (VAR_1->psymtabs)
    {
      FUNC_1 ("Psymtabs:\n");
      for (VAR_3 = VAR_1->psymtabs;
    VAR_3 != ((void*)0);
    VAR_3 = VAR_3->next)
 {
   FUNC_1 ("%s at ",
      VAR_3->filename);
   FUNC_0 (VAR_3, VAR_0);
   FUNC_1 (", ");
   if (VAR_3->objfile != VAR_1)
     {
       FUNC_1 ("NOT ON CHAIN!  ");
     }
   FUNC_2 ("  ");
 }
      FUNC_1 ("\n\n");
    }

  if (VAR_1->symtabs)
    {
      FUNC_1 ("Symtabs:\n");
      for (VAR_2 = VAR_1->symtabs;
    VAR_2 != ((void*)0);
    VAR_2 = VAR_2->next)
 {
   FUNC_1 ("%s at ", VAR_2->filename);
   FUNC_0 (VAR_2, VAR_0);
   FUNC_1 (", ");
   if (VAR_2->objfile != VAR_1)
     {
       FUNC_1 ("NOT ON CHAIN!  ");
     }
   FUNC_2 ("  ");
 }
      FUNC_1 ("\n\n");
    }
}
