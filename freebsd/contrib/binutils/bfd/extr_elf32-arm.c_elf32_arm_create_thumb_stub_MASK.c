
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int value; } ;
struct TYPE_10__ {TYPE_1__ def; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_3__ root; } ;
struct TYPE_12__ {scalar_t__ is_relocatable_executable; } ;
struct elf32_arm_link_hash_table {int arm_glue_size; scalar_t__ use_blx; scalar_t__ pic_veneer; TYPE_4__ root; int * bfd_of_glue_owner; } ;
struct bfd_link_info {scalar_t__ shared; } ;
typedef int bfd_vma ;
typedef int bfd ;
struct TYPE_14__ {int output_offset; scalar_t__ contents; TYPE_5__* output_section; int * owner; } ;
typedef TYPE_6__ asection ;
struct TYPE_13__ {int vma; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,int *,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *,int,scalar_t__) ;
 struct elf32_arm_link_hash_table* FUNC_5 (struct bfd_link_info*) ;
 struct elf_link_hash_entry* FUNC_6 (struct bfd_link_info*,char const*,char**) ;
 int FUNC_7 (struct elf32_arm_link_hash_table*,int *,int,scalar_t__) ;
 int FUNC_8 (int ,int *,int *,char const*) ;

__attribute__((used)) static struct elf_link_hash_entry *
FUNC_9 (struct bfd_link_info * VAR_8,
        const char * VAR_9,
        bfd * VAR_10,
        bfd * VAR_11,
        asection * VAR_12,
        bfd_vma VAR_13,
        asection *VAR_14,
        char **VAR_15)
{
  bfd_vma VAR_16;
  long int VAR_17;
  struct elf_link_hash_entry * VAR_18;
  struct elf32_arm_link_hash_table * VAR_19;

  VAR_18 = FUNC_6 (VAR_8, VAR_9, VAR_15);
  if (VAR_18 == ((void*)0))
    return ((void*)0);

  VAR_19 = FUNC_5 (VAR_8);

  FUNC_0 (VAR_19 != ((void*)0));
  FUNC_0 (VAR_19->bfd_of_glue_owner != ((void*)0));

  VAR_16 = VAR_18->root.u.def.value;

  if ((VAR_16 & 0x01) == 0x01)
    {
      if (VAR_12 != ((void*)0)
   && VAR_12->owner != ((void*)0)
   && !FUNC_1 (VAR_12->owner))
 {
   FUNC_3)
     (FUNC_2("%B(%s): warning: interworking not enabled.\n"
        "  first occurrence: %B: arm call to thumb"),
      VAR_12->owner, VAR_10, VAR_9);
 }

      --VAR_16;
      VAR_18->root.u.def.value = VAR_16;

      if (VAR_8->shared || VAR_19->root.is_relocatable_executable
   || VAR_19->pic_veneer)
 {




   FUNC_7 (VAR_19, VAR_11, (bfd_vma) VAR_1,
   VAR_14->contents + VAR_16);
   FUNC_7 (VAR_19, VAR_11, (bfd_vma) VAR_4,
   VAR_14->contents + VAR_16 + 4);
   FUNC_7 (VAR_19, VAR_11, (bfd_vma) VAR_7,
   VAR_14->contents + VAR_16 + 8);


   VAR_17 = (VAR_13 - (VAR_14->output_offset
          + VAR_14->output_section->vma
          + VAR_16 + 12))
         | 1;
   FUNC_4 (VAR_11, VAR_17,
        VAR_14->contents + VAR_16 + 12);
 }
      else if (VAR_19->use_blx)
 {
   FUNC_7 (VAR_19, VAR_11, (bfd_vma) VAR_2,
   VAR_14->contents + VAR_16);


   FUNC_4 (VAR_11, VAR_13 | VAR_5,
        VAR_14->contents + VAR_16 + 4);
 }
      else
 {
   FUNC_7 (VAR_19, VAR_11, (bfd_vma) VAR_0,
   VAR_14->contents + VAR_16);

   FUNC_7 (VAR_19, VAR_11, (bfd_vma) VAR_3,
   VAR_14->contents + VAR_16 + 4);


   FUNC_4 (VAR_11, VAR_13 | VAR_6,
        VAR_14->contents + VAR_16 + 8);
 }
    }

  FUNC_0 (VAR_16 <= VAR_19->arm_glue_size);

  return VAR_18;
}
