
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_elf_version_expr {int symbol; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const struct bfd_elf_version_expr *VAR_2 = VAR_0;
  const struct bfd_elf_version_expr *VAR_3 = VAR_1;

  return FUNC_0 (VAR_2->symbol, VAR_3->symbol) == 0;
}
