
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
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_17__ {TYPE_9__* section; int value; } ;
struct TYPE_18__ {TYPE_10__ def; } ;
struct TYPE_29__ {int string; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_11__ u; TYPE_8__ root; } ;
struct TYPE_27__ {TYPE_5__* weakdef; } ;
struct TYPE_22__ {scalar_t__ refcount; void* offset; } ;
struct elf_link_hash_entry {scalar_t__ type; scalar_t__ size; int needs_copy; TYPE_12__ root; int non_got_ref; TYPE_6__ u; TYPE_1__ plt; scalar_t__ needs_plt; int other; int def_regular; scalar_t__ ref_regular; scalar_t__ def_dynamic; } ;
struct TYPE_28__ {scalar_t__ is_relocatable_executable; } ;
struct elf32_arm_link_hash_table {TYPE_7__ root; } ;
struct elf32_arm_link_hash_entry {scalar_t__ plt_thumb_refcount; } ;
struct bfd_link_info {scalar_t__ shared; } ;
typedef void* bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_20__ {int size; } ;
typedef TYPE_13__ asection ;
struct TYPE_30__ {int flags; } ;
struct TYPE_23__ {int value; TYPE_9__* section; } ;
struct TYPE_24__ {TYPE_2__ def; } ;
struct TYPE_25__ {scalar_t__ type; TYPE_3__ u; } ;
struct TYPE_26__ {TYPE_4__ root; } ;
struct TYPE_21__ {int * dynobj; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (struct elf32_arm_link_hash_table*,char*) ;
 scalar_t__ FUNC_3 (struct elf32_arm_link_hash_table*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct elf_link_hash_entry*,TYPE_13__*) ;
 int FUNC_7 (int ,int ) ;
 TYPE_13__* FUNC_8 (int *,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct elf32_arm_link_hash_table* FUNC_9 (struct bfd_link_info*) ;
 TYPE_14__* FUNC_10 (struct bfd_link_info*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_12 (struct bfd_link_info * VAR_8,
     struct elf_link_hash_entry * VAR_9)
{
  bfd * VAR_10;
  asection * VAR_11;
  struct elf32_arm_link_hash_entry * VAR_12;
  struct elf32_arm_link_hash_table *VAR_13;

  VAR_13 = FUNC_9 (VAR_8);
  VAR_10 = FUNC_10 (VAR_8)->dynobj;


  FUNC_0 (VAR_10 != ((void*)0)
       && (VAR_9->needs_plt
    || VAR_9->u.weakdef != ((void*)0)
    || (VAR_9->def_dynamic
        && VAR_9->ref_regular
        && !VAR_9->def_regular)));

  VAR_12 = (struct elf32_arm_link_hash_entry *) VAR_9;




  if (VAR_9->type == VAR_2 || VAR_9->type == VAR_1
      || VAR_9->needs_plt)
    {
      if (VAR_9->plt.refcount <= 0
   || FUNC_4 (VAR_8, VAR_9)
   || (FUNC_1 (VAR_9->other) != VAR_3
       && VAR_9->root.type == VAR_7))
 {





   VAR_9->plt.offset = (bfd_vma) -1;
   VAR_12->plt_thumb_refcount = 0;
   VAR_9->needs_plt = 0;
 }

      return VAR_4;
    }
  else
    {





      VAR_9->plt.offset = (bfd_vma) -1;
      VAR_12->plt_thumb_refcount = 0;
    }




  if (VAR_9->u.weakdef != ((void*)0))
    {
      FUNC_0 (VAR_9->u.weakdef->root.type == VAR_5
    || VAR_9->u.weakdef->root.type == VAR_6);
      VAR_9->root.u.def.section = VAR_9->u.weakdef->root.u.def.section;
      VAR_9->root.u.def.value = VAR_9->u.weakdef->root.u.def.value;
      return VAR_4;
    }



  if (!VAR_9->non_got_ref)
    return VAR_4;
  if (VAR_8->shared || VAR_13->root.is_relocatable_executable)
    return VAR_4;

  if (VAR_9->size == 0)
    {
      FUNC_7) (FUNC_5("dynamic variable `%s' is zero size"),
        VAR_9->root.root.string);
      return VAR_4;
    }
  VAR_11 = FUNC_8 (VAR_10, ".dynbss");
  FUNC_0 (VAR_11 != ((void*)0));





  if ((VAR_9->root.u.def.section->flags & VAR_0) != 0)
    {
      asection *VAR_14;

      VAR_14 = FUNC_8 (VAR_10, FUNC_2 (VAR_13, ".bss"));
      FUNC_0 (VAR_14 != ((void*)0));
      VAR_14->size += FUNC_3 (VAR_13);
      VAR_9->needs_copy = 1;
    }

  return FUNC_6 (VAR_9, VAR_11);
}
