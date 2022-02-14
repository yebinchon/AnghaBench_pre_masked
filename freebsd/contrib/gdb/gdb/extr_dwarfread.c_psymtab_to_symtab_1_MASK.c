
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_symtab {int readin; int number_of_dependencies; struct partial_symtab** dependencies; int filename; } ;
struct cleanup {int dummy; } ;


 scalar_t__ FUNC_0 (struct partial_symtab*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct cleanup*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct cleanup* FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct partial_symtab*) ;
 int VAR_3 ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10 (struct partial_symtab *VAR_4)
{
  int VAR_5;
  struct cleanup *VAR_6;

  if (VAR_4 != ((void*)0))
    {
      if (VAR_4->readin)
 {
   FUNC_8 ("psymtab for %s already read in.  Shouldn't happen.",
     VAR_4->filename);
 }
      else
 {

   for (VAR_5 = 0; VAR_5 < VAR_4->number_of_dependencies; VAR_5++)
     {
       if (!VAR_4->dependencies[VAR_5]->readin)
  {

    if (VAR_2)
      {
        FUNC_3 (" ", VAR_1);
        FUNC_9 ("");
        FUNC_3 ("and ", VAR_1);
        FUNC_9 ("");
        FUNC_6 ("%s...",
           VAR_4->dependencies[VAR_5]->filename);
        FUNC_9 ("");
        FUNC_4 (VAR_1);
      }
    FUNC_10 (VAR_4->dependencies[VAR_5]);
  }
     }
   if (FUNC_0 (VAR_4))
     {
       FUNC_1 ();
       VAR_6 = FUNC_5 (VAR_3, 0);
       FUNC_7 (VAR_4);
       if (VAR_2)
  {
    FUNC_6 ("%d DIE's, sorting...", VAR_0);
    FUNC_9 ("");
    FUNC_4 (VAR_1);
  }
       FUNC_2 (VAR_6);
     }
   VAR_4->readin = 1;
 }
    }
}
