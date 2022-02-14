
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct spu_elf_stack_info {int num_fun; struct function_info* fun; } ;
struct function_info {struct function_info* start; } ;
struct TYPE_17__ {TYPE_6__* section; } ;
struct TYPE_18__ {TYPE_3__ indirect; } ;
struct bfd_link_order {scalar_t__ type; TYPE_4__ u; struct bfd_link_order* next; } ;
struct bfd_link_info {TYPE_5__* callbacks; } ;
struct _spu_elf_section_data {struct spu_elf_stack_info* stack_info; } ;
typedef int bfd_boolean ;
struct TYPE_20__ {TYPE_2__* output_section; int owner; int size; } ;
typedef TYPE_6__ asection ;
struct TYPE_21__ {int st_shndx; int st_size; scalar_t__ st_value; } ;
struct TYPE_19__ {int (* einfo ) (int ,TYPE_6__*) ;} ;
struct TYPE_15__ {struct bfd_link_order* link_order; } ;
struct TYPE_16__ {TYPE_1__ map_head; } ;
typedef TYPE_7__ Elf_Internal_Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_6__*) ;
 scalar_t__ VAR_2 ;
 TYPE_7__* FUNC_2 (int) ;
 struct function_info* FUNC_3 (TYPE_6__*,TYPE_7__*,int ,int ) ;
 struct _spu_elf_section_data* FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ,TYPE_6__*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (asection *VAR_3, struct bfd_link_info *VAR_4)
{
  struct bfd_link_order *VAR_5;
  struct _spu_elf_section_data *VAR_6;
  struct spu_elf_stack_info *VAR_7;
  Elf_Internal_Sym *VAR_8;
  struct function_info *VAR_9, *VAR_10;

  VAR_8 = FUNC_2 (sizeof (*VAR_8));
  if (VAR_8 == ((void*)0))
    return VAR_0;
  VAR_8->st_value = 0;
  VAR_8->st_size = VAR_3->size;
  VAR_8->st_shndx
    = FUNC_1 (VAR_3->owner, VAR_3);
  VAR_9 = FUNC_3 (VAR_3, VAR_8, VAR_0, VAR_0);
  if (!VAR_9)
    return VAR_0;


  VAR_10 = ((void*)0);
  for (VAR_5 = VAR_3->output_section->map_head.link_order; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
      if (VAR_5->u.indirect.section == VAR_3)
 {
   if (VAR_10 != ((void*)0))
     {
       if (VAR_10->start)
  VAR_10 = VAR_10->start;
       VAR_9->start = VAR_10;
     }
   return VAR_1;
 }
      if (VAR_5->type == VAR_2
   && (VAR_6 = FUNC_4 (VAR_5->u.indirect.section)) != ((void*)0)
   && (VAR_7 = VAR_6->stack_info) != ((void*)0)
   && VAR_7->num_fun != 0)
 VAR_10 = &VAR_7->fun[VAR_7->num_fun - 1];
    }

  VAR_4->callbacks->einfo (FUNC_0("%A link_order not found\n"), VAR_3);
  return VAR_0;
}
