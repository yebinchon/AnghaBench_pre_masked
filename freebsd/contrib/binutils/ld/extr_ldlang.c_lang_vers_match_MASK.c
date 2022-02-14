
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_elf_version_expr_head {int mask; struct bfd_elf_version_expr* remaining; scalar_t__ htab; } ;
struct bfd_elf_version_expr {char const* symbol; int mask; char* pattern; struct bfd_elf_version_expr* next; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char const*,int) ;
 scalar_t__ FUNC_1 (char*,char const*,int ) ;
 int FUNC_2 (char*) ;
 struct bfd_elf_version_expr* FUNC_3 (scalar_t__,struct bfd_elf_version_expr*) ;
 int FUNC_4 (char const*,char const*) ;

__attribute__((used)) static struct bfd_elf_version_expr *
FUNC_5 (struct bfd_elf_version_expr_head *VAR_4,
   struct bfd_elf_version_expr *VAR_5,
   const char *VAR_6)
{
  const char *VAR_7 = VAR_6;
  const char *VAR_8 = VAR_6;
  struct bfd_elf_version_expr *VAR_9 = ((void*)0);

  if (VAR_4->mask & 129)
    {
      VAR_7 = FUNC_0 (VAR_6, VAR_3 | VAR_1);
      if (!VAR_7)
 VAR_7 = VAR_6;
    }
  if (VAR_4->mask & VAR_0)
    {
      VAR_8 = FUNC_0 (VAR_6, VAR_2);
      if (!VAR_8)
 VAR_8 = VAR_6;
    }

  if (VAR_4->htab && (VAR_5 == ((void*)0) || VAR_5->symbol))
    {
      struct bfd_elf_version_expr VAR_10;

      switch (VAR_5 ? VAR_5->mask : 0)
 {
   case 0:
     if (VAR_4->mask & 128)
       {
  VAR_10.symbol = VAR_6;
  VAR_9 = FUNC_3 (VAR_4->htab, &VAR_10);
  while (VAR_9 && FUNC_4 (VAR_9->symbol, VAR_6) == 0)
    if (VAR_9->mask == 128)
      goto out_ret;
    else
      VAR_9 = VAR_9->next;
       }

   case 128:
     if (VAR_4->mask & 129)
       {
  VAR_10.symbol = VAR_7;
  VAR_9 = FUNC_3 (VAR_4->htab, &VAR_10);
  while (VAR_9 && FUNC_4 (VAR_9->symbol, VAR_7) == 0)
    if (VAR_9->mask == 129)
      goto out_ret;
    else
      VAR_9 = VAR_9->next;
       }

   case 129:
     if (VAR_4->mask & VAR_0)
       {
  VAR_10.symbol = VAR_8;
  VAR_9 = FUNC_3 (VAR_4->htab, &VAR_10);
  while (VAR_9 && FUNC_4 (VAR_9->symbol, VAR_8) == 0)
    if (VAR_9->mask == VAR_0)
      goto out_ret;
    else
      VAR_9 = VAR_9->next;
       }

   default:
     break;
 }
    }


  if (VAR_5 == ((void*)0) || VAR_5->symbol)
    VAR_9 = VAR_4->remaining;
  else
    VAR_9 = VAR_5->next;
  for (; VAR_9; VAR_9 = VAR_9->next)
    {
      const char *VAR_11;

      if (!VAR_9->pattern)
 continue;

      if (VAR_9->pattern[0] == '*' && VAR_9->pattern[1] == '\0')
 break;

      if (VAR_9->mask == VAR_0)
 VAR_11 = VAR_8;
      else if (VAR_9->mask == 129)
 VAR_11 = VAR_7;
      else
 VAR_11 = VAR_6;
      if (FUNC_1 (VAR_9->pattern, VAR_11, 0) == 0)
 break;
    }

out_ret:
  if (VAR_7 != VAR_6)
    FUNC_2 ((char *) VAR_7);
  if (VAR_8 != VAR_6)
    FUNC_2 ((char *) VAR_8);
  return VAR_9;
}
