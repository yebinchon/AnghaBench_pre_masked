
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct elf_gc_sweep_symbol_info {int hide_symbol; struct bfd_link_info* info; } ;
struct elf_backend_data {int elf_backend_hide_symbol; int (* gc_sweep_hook ) (int ,struct bfd_link_info*,TYPE_2__*,int *) ;} ;
struct bfd_link_info {int keep_memory; scalar_t__ print_gc_sections; TYPE_3__* input_bfds; } ;
typedef int (* gc_sweep_hook_fn ) (int ,struct bfd_link_info*,TYPE_2__*,int *) ;
typedef int bfd_boolean ;
struct TYPE_16__ {TYPE_2__* sections; struct TYPE_16__* link_next; } ;
typedef TYPE_3__ bfd ;
struct TYPE_15__ {int flags; int gc_mark; scalar_t__ size; scalar_t__ reloc_count; int owner; int output_section; int name; struct TYPE_15__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_14__ {scalar_t__ sh_type; } ;
struct TYPE_17__ {int * relocs; TYPE_1__ this_hdr; } ;
typedef int Elf_Internal_Rela ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,TYPE_2__*,int *,int *,int ) ;
 int FUNC_2 (TYPE_3__*,struct bfd_link_info*,unsigned long*) ;
 int FUNC_3 (int ,TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct bfd_link_info*) ;
 int FUNC_7 (int ,int ,struct elf_gc_sweep_symbol_info*) ;
 TYPE_7__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 struct elf_backend_data* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ,struct bfd_link_info*,TYPE_2__*,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_12 (bfd *VAR_11, struct bfd_link_info *VAR_12)
{
  bfd *VAR_13;
  const struct elf_backend_data *VAR_14 = FUNC_10 (VAR_11);
  gc_sweep_hook_fn VAR_15 = VAR_14->gc_sweep_hook;
  unsigned long VAR_16;
  struct elf_gc_sweep_symbol_info VAR_17;

  for (VAR_13 = VAR_12->input_bfds; VAR_13 != ((void*)0); VAR_13 = VAR_13->link_next)
    {
      asection *VAR_18;

      if (FUNC_4 (VAR_13) != VAR_9)
 continue;

      for (VAR_18 = VAR_13->sections; VAR_18 != ((void*)0); VAR_18 = VAR_18->next)
 {

   if ((VAR_18->flags & (VAR_2 | VAR_4)) != 0
       || FUNC_8 (VAR_18)->this_hdr.sh_type == VAR_7
       || (VAR_18->flags & (VAR_1 | VAR_5 | VAR_6)) == 0)
     VAR_18->gc_mark = 1;

   if (VAR_18->gc_mark)
     continue;


   if (VAR_18->flags & VAR_3)
     continue;



   VAR_18->flags |= VAR_3;

   if (VAR_12->print_gc_sections && VAR_18->size != 0)
     FUNC_3 (FUNC_0("Removing unused section '%s' in file '%B'"), VAR_13, VAR_18->name);



   if (VAR_15
       && (VAR_18->flags & VAR_6) != 0
       && VAR_18->reloc_count > 0
       && !FUNC_5 (VAR_18->output_section))
     {
       Elf_Internal_Rela *VAR_19;
       bfd_boolean VAR_20;

       VAR_19
  = FUNC_1 (VAR_18->owner, VAR_18, ((void*)0), ((void*)0),
          VAR_12->keep_memory);
       if (VAR_19 == ((void*)0))
  return VAR_0;

       VAR_20 = (*VAR_15) (VAR_18->owner, VAR_12, VAR_18, VAR_19);

       if (FUNC_8 (VAR_18)->relocs != VAR_19)
  FUNC_9 (VAR_19);

       if (!VAR_20)
  return VAR_0;
     }
 }
    }




  VAR_17.info = VAR_12;
  VAR_17.hide_symbol = VAR_14->elf_backend_hide_symbol;
  FUNC_7 (FUNC_6 (VAR_12), VAR_10,
     &VAR_17);

  FUNC_2 (VAR_11, VAR_12, &VAR_16);
  return VAR_8;
}
