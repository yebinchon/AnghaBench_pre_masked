
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symloc {scalar_t__ numsyms; } ;
struct partial_symtab {TYPE_1__* objfile; int filename; scalar_t__ number_of_dependencies; scalar_t__ read_symtab_private; scalar_t__ readin; } ;
typedef int bfd ;
struct TYPE_2__ {int * obfd; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 (struct partial_symtab*) ;

__attribute__((used)) static void
FUNC_5 (struct partial_symtab *VAR_5)
{
  bfd *VAR_6;

  if (!VAR_5)
    return;

  if (VAR_5->readin)
    {
      FUNC_0
 (VAR_0, "Psymtab for %s already read in.  Shouldn't happen.\n",
  VAR_5->filename);
      return;
    }

  if (((struct symloc *) VAR_5->read_symtab_private)->numsyms != 0
      || VAR_5->number_of_dependencies)
    {


      if (VAR_2)
 {
   FUNC_2 ("Reading in symbols for %s...", VAR_5->filename);
   FUNC_1 (VAR_1);
 }

      VAR_6 = VAR_5->objfile->obfd;

      VAR_3 = VAR_4;

      FUNC_4 (VAR_5);



      FUNC_3 (VAR_5->objfile);


      if (VAR_2)
 FUNC_2 ("done.\n");
    }
}
