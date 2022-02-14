
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_18__ {TYPE_10__* section; int value; } ;
struct TYPE_19__ {TYPE_11__ def; } ;
struct TYPE_31__ {int string; } ;
struct TYPE_20__ {scalar_t__ type; TYPE_12__ u; TYPE_9__ root; } ;
struct TYPE_29__ {TYPE_6__* weakdef; } ;
struct TYPE_24__ {scalar_t__ refcount; void* offset; } ;
struct elf_link_hash_entry {scalar_t__ type; scalar_t__ size; int needs_copy; TYPE_13__ root; scalar_t__ non_got_ref; TYPE_7__ u; TYPE_2__ plt; scalar_t__ needs_plt; int ref_dynamic; scalar_t__ def_dynamic; int def_regular; scalar_t__ ref_regular; } ;
struct bfd_link_info {scalar_t__ shared; } ;
struct TYPE_23__ {int * dynobj; } ;
struct _bfd_sparc_elf_link_hash_table {TYPE_15__* sdynbss; TYPE_14__* srelbss; TYPE_1__ elf; } ;
struct _bfd_sparc_elf_link_hash_entry {struct _bfd_sparc_elf_dyn_relocs* dyn_relocs; } ;
struct _bfd_sparc_elf_dyn_relocs {TYPE_8__* sec; struct _bfd_sparc_elf_dyn_relocs* next; } ;
typedef void* bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_22__ {int flags; } ;
typedef TYPE_15__ asection ;
struct TYPE_30__ {TYPE_15__* output_section; } ;
struct TYPE_25__ {int value; TYPE_10__* section; } ;
struct TYPE_26__ {TYPE_3__ def; } ;
struct TYPE_27__ {scalar_t__ type; TYPE_4__ u; } ;
struct TYPE_28__ {TYPE_5__ root; } ;
struct TYPE_21__ {int size; } ;
struct TYPE_17__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct _bfd_sparc_elf_link_hash_table*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct elf_link_hash_entry*,TYPE_15__*) ;
 int FUNC_4 (int ,int ) ;
 struct _bfd_sparc_elf_link_hash_table* FUNC_5 (struct bfd_link_info*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int ,int ) ;

bfd_boolean
FUNC_7 (struct bfd_link_info *VAR_10,
         struct elf_link_hash_entry *VAR_11)
{
  struct _bfd_sparc_elf_link_hash_table *VAR_12;
  struct _bfd_sparc_elf_link_hash_entry * VAR_13;
  struct _bfd_sparc_elf_dyn_relocs *VAR_14;
  asection *VAR_15;

  VAR_12 = FUNC_5 (VAR_10);


  FUNC_0 (VAR_12->elf.dynobj != ((void*)0)
       && (VAR_11->needs_plt
    || VAR_11->u.weakdef != ((void*)0)
    || (VAR_11->def_dynamic
        && VAR_11->ref_regular
        && !VAR_11->def_regular)));
  if (VAR_11->type == VAR_3
      || VAR_11->needs_plt
      || (VAR_11->type == VAR_4
   && (VAR_11->root.type == VAR_6
       || VAR_11->root.type == VAR_7)
   && (VAR_11->root.u.def.section->flags & VAR_1) != 0))
    {
      if (VAR_11->plt.refcount <= 0
   || (! VAR_10->shared
       && !VAR_11->def_dynamic
       && !VAR_11->ref_dynamic
       && VAR_11->root.type != VAR_9
       && VAR_11->root.type != VAR_8))
 {





   VAR_11->plt.offset = (bfd_vma) -1;
   VAR_11->needs_plt = 0;
 }

      return VAR_5;
    }
  else
    VAR_11->plt.offset = (bfd_vma) -1;




  if (VAR_11->u.weakdef != ((void*)0))
    {
      FUNC_0 (VAR_11->u.weakdef->root.type == VAR_6
    || VAR_11->u.weakdef->root.type == VAR_7);
      VAR_11->root.u.def.section = VAR_11->u.weakdef->root.u.def.section;
      VAR_11->root.u.def.value = VAR_11->u.weakdef->root.u.def.value;
      return VAR_5;
    }
  if (VAR_10->shared)
    return VAR_5;



  if (!VAR_11->non_got_ref)
    return VAR_5;

  VAR_13 = (struct _bfd_sparc_elf_link_hash_entry *) VAR_11;
  for (VAR_14 = VAR_13->dyn_relocs; VAR_14 != ((void*)0); VAR_14 = VAR_14->next)
    {
      VAR_15 = VAR_14->sec->output_section;
      if (VAR_15 != ((void*)0) && (VAR_15->flags & VAR_2) != 0)
 break;
    }



  if (VAR_14 == ((void*)0))
    {
      VAR_11->non_got_ref = 0;
      return VAR_5;
    }

  if (VAR_11->size == 0)
    {
      FUNC_4) (FUNC_2("dynamic variable `%s' is zero size"),
        VAR_11->root.root.string);
      return VAR_5;
    }
  if ((VAR_11->root.u.def.section->flags & VAR_0) != 0)
    {
      VAR_12->srelbss->size += FUNC_1 (VAR_12);
      VAR_11->needs_copy = 1;
    }

  VAR_15 = VAR_12->sdynbss;

  return FUNC_3 (VAR_11, VAR_15);
}
