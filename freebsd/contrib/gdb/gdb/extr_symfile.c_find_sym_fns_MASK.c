
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_fns {int sym_flavour; struct sym_fns* next; } ;
struct objfile {int obfd; struct sym_fns* sf; } ;
typedef enum bfd_flavour { ____Placeholder_bfd_flavour } bfd_flavour ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 struct sym_fns* VAR_3 ;

__attribute__((used)) static void
FUNC_3 (struct objfile *VAR_4)
{
  struct sym_fns *VAR_5;
  enum bfd_flavour VAR_6 = FUNC_0 (VAR_4->obfd);
  char *VAR_7 = FUNC_1 (VAR_4->obfd);

  if (VAR_6 == VAR_1
      || VAR_6 == VAR_0
      || VAR_6 == VAR_2)
    return;

  for (VAR_5 = VAR_3; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
      if (VAR_6 == VAR_5->sym_flavour)
 {
   VAR_4->sf = VAR_5;
   return;
 }
    }
  FUNC_2 ("I'm sorry, Dave, I can't do that.  Symbol format `%s' unknown.",
  FUNC_1 (VAR_4->obfd));
}
