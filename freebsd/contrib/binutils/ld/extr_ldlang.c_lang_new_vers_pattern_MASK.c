
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_elf_version_expr {char const* pattern; char const* symbol; void* mask; scalar_t__ script; scalar_t__ symver; struct bfd_elf_version_expr* next; } ;
typedef scalar_t__ bfd_boolean ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 struct bfd_elf_version_expr* FUNC_2 (struct bfd_elf_version_expr*) ;
 char const* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 struct bfd_elf_version_expr* FUNC_5 (int) ;

struct bfd_elf_version_expr *
FUNC_6 (struct bfd_elf_version_expr *VAR_3,
         const char *VAR_4,
         const char *VAR_5,
         bfd_boolean VAR_6)
{
  struct bfd_elf_version_expr *VAR_7;

  VAR_7 = FUNC_5 (sizeof *VAR_7);
  VAR_7->next = VAR_3;
  VAR_7->pattern = VAR_6 ? ((void*)0) : VAR_4;
  VAR_7->symver = 0;
  VAR_7->script = 0;
  VAR_7->symbol = VAR_6 ? VAR_4 : FUNC_3 (VAR_4);

  if (VAR_5 == ((void*)0) || FUNC_4 (VAR_5, "C") == 0)
    VAR_7->mask = VAR_1;
  else if (FUNC_4 (VAR_5, "C++") == 0)
    VAR_7->mask = VAR_0;
  else if (FUNC_4 (VAR_5, "Java") == 0)
    VAR_7->mask = VAR_2;
  else
    {
      FUNC_1 (FUNC_0("%X%P: unknown language `%s' in version information\n"),
      VAR_5);
      VAR_7->mask = VAR_1;
    }

  return FUNC_2 (VAR_7);
}
