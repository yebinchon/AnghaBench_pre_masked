
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symloc {scalar_t__ numsyms; } ;
struct partial_symtab {int readin; int number_of_dependencies; scalar_t__ read_symtab_private; struct partial_symtab** dependencies; int filename; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct cleanup* FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct partial_symtab*) ;
 int VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10 (struct partial_symtab *VAR_4)
{
  struct cleanup *VAR_5;
  int VAR_6;

  if (!VAR_4)
    return;

  if (VAR_4->readin)
    {
      FUNC_2
 (VAR_0, "Psymtab for %s already read in.  Shouldn't happen.\n",
  VAR_4->filename);
      return;
    }


  for (VAR_6 = 0; VAR_6 < VAR_4->number_of_dependencies; VAR_6++)
    if (!VAR_4->dependencies[VAR_6]->readin)
      {

 if (VAR_2)
   {
     FUNC_3 (" ", VAR_1);
     FUNC_9 ("");
     FUNC_3 ("and ", VAR_1);
     FUNC_9 ("");
     FUNC_6 ("%s...", VAR_4->dependencies[VAR_6]->filename);
     FUNC_9 ("");
     FUNC_4 (VAR_1);
   }
 FUNC_10 (VAR_4->dependencies[VAR_6]);
      }

  if (((struct symloc *) VAR_4->read_symtab_private)->numsyms != 0)
    {

      FUNC_8 ();
      FUNC_0 ();
      VAR_5 = FUNC_5 (VAR_3, 0);

      FUNC_7 (VAR_4);

      FUNC_1 (VAR_5);
    }

  VAR_4->readin = 1;
}
