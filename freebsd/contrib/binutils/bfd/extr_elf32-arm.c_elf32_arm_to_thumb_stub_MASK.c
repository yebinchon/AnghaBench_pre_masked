
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int value; } ;
struct TYPE_12__ {TYPE_1__ def; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_3__ root; } ;
struct elf32_arm_link_hash_table {int * bfd_of_glue_owner; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_vma ;
typedef int bfd_signed_vma ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_15__ {int output_offset; int vma; TYPE_4__* output_section; int * contents; } ;
typedef TYPE_5__ asection ;
struct TYPE_14__ {int vma; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (int *,int *) ;
 TYPE_5__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int *) ;
 struct elf_link_hash_entry* FUNC_4 (struct bfd_link_info*,char const*,int *,int *,TYPE_5__*,int,TYPE_5__*,char**) ;
 struct elf32_arm_link_hash_table* FUNC_5 (struct bfd_link_info*) ;

__attribute__((used)) static int
FUNC_6 (struct bfd_link_info * VAR_3,
    const char * VAR_4,
    bfd * VAR_5,
    bfd * VAR_6,
    asection * VAR_7,
    bfd_byte * VAR_8,
    asection * VAR_9,
    bfd_vma VAR_10,
    bfd_signed_vma VAR_11,
    bfd_vma VAR_12,
    char **VAR_13)
{
  unsigned long int VAR_14;
  bfd_vma VAR_15;
  asection * VAR_16;
  long int VAR_17;
  struct elf_link_hash_entry * VAR_18;
  struct elf32_arm_link_hash_table * VAR_19;

  VAR_19 = FUNC_5 (VAR_3);

  FUNC_0 (VAR_19 != ((void*)0));
  FUNC_0 (VAR_19->bfd_of_glue_owner != ((void*)0));

  VAR_16 = FUNC_2 (VAR_19->bfd_of_glue_owner,
          VAR_0);
  FUNC_0 (VAR_16 != ((void*)0));
  FUNC_0 (VAR_16->contents != ((void*)0));
  FUNC_0 (VAR_16->output_section != ((void*)0));

  VAR_18 = FUNC_4 (VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_9, VAR_12, VAR_16, VAR_13);
  if (!VAR_18)
    return VAR_1;

  VAR_15 = VAR_18->root.u.def.value;
  VAR_14 = FUNC_1 (VAR_5, VAR_8);
  VAR_14 = VAR_14 & 0xFF000000;


  VAR_17 = (VAR_16->output_offset
  + VAR_15
  + VAR_16->output_section->vma
  - (VAR_7->output_offset
     + VAR_7->output_section->vma
     + VAR_10 + VAR_11)
  - 8);

  VAR_14 = VAR_14 | ((VAR_17 >> 2) & 0x00FFFFFF);

  FUNC_3 (VAR_6, (bfd_vma) VAR_14, VAR_8 - VAR_7->vma);

  return VAR_2;
}
