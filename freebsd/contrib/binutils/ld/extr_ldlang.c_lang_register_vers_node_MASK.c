
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bfd_elf_version_expr* remaining; scalar_t__ htab; struct bfd_elf_version_expr* list; } ;
struct bfd_elf_version_tree {char* name; struct bfd_elf_version_tree* next; scalar_t__ vernum; struct bfd_elf_version_deps* deps; TYPE_1__ globals; TYPE_1__ locals; } ;
struct bfd_elf_version_expr {char* symbol; scalar_t__ mask; char* pattern; struct bfd_elf_version_expr* next; } ;
struct bfd_elf_version_deps {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (struct bfd_elf_version_tree*) ;
 struct bfd_elf_version_expr* FUNC_3 (scalar_t__,struct bfd_elf_version_expr*) ;
 struct bfd_elf_version_tree* VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 scalar_t__ VAR_1 ;

void
FUNC_6 (const char *VAR_2,
    struct bfd_elf_version_tree *VAR_3,
    struct bfd_elf_version_deps *VAR_4)
{
  struct bfd_elf_version_tree *VAR_5, **VAR_6;
  struct bfd_elf_version_expr *VAR_7;

  if (VAR_2 == ((void*)0))
    VAR_2 = "";

  if ((VAR_2[0] == '\0' && VAR_0 != ((void*)0))
      || (VAR_0 && VAR_0->name[0] == '\0'))
    {
      FUNC_1 (FUNC_0("%X%P: anonymous version tag cannot be combined"
        " with other version tags\n"));
      FUNC_2 (VAR_3);
      return;
    }


  for (VAR_5 = VAR_0; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    if (FUNC_5 (VAR_5->name, VAR_2) == 0)
      FUNC_1 (FUNC_0("%X%P: duplicate version tag `%s'\n"), VAR_2);

  FUNC_4 (&VAR_3->globals);
  FUNC_4 (&VAR_3->locals);




  for (VAR_7 = VAR_3->globals.list; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      for (VAR_5 = VAR_0; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
 {
   struct bfd_elf_version_expr *VAR_8;

   if (VAR_5->locals.htab && VAR_7->symbol)
     {
       VAR_8 = FUNC_3 (VAR_5->locals.htab, VAR_7);
       while (VAR_8 && FUNC_5 (VAR_7->symbol, VAR_8->symbol) == 0)
  {
    if (VAR_7->mask == VAR_8->mask)
      FUNC_1 (FUNC_0("%X%P: duplicate expression `%s'"
        " in version information\n"), VAR_7->symbol);
    VAR_8 = VAR_8->next;
  }
     }
   else if (!VAR_7->symbol)
     for (VAR_8 = VAR_5->locals.remaining; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
       if (FUNC_5 (VAR_7->pattern, VAR_8->pattern) == 0
    && VAR_7->mask == VAR_8->mask)
  FUNC_1 (FUNC_0("%X%P: duplicate expression `%s'"
    " in version information\n"), VAR_7->pattern);
 }
    }

  for (VAR_7 = VAR_3->locals.list; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      for (VAR_5 = VAR_0; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
 {
   struct bfd_elf_version_expr *VAR_9;

   if (VAR_5->globals.htab && VAR_7->symbol)
     {
       VAR_9 = FUNC_3 (VAR_5->globals.htab, VAR_7);
       while (VAR_9 && FUNC_5 (VAR_7->symbol, VAR_9->symbol) == 0)
  {
    if (VAR_7->mask == VAR_9->mask)
      FUNC_1 (FUNC_0("%X%P: duplicate expression `%s'"
        " in version information\n"),
      VAR_7->symbol);
    VAR_9 = VAR_9->next;
  }
     }
   else if (!VAR_7->symbol)
     for (VAR_9 = VAR_5->globals.remaining; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
       if (FUNC_5 (VAR_7->pattern, VAR_9->pattern) == 0
    && VAR_7->mask == VAR_9->mask)
  FUNC_1 (FUNC_0("%X%P: duplicate expression `%s'"
    " in version information\n"), VAR_7->pattern);
 }
    }

  VAR_3->deps = VAR_4;
  VAR_3->name = VAR_2;
  if (VAR_2[0] != '\0')
    {
      ++VAR_1;
      VAR_3->vernum = VAR_1;
    }
  else
    VAR_3->vernum = 0;

  for (VAR_6 = &VAR_0; *VAR_6 != ((void*)0); VAR_6 = &(*VAR_6)->next)
    ;
  *VAR_6 = VAR_3;
}
