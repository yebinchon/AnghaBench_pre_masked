
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct partial_symtab {int readin; int number_of_dependencies; TYPE_1__* objfile; struct partial_symtab** dependencies; int filename; } ;
struct cleanup {int dummy; } ;
struct TYPE_2__ {int obfd; } ;


 int FUNC_0 (struct partial_symtab*) ;
 scalar_t__ FUNC_1 (struct partial_symtab*) ;
 int VAR_0 ;
 int FUNC_2 (struct partial_symtab*) ;
 int FUNC_3 (struct partial_symtab*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct cleanup*) ;
 int VAR_1 ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct cleanup* FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (struct partial_symtab*) ;
 int VAR_5 ;
 int FUNC_13 () ;
 int VAR_6 ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15 (struct partial_symtab *VAR_7)
{
  struct cleanup *VAR_8;
  int VAR_9;

  if (!VAR_7)
    return;

  if (VAR_7->readin)
    {
      FUNC_7 (VAR_2, "Psymtab for %s already read in.  Shouldn't happen.\n",
     VAR_7->filename);
      return;
    }


  for (VAR_9 = 0; VAR_9 < VAR_7->number_of_dependencies; VAR_9++)
    if (!VAR_7->dependencies[VAR_9]->readin)
      {

 if (VAR_4)
   {
     FUNC_8 (" ", VAR_3);
     FUNC_14 ("");
     FUNC_8 ("and ", VAR_3);
     FUNC_14 ("");
     FUNC_11 ("%s...", VAR_7->dependencies[VAR_9]->filename);
     FUNC_14 ("");
     FUNC_9 (VAR_3);
   }
 FUNC_15 (VAR_7->dependencies[VAR_9]);
      }

  if (FUNC_1 (VAR_7))
    {

      FUNC_13 ();
      FUNC_5 ();
      VAR_8 = FUNC_10 (VAR_5, 0);
      VAR_1 = FUNC_0 (VAR_7);
      VAR_6 = FUNC_3 (VAR_7);


      FUNC_4 (VAR_7->objfile->obfd, FUNC_2 (VAR_7), VAR_0);
      FUNC_12 (VAR_7);

      FUNC_6 (VAR_8);
    }

  VAR_7->readin = 1;
}
