
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct partial_symtab {TYPE_1__* objfile; int filename; scalar_t__ number_of_dependencies; scalar_t__ readin; } ;
struct cleanup {int dummy; } ;
typedef int bfd ;
struct TYPE_3__ {int * obfd; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct partial_symtab*) ;
 int VAR_0 ;
 int FUNC_2 (struct partial_symtab*) ;
 int FUNC_3 (struct cleanup*) ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct cleanup* FUNC_6 (int ,void*) ;
 int VAR_5 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_9 (int *,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_10 (struct partial_symtab *VAR_7)
{
  bfd *VAR_8;
  struct cleanup *VAR_9 = ((void*)0);

  if (!VAR_7)
    return;

  if (VAR_7->readin)
    {
      FUNC_4 (VAR_2, "Psymtab for %s already read in.  Shouldn't happen.\n",
     VAR_7->filename);
      return;
    }

  if (FUNC_1 (VAR_7) || VAR_7->number_of_dependencies)
    {


      if (VAR_4)
 {
   FUNC_7 ("Reading in symbols for %s...", VAR_7->filename);
   FUNC_5 (VAR_3);
 }

      VAR_8 = VAR_7->objfile->obfd;

      VAR_5 = VAR_0;

      if (FUNC_0 (VAR_7->objfile))
 {
   VAR_6
     = FUNC_9 (VAR_7->objfile->obfd,
           FUNC_0 (VAR_7->objfile),
           ((void*)0));
   if (VAR_6)
     VAR_9 = FUNC_6 (VAR_1, (void *) &VAR_6);
 }

      FUNC_2 (VAR_7);

      if (VAR_9)
 FUNC_3 (VAR_9);



      FUNC_8 (VAR_7->objfile);


      if (VAR_4)
 FUNC_7 ("done.\n");
    }
}
