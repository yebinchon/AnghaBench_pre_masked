
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int root; } ;
struct ppc_link_hash_table {TYPE_1__ elf; } ;
struct TYPE_12__ {scalar_t__ link; } ;
struct TYPE_13__ {int value; int section; } ;
struct TYPE_14__ {TYPE_2__ i; TYPE_3__ def; } ;
struct TYPE_17__ {char* string; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_4__ u; TYPE_7__ root; } ;
struct TYPE_15__ {struct plt_entry* plist; } ;
struct TYPE_19__ {int forced_local; int dynindx; int needs_plt; int def_regular; int other; int non_got_ref; int ref_regular_nonweak; int ref_dynamic; int ref_regular; TYPE_8__ root; scalar_t__ def_dynamic; TYPE_5__ plt; } ;
struct ppc_link_hash_entry {int is_func_descriptor; TYPE_9__ elf; struct ppc_link_hash_entry* oh; scalar_t__ fake; int is_func; scalar_t__ was_undefined; } ;
struct TYPE_16__ {scalar_t__ refcount; } ;
struct plt_entry {TYPE_6__ plt; struct plt_entry* next; } ;
struct elf_link_hash_entry {int dummy; } ;
struct bfd_link_info {scalar_t__ shared; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bfd_link_info*,TYPE_9__*,int) ;
 int FUNC_2 (struct bfd_link_info*,TYPE_9__*) ;
 int FUNC_3 (int *,TYPE_8__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct ppc_link_hash_entry* FUNC_4 (struct ppc_link_hash_entry*,struct ppc_link_hash_table*) ;
 int * FUNC_5 (int ) ;
 struct ppc_link_hash_entry* FUNC_6 (struct bfd_link_info*,struct ppc_link_hash_entry*) ;
 int FUNC_7 (struct ppc_link_hash_entry*,struct ppc_link_hash_entry*) ;
 scalar_t__ FUNC_8 (int ,int ,int *,int *) ;
 struct ppc_link_hash_table* FUNC_9 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (struct elf_link_hash_entry *VAR_9, void *VAR_10)
{
  struct bfd_link_info *VAR_11;
  struct ppc_link_hash_table *VAR_12;
  struct plt_entry *VAR_13;
  struct ppc_link_hash_entry *VAR_14;
  struct ppc_link_hash_entry *VAR_15;
  bfd_boolean VAR_16;

  VAR_14 = (struct ppc_link_hash_entry *) VAR_9;
  if (VAR_14->elf.root.type == VAR_5)
    return VAR_2;

  if (VAR_14->elf.root.type == VAR_8)
    VAR_14 = (struct ppc_link_hash_entry *) VAR_14->elf.root.u.i.link;

  VAR_11 = VAR_10;
  VAR_12 = FUNC_9 (VAR_11);





  if (VAR_14->elf.root.type == VAR_7
      && VAR_14->was_undefined
      && (VAR_14->oh->elf.root.type == VAR_3
   || VAR_14->oh->elf.root.type == VAR_4)
      && FUNC_5 (VAR_14->oh->elf.root.u.def.section) != ((void*)0)
      && FUNC_8 (VAR_14->oh->elf.root.u.def.section,
     VAR_14->oh->elf.root.u.def.value,
     &VAR_14->elf.root.u.def.section,
     &VAR_14->elf.root.u.def.value) != (bfd_vma) -1)
    {
      VAR_14->elf.root.type = VAR_14->oh->elf.root.type;
      VAR_14->elf.forced_local = 1;
      VAR_14->elf.def_regular = VAR_14->oh->elf.def_regular;
      VAR_14->elf.def_dynamic = VAR_14->oh->elf.def_dynamic;
    }



  if (!VAR_14->is_func)
    return VAR_2;

  for (VAR_13 = VAR_14->elf.plt.plist; VAR_13 != ((void*)0); VAR_13 = VAR_13->next)
    if (VAR_13->plt.refcount > 0)
      break;
  if (VAR_13 == ((void*)0)
      || VAR_14->elf.root.root.string[0] != '.'
      || VAR_14->elf.root.root.string[1] == '\0')
    return VAR_2;




  VAR_15 = FUNC_4 (VAR_14, VAR_12);
  if (VAR_15 != ((void*)0))
    while (VAR_15->elf.root.type == VAR_5
    || VAR_15->elf.root.type == VAR_8)
      VAR_15 = (struct ppc_link_hash_entry *) VAR_15->elf.root.u.i.link;

  if (VAR_15 == ((void*)0)
      && VAR_11->shared
      && (VAR_14->elf.root.type == VAR_6
   || VAR_14->elf.root.type == VAR_7))
    {
      VAR_15 = FUNC_6 (VAR_11, VAR_14);
      if (VAR_15 == ((void*)0))
 return VAR_0;
    }







  if (VAR_15 != ((void*)0)
      && VAR_15->fake
      && VAR_15->elf.root.type == VAR_7)
    {
      if (VAR_14->elf.root.type == VAR_6)
 {
   VAR_15->elf.root.type = VAR_6;
   FUNC_3 (&VAR_12->elf.root, &VAR_15->elf.root);
 }
      else if (VAR_14->elf.root.type == VAR_3
        || VAR_14->elf.root.type == VAR_4)
 {
   FUNC_1 (VAR_11, &VAR_15->elf, VAR_2);
 }
    }

  if (VAR_15 != ((void*)0)
      && !VAR_15->elf.forced_local
      && (VAR_11->shared
   || VAR_15->elf.def_dynamic
   || VAR_15->elf.ref_dynamic
   || (VAR_15->elf.root.type == VAR_7
       && FUNC_0 (VAR_15->elf.other) == VAR_1)))
    {
      if (VAR_15->elf.dynindx == -1)
 if (! FUNC_2 (VAR_11, &VAR_15->elf))
   return VAR_0;
      VAR_15->elf.ref_regular |= VAR_14->elf.ref_regular;
      VAR_15->elf.ref_dynamic |= VAR_14->elf.ref_dynamic;
      VAR_15->elf.ref_regular_nonweak |= VAR_14->elf.ref_regular_nonweak;
      VAR_15->elf.non_got_ref |= VAR_14->elf.non_got_ref;
      if (FUNC_0 (VAR_14->elf.other) == VAR_1)
 {
   FUNC_7 (VAR_14, VAR_15);
   VAR_15->elf.needs_plt = 1;
 }
      VAR_15->is_func_descriptor = 1;
      VAR_15->oh = VAR_14;
      VAR_14->oh = VAR_15;
    }
  VAR_16 = (!VAR_14->elf.def_regular
   || VAR_15 == ((void*)0)
   || !VAR_15->elf.def_regular
   || VAR_15->elf.forced_local);
  FUNC_1 (VAR_11, &VAR_14->elf, VAR_16);

  return VAR_2;
}
