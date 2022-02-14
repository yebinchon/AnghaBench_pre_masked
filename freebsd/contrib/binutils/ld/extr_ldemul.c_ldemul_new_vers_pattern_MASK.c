
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfd_elf_version_expr {int dummy; } ;
struct TYPE_2__ {struct bfd_elf_version_expr* (* new_vers_pattern ) (struct bfd_elf_version_expr*) ;} ;


 TYPE_1__* VAR_0 ;
 struct bfd_elf_version_expr* FUNC_0 (struct bfd_elf_version_expr*) ;

struct bfd_elf_version_expr *
FUNC_1 (struct bfd_elf_version_expr *VAR_1)
{
  if (VAR_0->new_vers_pattern)
    VAR_1 = (*VAR_0->new_vers_pattern) (VAR_1);
  return VAR_1;
}
