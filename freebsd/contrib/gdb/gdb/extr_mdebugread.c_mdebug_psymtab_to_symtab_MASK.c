
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_symtab {int objfile; int filename; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct partial_symtab*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (struct partial_symtab *VAR_4)
{

  if (!VAR_4)
    return;

  if (VAR_1)
    {
      FUNC_1 ("Reading in symbols for %s...", VAR_4->filename);
      FUNC_0 (VAR_0);
    }

  VAR_3 = VAR_2;

  FUNC_2 (VAR_4, VAR_4->filename);



  FUNC_3 (VAR_4->objfile);

  if (VAR_1)
    FUNC_1 ("done.\n");
}
