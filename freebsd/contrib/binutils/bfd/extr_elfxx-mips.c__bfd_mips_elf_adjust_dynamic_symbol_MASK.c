
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct mips_elf_link_hash_table {scalar_t__ function_stub_size; } ;
struct mips_elf_link_hash_entry {scalar_t__ possibly_dynamic_relocs; int no_fn_stub; scalar_t__ readonly_reloc; } ;
struct TYPE_23__ {TYPE_8__* weakdef; } ;
struct TYPE_16__ {int value; TYPE_10__* section; } ;
struct TYPE_17__ {TYPE_2__ def; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_3__ u; } ;
struct TYPE_15__ {int offset; } ;
struct elf_link_hash_entry {scalar_t__ type; TYPE_9__ u; TYPE_4__ root; scalar_t__ needs_plt; TYPE_1__ plt; int def_regular; scalar_t__ ref_regular; scalar_t__ def_dynamic; } ;
struct bfd_link_info {int flags; int relocatable; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_13__ {int size; } ;
typedef TYPE_10__ asection ;
struct TYPE_19__ {int value; TYPE_10__* section; } ;
struct TYPE_20__ {TYPE_5__ def; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_6__ u; } ;
struct TYPE_22__ {TYPE_7__ root; } ;
struct TYPE_14__ {int dynamic_sections_created; int * dynobj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_10__* FUNC_2 (int *,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_11__* FUNC_3 (struct bfd_link_info*) ;
 int FUNC_4 (int *,struct bfd_link_info*,scalar_t__) ;
 struct mips_elf_link_hash_table* FUNC_5 (struct bfd_link_info*) ;

bfd_boolean
FUNC_6 (struct bfd_link_info *VAR_5,
         struct elf_link_hash_entry *VAR_6)
{
  bfd *VAR_7;
  struct mips_elf_link_hash_entry *VAR_8;
  asection *VAR_9;
  struct mips_elf_link_hash_table *VAR_10;

  VAR_10 = FUNC_5 (VAR_5);
  VAR_7 = FUNC_3 (VAR_5)->dynobj;


  FUNC_0 (VAR_7 != ((void*)0)
       && (VAR_6->needs_plt
    || VAR_6->u.weakdef != ((void*)0)
    || (VAR_6->def_dynamic
        && VAR_6->ref_regular
        && !VAR_6->def_regular)));




  VAR_8 = (struct mips_elf_link_hash_entry *) VAR_6;
  if (! VAR_5->relocatable
      && VAR_8->possibly_dynamic_relocs != 0
      && (VAR_6->root.type == VAR_4
   || !VAR_6->def_regular))
    {
      FUNC_4
 (VAR_7, VAR_5, VAR_8->possibly_dynamic_relocs);
      if (VAR_8->readonly_reloc)


 VAR_5->flags |= VAR_0;
    }


  if (! VAR_8->no_fn_stub
      && VAR_6->needs_plt)
    {
      if (! FUNC_3 (VAR_5)->dynamic_sections_created)
 return VAR_2;





      if (!VAR_6->def_regular)
 {

   VAR_9 = FUNC_2 (VAR_7,
           FUNC_1 (VAR_7));
   FUNC_0 (VAR_9 != ((void*)0));

   VAR_6->root.u.def.section = VAR_9;
   VAR_6->root.u.def.value = VAR_9->size;


   VAR_6->plt.offset = VAR_9->size;


   VAR_9->size += VAR_10->function_stub_size;



   return VAR_2;
 }
    }
  else if ((VAR_6->type == VAR_1)
    && !VAR_6->needs_plt)
    {


      VAR_6->root.u.def.value = 0;
      return VAR_2;
    }




  if (VAR_6->u.weakdef != ((void*)0))
    {
      FUNC_0 (VAR_6->u.weakdef->root.type == VAR_3
    || VAR_6->u.weakdef->root.type == VAR_4);
      VAR_6->root.u.def.section = VAR_6->u.weakdef->root.u.def.section;
      VAR_6->root.u.def.value = VAR_6->u.weakdef->root.u.def.value;
      return VAR_2;
    }




  return VAR_2;
}
