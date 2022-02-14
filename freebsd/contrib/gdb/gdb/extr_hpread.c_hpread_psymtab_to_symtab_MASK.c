
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_symtab {int objfile; int filename; scalar_t__ number_of_dependencies; scalar_t__ readin; } ;


 scalar_t__ FUNC_0 (struct partial_symtab*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct partial_symtab*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6 (struct partial_symtab *VAR_4)
{

  if (!VAR_4)
    return;


  if (VAR_4->readin)
    {
      FUNC_1 (VAR_0, "Psymtab for %s already read in."
     "  Shouldn't happen.\n",
     VAR_4->filename);
      return;
    }







  VAR_3 = 0;

  if (FUNC_0 (VAR_4) || VAR_4->number_of_dependencies)
    {


      if (VAR_2)
 {
   FUNC_4 ("Reading in symbols for %s...", VAR_4->filename);
   FUNC_2 (VAR_1);
 }

      FUNC_3 (VAR_4);



      FUNC_5 (VAR_4->objfile);


      if (VAR_2)
 FUNC_4 ("done.\n");
    }
}
