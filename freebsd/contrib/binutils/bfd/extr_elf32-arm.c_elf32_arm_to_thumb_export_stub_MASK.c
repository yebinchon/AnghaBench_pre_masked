
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_24__ {TYPE_7__* section; } ;
struct TYPE_25__ {TYPE_8__ def; } ;
struct TYPE_22__ {int string; } ;
struct TYPE_15__ {TYPE_9__ u; TYPE_6__ root; } ;
struct elf_link_hash_entry {TYPE_10__ root; } ;
struct elf32_arm_link_hash_table {int obfd; int * bfd_of_glue_owner; } ;
struct elf32_arm_link_hash_entry {TYPE_4__* export_glue; } ;
struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_16__ {TYPE_5__* output_section; scalar_t__ output_offset; int * contents; } ;
typedef TYPE_11__ asection ;
struct TYPE_23__ {int owner; } ;
struct TYPE_21__ {scalar_t__ vma; } ;
struct TYPE_17__ {scalar_t__ value; TYPE_11__* section; } ;
struct TYPE_18__ {TYPE_1__ def; } ;
struct TYPE_19__ {TYPE_2__ u; } ;
struct TYPE_20__ {TYPE_3__ root; } ;


 int VAR_0 ;
 int FUNC_0 (struct elf_link_hash_entry*) ;
 int VAR_1 ;
 TYPE_11__* FUNC_1 (int *,int ) ;
 struct elf_link_hash_entry* FUNC_2 (struct bfd_link_info*,int ,int ,int ,TYPE_11__*,scalar_t__,TYPE_11__*,char**) ;
 struct elf32_arm_link_hash_entry* FUNC_3 (struct elf_link_hash_entry*) ;
 struct elf32_arm_link_hash_table* FUNC_4 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (struct elf_link_hash_entry *VAR_2, void * VAR_3)
{
  struct bfd_link_info * VAR_4 = (struct bfd_link_info *) VAR_3;
  asection * VAR_5;
  struct elf_link_hash_entry * VAR_6;
  struct elf32_arm_link_hash_entry *VAR_7;
  struct elf32_arm_link_hash_table * VAR_8;
  asection *VAR_9;
  bfd_vma VAR_10;
  char *VAR_11;

  VAR_7 = FUNC_3(VAR_2);

  if (VAR_7->export_glue == ((void*)0))
    return VAR_1;

  VAR_8 = FUNC_4 (VAR_4);

  FUNC_0 (VAR_8 != ((void*)0));
  FUNC_0 (VAR_8->bfd_of_glue_owner != ((void*)0));

  VAR_5 = FUNC_1 (VAR_8->bfd_of_glue_owner,
          VAR_0);
  FUNC_0 (VAR_5 != ((void*)0));
  FUNC_0 (VAR_5->contents != ((void*)0));
  FUNC_0 (VAR_5->output_section != ((void*)0));

  VAR_9 = VAR_7->export_glue->root.u.def.section;

  FUNC_0 (VAR_9->output_section != ((void*)0));

  VAR_10 = VAR_7->export_glue->root.u.def.value + VAR_9->output_offset
 + VAR_9->output_section->vma;
  VAR_6 = FUNC_2 (VAR_4, VAR_2->root.root.string,
         VAR_2->root.u.def.section->owner,
         VAR_8->obfd, VAR_9, VAR_10, VAR_5,
         &VAR_11);
  FUNC_0 (VAR_6);
  return VAR_1;
}
