
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct elf_backend_data {int (* link_order_error_handler ) (int ,int ,TYPE_4__*) ;} ;
struct TYPE_11__ {TYPE_4__* section; } ;
struct TYPE_9__ {TYPE_3__ indirect; } ;
struct bfd_link_order {TYPE_1__ u; } ;
typedef scalar_t__ bfd_vma ;
struct TYPE_12__ {scalar_t__ output_offset; TYPE_2__* output_section; int owner; } ;
typedef TYPE_4__ asection ;
struct TYPE_13__ {int sh_link; TYPE_4__* bfd_section; } ;
struct TYPE_10__ {scalar_t__ vma; } ;
typedef TYPE_5__ Elf_Internal_Shdr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 TYPE_5__** FUNC_2 (int ) ;
 struct elf_backend_data* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;

__attribute__((used)) static bfd_vma
FUNC_5 (struct bfd_link_order *VAR_0)
{
  Elf_Internal_Shdr **VAR_1;
  asection *VAR_2;
  int VAR_3;

  VAR_2 = VAR_0->u.indirect.section;
  VAR_1 = FUNC_2 (VAR_2->owner);
  VAR_3 = FUNC_1 (VAR_2->owner, VAR_2);
  VAR_3 = VAR_1[VAR_3]->sh_link;





  if (VAR_3 == 0)
    {
      const struct elf_backend_data *VAR_4
 = FUNC_3 (VAR_2->owner);
      if (VAR_4->link_order_error_handler)
 VAR_4->link_order_error_handler
   (FUNC_0("%B: warning: sh_link not set for section `%A'"), VAR_2->owner, VAR_2);
      return 0;
    }
  else
    {
      VAR_2 = VAR_1[VAR_3]->bfd_section;
      return VAR_2->output_section->vma + VAR_2->output_offset;
    }
}
