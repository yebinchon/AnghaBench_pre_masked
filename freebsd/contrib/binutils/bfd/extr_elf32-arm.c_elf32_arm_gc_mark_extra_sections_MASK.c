
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct bfd_link_info {TYPE_2__* input_bfds; } ;
typedef int elf_gc_mark_hook_fn ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_12__ {TYPE_3__* sections; struct TYPE_12__* link_next; } ;
typedef TYPE_2__ bfd ;
struct TYPE_13__ {int gc_mark; struct TYPE_13__* next; } ;
typedef TYPE_3__ asection ;
struct TYPE_14__ {scalar_t__ sh_type; size_t sh_link; TYPE_1__* bfd_section; } ;
struct TYPE_15__ {TYPE_4__ this_hdr; } ;
struct TYPE_11__ {scalar_t__ gc_mark; } ;
typedef TYPE_4__ Elf_Internal_Shdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bfd_link_info*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 TYPE_4__** FUNC_2 (TYPE_2__*) ;
 TYPE_5__* FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static bfd_boolean
FUNC_4(struct bfd_link_info *VAR_4,
     elf_gc_mark_hook_fn VAR_5)
{
  bfd *VAR_6;
  Elf_Internal_Shdr **VAR_7;
  bfd_boolean VAR_8;



  VAR_8 = VAR_2;
  while (VAR_8)
    {
      VAR_8 = VAR_0;
      for (VAR_6 = VAR_4->input_bfds; VAR_6 != ((void*)0); VAR_6 = VAR_6->link_next)
 {
   asection *VAR_9;

   if (FUNC_1 (VAR_6) != VAR_3)
     continue;

   VAR_7 = FUNC_2 (VAR_6);
   for (VAR_9 = VAR_6->sections; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
     {
       Elf_Internal_Shdr *VAR_10;
       VAR_10 = &FUNC_3 (VAR_9)->this_hdr;
       if (VAR_10->sh_type == VAR_1 && VAR_10->sh_link
    && !VAR_9->gc_mark
    && VAR_7[VAR_10->sh_link]->bfd_section->gc_mark)
  {
    VAR_8 = VAR_2;
    if (!FUNC_0 (VAR_4, VAR_9, VAR_5))
      return VAR_0;
  }
     }
 }
    }

  return VAR_2;
}
