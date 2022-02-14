
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_symtab {int * filename; } ;
typedef enum language { ____Placeholder_language } language ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct partial_symtab* FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  struct partial_symtab *VAR_4;
  enum language VAR_5 = VAR_3;

  VAR_4 = FUNC_1 ();
  if (VAR_4 != ((void*)0))
    {
      if (VAR_4->filename != ((void*)0))
 {
   VAR_5 = FUNC_0 (VAR_4->filename);
 }
      if (VAR_5 == VAR_3)
 {

   VAR_5 = VAR_2;
 }
      FUNC_2 (VAR_5);
      VAR_1 = VAR_0;
    }
}
