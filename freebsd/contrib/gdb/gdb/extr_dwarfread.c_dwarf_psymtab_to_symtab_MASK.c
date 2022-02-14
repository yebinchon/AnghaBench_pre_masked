
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_symtab {int objfile; int filename; scalar_t__ number_of_dependencies; scalar_t__ readin; } ;


 scalar_t__ FUNC_0 (struct partial_symtab*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct partial_symtab*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6 (struct partial_symtab *VAR_2)
{

  if (VAR_2 != ((void*)0))
    {
      if (VAR_2->readin)
 {
   FUNC_5 ("psymtab for %s already read in.  Shouldn't happen.",
     VAR_2->filename);
 }
      else
 {
   if (FUNC_0 (VAR_2) || VAR_2->number_of_dependencies)
     {


       if (VAR_1)
  {
    FUNC_2 ("Reading in symbols for %s...",
       VAR_2->filename);
    FUNC_1 (VAR_0);
  }

       FUNC_3 (VAR_2);
       if (VAR_1)
  {
    FUNC_2 ("done.\n");
    FUNC_1 (VAR_0);
  }
     }
 }
    }
}
