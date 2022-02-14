
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_25__ {int * dynobj; } ;
struct ppc_elf_link_hash_table {TYPE_15__* relbss; TYPE_15__* relsbss; TYPE_15__* dynbss; TYPE_15__* dynsbss; TYPE_1__ elf; } ;
struct ppc_elf_dyn_relocs {TYPE_9__* sec; struct ppc_elf_dyn_relocs* next; } ;
struct TYPE_26__ {scalar_t__ refcount; } ;
struct plt_entry {TYPE_2__ plt; struct plt_entry* next; } ;
struct TYPE_20__ {TYPE_11__* section; int value; } ;
struct TYPE_21__ {TYPE_12__ def; } ;
struct TYPE_18__ {char* string; } ;
struct TYPE_22__ {scalar_t__ type; TYPE_13__ u; TYPE_10__ root; } ;
struct TYPE_32__ {TYPE_7__* weakdef; } ;
struct TYPE_27__ {struct plt_entry* plist; } ;
struct elf_link_hash_entry {scalar_t__ type; scalar_t__ size; int needs_copy; TYPE_14__ root; scalar_t__ non_got_ref; TYPE_8__ u; TYPE_3__ plt; scalar_t__ needs_plt; int other; int def_regular; scalar_t__ ref_regular; scalar_t__ def_dynamic; } ;
struct bfd_link_info {scalar_t__ shared; } ;
typedef int bfd_boolean ;
struct TYPE_23__ {int flags; int size; } ;
typedef TYPE_15__ asection ;
struct TYPE_33__ {TYPE_15__* output_section; } ;
struct TYPE_28__ {int value; TYPE_11__* section; } ;
struct TYPE_29__ {TYPE_4__ def; } ;
struct TYPE_30__ {scalar_t__ type; TYPE_5__ u; } ;
struct TYPE_31__ {scalar_t__ non_got_ref; TYPE_6__ root; } ;
struct TYPE_24__ {scalar_t__ has_sda_refs; struct ppc_elf_dyn_relocs* dyn_relocs; } ;
struct TYPE_19__ {int flags; } ;
typedef int Elf32_External_Rela ;


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
 int FUNC_4 (struct elf_link_hash_entry*,TYPE_15__*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int ,char*,char*) ;
 TYPE_16__* FUNC_7 (struct elf_link_hash_entry*) ;
 struct ppc_elf_link_hash_table* FUNC_8 (struct bfd_link_info*) ;
 int VAR_9 ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (struct bfd_link_info *VAR_10,
          struct elf_link_hash_entry *VAR_11)
{
  struct ppc_elf_link_hash_table *VAR_12;
  asection *VAR_13;







  VAR_12 = FUNC_8 (VAR_10);
  FUNC_0 (VAR_12->elf.dynobj != ((void*)0)
       && (VAR_11->needs_plt
    || VAR_11->u.weakdef != ((void*)0)
    || (VAR_11->def_dynamic
        && VAR_11->ref_regular
        && !VAR_11->def_regular)));


  if (VAR_11->type == VAR_3
      || VAR_11->needs_plt)
    {


      struct plt_entry *VAR_14;
      for (VAR_14 = VAR_11->plt.plist; VAR_14 != ((void*)0); VAR_14 = VAR_14->next)
 if (VAR_14->plt.refcount > 0)
   break;
      if (VAR_14 == ((void*)0)
   || FUNC_2 (VAR_10, VAR_11)
   || (FUNC_1 (VAR_11->other) != VAR_4
       && VAR_11->root.type == VAR_8))
 {
   VAR_11->plt.plist = ((void*)0);
   VAR_11->needs_plt = 0;
 }
      return VAR_5;
    }
  else
    VAR_11->plt.plist = ((void*)0);




  if (VAR_11->u.weakdef != ((void*)0))
    {
      FUNC_0 (VAR_11->u.weakdef->root.type == VAR_6
    || VAR_11->u.weakdef->root.type == VAR_7);
      VAR_11->root.u.def.section = VAR_11->u.weakdef->root.u.def.section;
      VAR_11->root.u.def.value = VAR_11->u.weakdef->root.u.def.value;
      if (VAR_0)
 VAR_11->non_got_ref = VAR_11->u.weakdef->non_got_ref;
      return VAR_5;
    }
  if (VAR_10->shared)
    return VAR_5;



  if (!VAR_11->non_got_ref)
    return VAR_5;




  if (VAR_0
      && !FUNC_7 (VAR_11)->has_sda_refs)
    {
      struct ppc_elf_dyn_relocs *VAR_15;
      for (VAR_15 = FUNC_7 (VAR_11)->dyn_relocs; VAR_15 != ((void*)0); VAR_15 = VAR_15->next)
 {
   VAR_13 = VAR_15->sec->output_section;
   if (VAR_13 != ((void*)0) && (VAR_13->flags & VAR_2) != 0)
     break;
 }

      if (VAR_15 == ((void*)0))
 {
   VAR_11->non_got_ref = 0;
   return VAR_5;
 }
    }

  if (VAR_11->size == 0)
    {
      FUNC_5) (FUNC_3("dynamic variable `%s' is zero size"),
        VAR_11->root.root.string);
      return VAR_5;
    }
  if (FUNC_7 (VAR_11)->has_sda_refs)
    VAR_13 = VAR_12->dynsbss;
  else
    VAR_13 = VAR_12->dynbss;
  FUNC_0 (VAR_13 != ((void*)0));





  if ((VAR_11->root.u.def.section->flags & VAR_1) != 0)
    {
      asection *VAR_16;

      if (FUNC_7 (VAR_11)->has_sda_refs)
 VAR_16 = VAR_12->relsbss;
      else
 VAR_16 = VAR_12->relbss;
      FUNC_0 (VAR_16 != ((void*)0));
      VAR_16->size += sizeof (Elf32_External_Rela);
      VAR_11->needs_copy = 1;
    }

  return FUNC_4 (VAR_11, VAR_13);
}
