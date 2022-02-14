
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_symtab {int readin; int number_of_dependencies; int filename; int section_offsets; scalar_t__ textlow; scalar_t__ texthigh; int objfile; int symtab; struct partial_symtab** dependencies; } ;
struct cleanup {int dummy; } ;


 scalar_t__ FUNC_0 (struct partial_symtab*) ;
 int FUNC_1 (struct partial_symtab*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct cleanup*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int ,int ,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ VAR_2 ;
 struct cleanup* FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,int ) ;
 int VAR_3 ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11 (struct partial_symtab *VAR_4)
{
  struct cleanup *VAR_5;
  int VAR_6;


  if (!VAR_4)
    return;


  if (VAR_4->readin)
    {
      FUNC_4 (VAR_0, "Psymtab for %s already read in."
     "  Shouldn't happen.\n",
     VAR_4->filename);
      return;
    }


  for (VAR_6 = 0; VAR_6 < VAR_4->number_of_dependencies; VAR_6++)
    if (!VAR_4->dependencies[VAR_6]->readin)
      {

 if (VAR_2)
   {
     FUNC_5 (" ", VAR_1);
     FUNC_10 ("");
     FUNC_5 ("and ", VAR_1);
     FUNC_10 ("");
     FUNC_9 ("%s...", VAR_4->dependencies[VAR_6]->filename);
     FUNC_10 ("");
     FUNC_6 (VAR_1);
   }
 FUNC_11 (VAR_4->dependencies[VAR_6]);
      }


  if (FUNC_0 (VAR_4))
    {

      FUNC_2 ();
      VAR_5 = FUNC_8 (VAR_3, 0);

      VAR_4->symtab =
 FUNC_7 (VAR_4->objfile, FUNC_1 (VAR_4), FUNC_0 (VAR_4),
         VAR_4->textlow, VAR_4->texthigh - VAR_4->textlow,
         VAR_4->section_offsets, VAR_4->filename);

      FUNC_3 (VAR_5);
    }

  VAR_4->readin = 1;
}
