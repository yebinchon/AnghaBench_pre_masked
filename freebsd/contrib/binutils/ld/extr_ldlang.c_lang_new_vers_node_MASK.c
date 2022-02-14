
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct bfd_elf_version_expr* list; } ;
struct TYPE_3__ {struct bfd_elf_version_expr* list; } ;
struct bfd_elf_version_tree {unsigned int name_indx; int match; TYPE_2__ locals; TYPE_1__ globals; } ;
struct bfd_elf_version_expr {int dummy; } ;


 int VAR_0 ;
 struct bfd_elf_version_tree* FUNC_0 (int,int) ;

struct bfd_elf_version_tree *
FUNC_1 (struct bfd_elf_version_expr *VAR_1,
      struct bfd_elf_version_expr *VAR_2)
{
  struct bfd_elf_version_tree *VAR_3;

  VAR_3 = FUNC_0 (1, sizeof *VAR_3);
  VAR_3->globals.list = VAR_1;
  VAR_3->locals.list = VAR_2;
  VAR_3->match = VAR_0;
  VAR_3->name_indx = (unsigned int) -1;
  return VAR_3;
}
