
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct mips_elf_link_hash_table {scalar_t__ plt_header_size; scalar_t__ plt_entry_size; int sdynbss; TYPE_14__* srelbss; TYPE_4__* srelplt2; TYPE_3__* srelplt; TYPE_2__* sgotplt; TYPE_10__* splt; } ;
struct mips_elf_link_hash_entry {scalar_t__ is_relocation_target; scalar_t__ is_branch_target; } ;
struct TYPE_17__ {scalar_t__ value; TYPE_10__* section; } ;
struct TYPE_18__ {TYPE_11__ def; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_12__ u; } ;
struct TYPE_30__ {TYPE_8__* weakdef; } ;
struct TYPE_22__ {scalar_t__ offset; } ;
struct elf_link_hash_entry {int needs_plt; int needs_copy; scalar_t__ type; TYPE_13__ root; TYPE_9__ u; int def_regular; scalar_t__ ref_regular; scalar_t__ def_dynamic; TYPE_1__ plt; int other; int forced_local; } ;
struct bfd_link_info {scalar_t__ shared; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_26__ {scalar_t__ value; TYPE_10__* section; } ;
struct TYPE_27__ {TYPE_5__ def; } ;
struct TYPE_28__ {scalar_t__ type; TYPE_6__ u; } ;
struct TYPE_29__ {TYPE_7__ root; } ;
struct TYPE_25__ {int size; } ;
struct TYPE_24__ {int size; } ;
struct TYPE_23__ {int size; } ;
struct TYPE_21__ {int * dynobj; } ;
struct TYPE_20__ {int size; } ;
struct TYPE_16__ {scalar_t__ size; int flags; } ;
typedef int Elf32_External_Rela ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int VAR_3 ;
 int FUNC_3 (struct elf_link_hash_entry*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_15__* FUNC_4 (struct bfd_link_info*) ;
 struct mips_elf_link_hash_table* FUNC_5 (struct bfd_link_info*) ;

bfd_boolean
FUNC_6 (struct bfd_link_info *VAR_7,
      struct elf_link_hash_entry *VAR_8)
{
  bfd *VAR_9;
  struct mips_elf_link_hash_entry *VAR_10;
  struct mips_elf_link_hash_table *VAR_11;

  VAR_11 = FUNC_5 (VAR_7);
  VAR_9 = FUNC_4 (VAR_7)->dynobj;
  VAR_10 = (struct mips_elf_link_hash_entry *) VAR_8;


  FUNC_0 (VAR_9 != ((void*)0)
       && (VAR_8->needs_plt
    || VAR_8->needs_copy
    || VAR_8->u.weakdef != ((void*)0)
    || (VAR_8->def_dynamic
        && VAR_8->ref_regular
        && !VAR_8->def_regular)));






  if ((VAR_10->is_branch_target
       || (!VAR_7->shared
    && VAR_8->type == VAR_1
    && VAR_10->is_relocation_target))
      && VAR_8->def_dynamic
      && VAR_8->ref_regular
      && !VAR_8->def_regular
      && !VAR_8->forced_local)
    VAR_8->needs_plt = 1;



  else if (VAR_8->needs_plt
    && (FUNC_2 (VAR_7, VAR_8)
        || (FUNC_1 (VAR_8->other) != VAR_2
     && VAR_8->root.type == VAR_6)))
    {
      VAR_8->needs_plt = 0;
      return VAR_3;
    }

  if (VAR_8->needs_plt)
    {


      if (VAR_11->splt->size == 0)
 {
   VAR_11->splt->size += VAR_11->plt_header_size;
   if (!VAR_7->shared)
     VAR_11->srelplt2->size += 2 * sizeof (Elf32_External_Rela);
 }


      VAR_8->plt.offset = VAR_11->splt->size;
      VAR_11->splt->size += VAR_11->plt_entry_size;





      if (!VAR_8->def_regular)
 {
   VAR_8->root.u.def.section = VAR_11->splt;
   VAR_8->root.u.def.value = VAR_8->plt.offset;
   if (!VAR_7->shared)
     VAR_8->root.u.def.value += 8;
 }


      VAR_11->sgotplt->size += 4;
      VAR_11->srelplt->size += sizeof (Elf32_External_Rela);


      if (!VAR_7->shared)
 VAR_11->srelplt2->size += 3 * sizeof (Elf32_External_Rela);

      return VAR_3;
    }



  if (VAR_8->type == VAR_1
      && VAR_8->def_dynamic
      && VAR_8->ref_regular
      && !VAR_8->def_regular)
    {
      VAR_8->root.u.def.value = 0;
      return VAR_3;
    }




  if (VAR_8->u.weakdef != ((void*)0))
    {
      FUNC_0 (VAR_8->u.weakdef->root.type == VAR_4
    || VAR_8->u.weakdef->root.type == VAR_5);
      VAR_8->root.u.def.section = VAR_8->u.weakdef->root.u.def.section;
      VAR_8->root.u.def.value = VAR_8->u.weakdef->root.u.def.value;
      return VAR_3;
    }



  if (VAR_7->shared)
    return VAR_3;
  if ((VAR_8->root.u.def.section->flags & VAR_0) != 0)
    {
      VAR_11->srelbss->size += sizeof (Elf32_External_Rela);
      VAR_8->needs_copy = 1;
    }

  return FUNC_3 (VAR_8, VAR_11->sdynbss);
}
