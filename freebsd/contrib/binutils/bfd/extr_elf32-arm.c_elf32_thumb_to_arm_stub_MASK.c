
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int value; } ;
struct TYPE_10__ {TYPE_1__ def; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_3__ root; } ;
struct elf32_arm_link_hash_table {int thumb_glue_size; int * bfd_of_glue_owner; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_vma ;
typedef int bfd_signed_vma ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_13__ {int output_offset; int vma; TYPE_4__* output_section; int * contents; int * owner; } ;
typedef TYPE_5__ asection ;
struct TYPE_12__ {int vma; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,int *,char const*) ;
 unsigned long FUNC_4 (int *,int *) ;
 TYPE_5__* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,int *) ;
 struct elf32_arm_link_hash_table* FUNC_7 (struct bfd_link_info*) ;
 struct elf_link_hash_entry* FUNC_8 (struct bfd_link_info*,char const*,char**) ;
 scalar_t__ FUNC_9 (unsigned long,long) ;
 int FUNC_10 (struct elf32_arm_link_hash_table*,int *,int,int *) ;
 int FUNC_11 (struct elf32_arm_link_hash_table*,int *,int,int *) ;
 int FUNC_12 (int ,int *,int *,char const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_13 (struct bfd_link_info * VAR_6,
    const char * VAR_7,
    bfd * VAR_8,
    bfd * VAR_9,
    asection * VAR_10,
    bfd_byte * VAR_11,
    asection * VAR_12,
    bfd_vma VAR_13,
    bfd_signed_vma VAR_14,
    bfd_vma VAR_15,
    char **VAR_16)
{
  asection * VAR_17 = 0;
  bfd_vma VAR_18;
  unsigned long int VAR_19;
  long int VAR_20;
  struct elf_link_hash_entry * VAR_21;
  struct elf32_arm_link_hash_table * VAR_22;

  VAR_21 = FUNC_8 (VAR_6, VAR_7, VAR_16);
  if (VAR_21 == ((void*)0))
    return VAR_0;

  VAR_22 = FUNC_7 (VAR_6);

  FUNC_0 (VAR_22 != ((void*)0));
  FUNC_0 (VAR_22->bfd_of_glue_owner != ((void*)0));

  VAR_18 = VAR_21->root.u.def.value;

  VAR_17 = FUNC_5 (VAR_22->bfd_of_glue_owner,
          VAR_1);

  FUNC_0 (VAR_17 != ((void*)0));
  FUNC_0 (VAR_17->contents != ((void*)0));
  FUNC_0 (VAR_17->output_section != ((void*)0));

  if ((VAR_18 & 0x01) == 0x01)
    {
      if (VAR_12 != ((void*)0)
   && VAR_12->owner != ((void*)0)
   && !FUNC_1 (VAR_12->owner))
 {
   FUNC_3)
     (FUNC_2("%B(%s): warning: interworking not enabled.\n"
        "  first occurrence: %B: thumb call to arm"),
      VAR_12->owner, VAR_8, VAR_7);

   return VAR_0;
 }

      --VAR_18;
      VAR_21->root.u.def.value = VAR_18;

      FUNC_11 (VAR_22, VAR_9, (bfd_vma) VAR_3,
        VAR_17->contents + VAR_18);

      FUNC_11 (VAR_22, VAR_9, (bfd_vma) VAR_4,
        VAR_17->contents + VAR_18 + 2);

      VAR_20 =

 ((bfd_signed_vma) VAR_15)
 - ((bfd_signed_vma)


    (VAR_17->output_offset

     + VAR_18

     + VAR_17->output_section->vma)

    + 4

    + 8);

      FUNC_10 (VAR_22, VAR_9,
      (bfd_vma) VAR_5 | ((VAR_20 >> 2) & 0x00FFFFFF),
      VAR_17->contents + VAR_18 + 4);
    }

  FUNC_0 (VAR_18 <= VAR_22->thumb_glue_size);


  VAR_20 =

    (VAR_17->output_section->vma + VAR_17->output_offset + VAR_18)

    - (VAR_10->output_section->vma + VAR_10->output_offset
       + VAR_13)

    - VAR_14

    - 8;

  VAR_19 = FUNC_4 (VAR_8, VAR_11
      - VAR_10->vma);

  FUNC_6 (VAR_9,
       (bfd_vma) FUNC_9 (VAR_19, VAR_20),
       VAR_11 - VAR_10->vma);

  return VAR_2;
}
