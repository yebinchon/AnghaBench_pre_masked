
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


struct TYPE_22__ {int refcount; } ;
struct TYPE_20__ {int refcount; } ;
struct TYPE_17__ {scalar_t__ link; } ;
struct TYPE_18__ {TYPE_1__ i; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_6__ plt; TYPE_4__ got; TYPE_3__ root; } ;
struct elf32_arm_relocs_copied {int count; int pc_count; struct elf32_arm_relocs_copied* next; TYPE_7__* section; } ;
struct TYPE_21__ {int refcount; } ;
struct elf32_arm_link_hash_table {TYPE_5__ tls_ldm_got; } ;
struct elf32_arm_link_hash_entry {struct elf32_arm_relocs_copied* relocs_copied; int plt_thumb_refcount; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_signed_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_23__ {int reloc_count; } ;
typedef TYPE_7__ asection ;
struct TYPE_25__ {int r_info; } ;
struct TYPE_24__ {unsigned long sh_info; } ;
struct TYPE_16__ {int * local_dynrel; } ;
struct TYPE_15__ {TYPE_8__ symtab_hdr; } ;
typedef TYPE_8__ Elf_Internal_Shdr ;
typedef TYPE_9__ Elf_Internal_Rela ;


 unsigned long FUNC_0 (int ) ;
 int const FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct elf32_arm_link_hash_table*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct elf32_arm_link_hash_table* FUNC_3 (struct bfd_link_info*) ;
 int* FUNC_4 (int *) ;
 TYPE_11__* FUNC_5 (TYPE_7__*) ;
 struct elf_link_hash_entry** FUNC_6 (int *) ;
 TYPE_10__* FUNC_7 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (bfd * VAR_3,
    struct bfd_link_info * VAR_4,
    asection * VAR_5,
    const Elf_Internal_Rela * VAR_6)
{
  Elf_Internal_Shdr *VAR_7;
  struct elf_link_hash_entry **VAR_8;
  bfd_signed_vma *VAR_9;
  const Elf_Internal_Rela *VAR_10, *VAR_11;
  struct elf32_arm_link_hash_table * VAR_12;

  VAR_12 = FUNC_3 (VAR_4);

  FUNC_5 (VAR_5)->local_dynrel = ((void*)0);

  VAR_7 = &FUNC_7 (VAR_3)->symtab_hdr;
  VAR_8 = FUNC_6 (VAR_3);
  VAR_9 = FUNC_4 (VAR_3);

  VAR_11 = VAR_6 + VAR_5->reloc_count;
  for (VAR_10 = VAR_6; VAR_10 < VAR_11; VAR_10++)
    {
      unsigned long VAR_13;
      struct elf_link_hash_entry *VAR_14 = ((void*)0);
      int VAR_15;

      VAR_13 = FUNC_0 (VAR_10->r_info);
      if (VAR_13 >= VAR_7->sh_info)
 {
   VAR_14 = VAR_8[VAR_13 - VAR_7->sh_info];
   while (VAR_14->root.type == VAR_1
   || VAR_14->root.type == VAR_2)
     VAR_14 = (struct elf_link_hash_entry *) VAR_14->root.u.i.link;
 }

      VAR_15 = FUNC_1 (VAR_10->r_info);
      VAR_15 = FUNC_2 (VAR_12, VAR_15);
      switch (VAR_15)
 {
 case 147:
 case 146:
 case 130:
 case 129:
   if (VAR_14 != ((void*)0))
     {
       if (VAR_14->got.refcount > 0)
  VAR_14->got.refcount -= 1;
     }
   else if (VAR_9 != ((void*)0))
     {
       if (VAR_9[VAR_13] > 0)
  VAR_9[VAR_13] -= 1;
     }
   break;

 case 128:
   FUNC_3 (VAR_4)->tls_ldm_got.refcount -= 1;
   break;

 case 150:
 case 149:
 case 137:
 case 136:
 case 140:
 case 139:
 case 148:
 case 145:
 case 138:
 case 135:
 case 142:
 case 144:
 case 141:
 case 143:
 case 132:
 case 134:
 case 131:
 case 133:


   if (VAR_14 != ((void*)0))
     {
       struct elf32_arm_link_hash_entry *VAR_16;
       struct elf32_arm_relocs_copied **VAR_17;
       struct elf32_arm_relocs_copied *VAR_18;

       VAR_16 = (struct elf32_arm_link_hash_entry *) VAR_14;

       if (VAR_14->plt.refcount > 0)
  {
    VAR_14->plt.refcount -= 1;
    if (FUNC_1 (VAR_10->r_info) == 135)
      VAR_16->plt_thumb_refcount--;
  }

       if (VAR_15 == 150
    || VAR_15 == 137
                  || VAR_15 == 149
                  || VAR_15 == 136)
  {
    for (VAR_17 = &VAR_16->relocs_copied; (VAR_18 = *VAR_17) != ((void*)0);
         VAR_17 = &VAR_18->next)
    if (VAR_18->section == VAR_5)
      {
        VAR_18->count -= 1;
        if (FUNC_1 (VAR_10->r_info) == 137
                          || FUNC_1 (VAR_10->r_info) == 136)
   VAR_18->pc_count -= 1;
        if (VAR_18->count == 0)
   *VAR_17 = VAR_18->next;
        break;
      }
  }
     }
   break;

 default:
   break;
 }
    }

  return VAR_0;
}
