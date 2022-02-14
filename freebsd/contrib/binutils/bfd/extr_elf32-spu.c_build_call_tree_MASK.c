
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct spu_link_hash_table {int dummy; } ;
struct spu_elf_stack_info {int num_fun; TYPE_4__* fun; } ;
struct call_info {struct call_info* next; } ;
struct bfd_link_info {TYPE_1__* input_bfds; } ;
struct _spu_elf_section_data {struct spu_elf_stack_info* stack_info; } ;
typedef int bfd_target ;
typedef int bfd_boolean ;
struct TYPE_10__ {TYPE_2__* sections; int const* xvec; struct TYPE_10__* link_next; } ;
typedef TYPE_1__ bfd ;
struct TYPE_11__ {scalar_t__ reloc_count; struct TYPE_11__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_12__ {int non_root; int visit1; struct call_info* call_list; int * start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,struct bfd_link_info*) ;
 int FUNC_1 (struct call_info*) ;
 int FUNC_2 (int *,struct call_info*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,struct spu_link_hash_table*) ;
 int FUNC_4 (TYPE_2__*,struct bfd_link_info*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 struct _spu_elf_section_data* FUNC_6 (TYPE_2__*) ;
 struct spu_link_hash_table* FUNC_7 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  struct spu_link_hash_table *VAR_4 = FUNC_7 (VAR_3);
  bfd *VAR_5;

  for (VAR_5 = VAR_3->input_bfds; VAR_5 != ((void*)0); VAR_5 = VAR_5->link_next)
    {
      extern const bfd_target VAR_6;
      asection *VAR_7;

      if (VAR_5->xvec != &VAR_6)
 continue;

      for (VAR_7 = VAR_5->sections; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
 {
   if (!FUNC_3 (VAR_7, VAR_2, VAR_4)
       || VAR_7->reloc_count == 0)
     continue;

   if (!FUNC_4 (VAR_7, VAR_3, VAR_1))
     return VAR_0;
 }



      for (VAR_7 = VAR_5->sections; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
 {
   struct _spu_elf_section_data *VAR_8;
   struct spu_elf_stack_info *VAR_9;

   if ((VAR_8 = FUNC_6 (VAR_7)) != ((void*)0)
       && (VAR_9 = VAR_8->stack_info) != ((void*)0))
     {
       int VAR_10;
       for (VAR_10 = 0; VAR_10 < VAR_9->num_fun; ++VAR_10)
  {
    if (VAR_9->fun[VAR_10].start != ((void*)0))
      {
        struct call_info *VAR_11 = VAR_9->fun[VAR_10].call_list;

        while (VAR_11 != ((void*)0))
   {
     struct call_info *VAR_12 = VAR_11->next;
     if (!FUNC_2 (VAR_9->fun[VAR_10].start, VAR_11))
       FUNC_1 (VAR_11);
     VAR_11 = VAR_12;
   }
        VAR_9->fun[VAR_10].call_list = ((void*)0);
        VAR_9->fun[VAR_10].non_root = VAR_1;
      }
  }
     }
 }
    }


  for (VAR_5 = VAR_3->input_bfds; VAR_5 != ((void*)0); VAR_5 = VAR_5->link_next)
    {
      extern const bfd_target VAR_13;
      asection *VAR_14;

      if (VAR_5->xvec != &VAR_13)
 continue;

      for (VAR_14 = VAR_5->sections; VAR_14 != ((void*)0); VAR_14 = VAR_14->next)
 {
   struct _spu_elf_section_data *VAR_15;
   struct spu_elf_stack_info *VAR_16;

   if ((VAR_15 = FUNC_6 (VAR_14)) != ((void*)0)
       && (VAR_16 = VAR_15->stack_info) != ((void*)0))
     {
       int VAR_17;
       for (VAR_17 = 0; VAR_17 < VAR_16->num_fun; ++VAR_17)
  if (!VAR_16->fun[VAR_17].visit1)
    FUNC_5 (&VAR_16->fun[VAR_17]);
     }
 }
    }



  for (VAR_5 = VAR_3->input_bfds; VAR_5 != ((void*)0); VAR_5 = VAR_5->link_next)
    {
      extern const bfd_target VAR_18;
      asection *VAR_19;

      if (VAR_5->xvec != &VAR_18)
 continue;

      for (VAR_19 = VAR_5->sections; VAR_19 != ((void*)0); VAR_19 = VAR_19->next)
 {
   struct _spu_elf_section_data *VAR_20;
   struct spu_elf_stack_info *VAR_21;

   if ((VAR_20 = FUNC_6 (VAR_19)) != ((void*)0)
       && (VAR_21 = VAR_20->stack_info) != ((void*)0))
     {
       int VAR_22;
       for (VAR_22 = 0; VAR_22 < VAR_21->num_fun; ++VAR_22)
  if (!VAR_21->fun[VAR_22].non_root)
    FUNC_0 (&VAR_21->fun[VAR_22], VAR_3);
     }
 }
    }

  return VAR_1;
}
