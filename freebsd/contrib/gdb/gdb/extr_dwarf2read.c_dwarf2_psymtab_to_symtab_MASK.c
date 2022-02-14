
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_symtab {int filename; scalar_t__ readin; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct partial_symtab*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4 (struct partial_symtab *VAR_2)
{

  if (VAR_2 != ((void*)0))
    {
      if (VAR_2->readin)
 {
   FUNC_3 ("bug: psymtab for %s is already read in.", VAR_2->filename);
 }
      else
 {
   if (VAR_1)
     {
       FUNC_1 ("Reading in symbols for %s...", VAR_2->filename);
       FUNC_0 (VAR_0);
     }

   FUNC_2 (VAR_2);


   if (VAR_1)
     FUNC_1 ("done.\n");
 }
    }
}
