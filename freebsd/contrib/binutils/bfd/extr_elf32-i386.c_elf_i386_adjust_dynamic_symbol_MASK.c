
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_16__ {TYPE_9__* section; int value; } ;
struct TYPE_17__ {TYPE_10__ def; } ;
struct TYPE_28__ {int string; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_11__ u; TYPE_8__ root; } ;
struct TYPE_26__ {TYPE_5__* weakdef; } ;
struct TYPE_21__ {scalar_t__ refcount; void* offset; } ;
struct elf_link_hash_entry {scalar_t__ type; scalar_t__ size; int needs_copy; TYPE_12__ root; scalar_t__ non_got_ref; TYPE_6__ u; TYPE_1__ plt; scalar_t__ needs_plt; int other; } ;
struct elf_i386_link_hash_table {TYPE_14__* sdynbss; TYPE_13__* srelbss; int is_vxworks; } ;
struct elf_i386_link_hash_entry {struct elf_i386_dyn_relocs* dyn_relocs; } ;
struct elf_i386_dyn_relocs {TYPE_7__* sec; struct elf_i386_dyn_relocs* next; } ;
struct bfd_link_info {scalar_t__ nocopyreloc; scalar_t__ shared; } ;
typedef void* bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_20__ {int flags; } ;
typedef TYPE_14__ asection ;
struct TYPE_29__ {int flags; } ;
struct TYPE_27__ {TYPE_14__* output_section; } ;
struct TYPE_22__ {int value; TYPE_9__* section; } ;
struct TYPE_23__ {TYPE_2__ def; } ;
struct TYPE_24__ {scalar_t__ type; TYPE_3__ u; } ;
struct TYPE_25__ {scalar_t__ non_got_ref; TYPE_4__ root; } ;
struct TYPE_19__ {int size; } ;
typedef int Elf32_External_Rel ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct elf_link_hash_entry*,TYPE_14__*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct elf_i386_link_hash_table* FUNC_6 (struct bfd_link_info*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (struct bfd_link_info *VAR_9,
    struct elf_link_hash_entry *VAR_10)
{
  struct elf_i386_link_hash_table *VAR_11;
  asection *VAR_12;




  if (VAR_10->type == VAR_3
      || VAR_10->needs_plt)
    {
      if (VAR_10->plt.refcount <= 0
   || FUNC_2 (VAR_9, VAR_10)
   || (FUNC_1 (VAR_10->other) != VAR_4
       && VAR_10->root.type == VAR_8))
 {





   VAR_10->plt.offset = (bfd_vma) -1;
   VAR_10->needs_plt = 0;
 }

      return VAR_5;
    }
  else





    VAR_10->plt.offset = (bfd_vma) -1;




  if (VAR_10->u.weakdef != ((void*)0))
    {
      FUNC_0 (VAR_10->u.weakdef->root.type == VAR_6
    || VAR_10->u.weakdef->root.type == VAR_7);
      VAR_10->root.u.def.section = VAR_10->u.weakdef->root.u.def.section;
      VAR_10->root.u.def.value = VAR_10->u.weakdef->root.u.def.value;
      if (VAR_0 || VAR_9->nocopyreloc)
 VAR_10->non_got_ref = VAR_10->u.weakdef->non_got_ref;
      return VAR_5;
    }
  if (VAR_9->shared)
    return VAR_5;



  if (!VAR_10->non_got_ref)
    return VAR_5;


  if (VAR_9->nocopyreloc)
    {
      VAR_10->non_got_ref = 0;
      return VAR_5;
    }

  VAR_11 = FUNC_6 (VAR_9);





  if (VAR_0 && !VAR_11->is_vxworks)
    {
      struct elf_i386_link_hash_entry * VAR_13;
      struct elf_i386_dyn_relocs *VAR_14;

      VAR_13 = (struct elf_i386_link_hash_entry *) VAR_10;
      for (VAR_14 = VAR_13->dyn_relocs; VAR_14 != ((void*)0); VAR_14 = VAR_14->next)
 {
   VAR_12 = VAR_14->sec->output_section;
   if (VAR_12 != ((void*)0) && (VAR_12->flags & VAR_2) != 0)
     break;
 }

      if (VAR_14 == ((void*)0))
 {
   VAR_10->non_got_ref = 0;
   return VAR_5;
 }
    }

  if (VAR_10->size == 0)
    {
      FUNC_5) (FUNC_3("dynamic variable `%s' is zero size"),
        VAR_10->root.root.string);
      return VAR_5;
    }
  if ((VAR_10->root.u.def.section->flags & VAR_1) != 0)
    {
      VAR_11->srelbss->size += sizeof (Elf32_External_Rel);
      VAR_10->needs_copy = 1;
    }

  VAR_12 = VAR_11->sdynbss;

  return FUNC_4 (VAR_10, VAR_12);
}
