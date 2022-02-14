
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfd_elf_version_expr {struct bfd_elf_version_expr* next; } ;
struct TYPE_3__ {struct bfd_elf_version_expr* list; } ;
struct bfd_elf_dynamic_list {int match; TYPE_1__ head; } ;
struct TYPE_4__ {struct bfd_elf_dynamic_list* dynamic_list; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 struct bfd_elf_dynamic_list* FUNC_0 (int,int) ;

void
FUNC_1 (struct bfd_elf_version_expr *VAR_2)
{
  if (VAR_1.dynamic_list)
    {
      struct bfd_elf_version_expr *VAR_3;
      for (VAR_3 = VAR_2; VAR_3->next != ((void*)0); VAR_3 = VAR_3->next)
 ;
      VAR_3->next = VAR_1.dynamic_list->head.list;
      VAR_1.dynamic_list->head.list = VAR_2;
    }
  else
    {
      struct bfd_elf_dynamic_list *VAR_4;

      VAR_4 = FUNC_0 (1, sizeof *VAR_4);
      VAR_4->head.list = VAR_2;
      VAR_4->match = VAR_0;
      VAR_1.dynamic_list = VAR_4;
    }
}
