
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_24__ {int refcount; } ;
struct TYPE_23__ {int refcount; } ;
struct TYPE_19__ {scalar_t__ link; } ;
struct TYPE_20__ {TYPE_1__ i; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_6__ plt; TYPE_5__ got; TYPE_3__ root; } ;
struct elf64_x86_64_link_hash_entry {struct elf64_x86_64_dyn_relocs* dyn_relocs; } ;
struct elf64_x86_64_dyn_relocs {struct elf64_x86_64_dyn_relocs* next; TYPE_7__* sec; } ;
struct bfd_link_info {int shared; } ;
typedef int bfd_signed_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_25__ {int reloc_count; } ;
typedef TYPE_7__ asection ;
struct TYPE_27__ {int r_info; } ;
struct TYPE_26__ {unsigned long sh_info; } ;
struct TYPE_22__ {int refcount; } ;
struct TYPE_18__ {TYPE_4__ tls_ld_got; } ;
struct TYPE_17__ {int * local_dynrel; } ;
struct TYPE_16__ {TYPE_8__ symtab_hdr; } ;
typedef TYPE_8__ Elf_Internal_Shdr ;
typedef TYPE_9__ Elf_Internal_Rela ;


 unsigned long FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_13__* FUNC_2 (struct bfd_link_info*) ;
 unsigned int FUNC_3 (struct bfd_link_info*,unsigned int,int ) ;
 int* FUNC_4 (int *) ;
 TYPE_11__* FUNC_5 (TYPE_7__*) ;
 struct elf_link_hash_entry** FUNC_6 (int *) ;
 TYPE_10__* FUNC_7 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (bfd *VAR_3, struct bfd_link_info *VAR_4,
       asection *VAR_5, const Elf_Internal_Rela *VAR_6)
{
  Elf_Internal_Shdr *VAR_7;
  struct elf_link_hash_entry **VAR_8;
  bfd_signed_vma *VAR_9;
  const Elf_Internal_Rela *VAR_10, *VAR_11;

  FUNC_5 (VAR_5)->local_dynrel = ((void*)0);

  VAR_7 = &FUNC_7 (VAR_3)->symtab_hdr;
  VAR_8 = FUNC_6 (VAR_3);
  VAR_9 = FUNC_4 (VAR_3);

  VAR_11 = VAR_6 + VAR_5->reloc_count;
  for (VAR_10 = VAR_6; VAR_10 < VAR_11; VAR_10++)
    {
      unsigned long VAR_12;
      unsigned int VAR_13;
      struct elf_link_hash_entry *VAR_14 = ((void*)0);

      VAR_12 = FUNC_0 (VAR_10->r_info);
      if (VAR_12 >= VAR_7->sh_info)
 {
   struct elf64_x86_64_link_hash_entry *VAR_15;
   struct elf64_x86_64_dyn_relocs **VAR_16;
   struct elf64_x86_64_dyn_relocs *VAR_17;

   VAR_14 = VAR_8[VAR_12 - VAR_7->sh_info];
   while (VAR_14->root.type == VAR_1
   || VAR_14->root.type == VAR_2)
     VAR_14 = (struct elf_link_hash_entry *) VAR_14->root.u.i.link;
   VAR_15 = (struct elf64_x86_64_link_hash_entry *) VAR_14;

   for (VAR_16 = &VAR_15->dyn_relocs; (VAR_17 = *VAR_16) != ((void*)0); VAR_16 = &VAR_17->next)
     if (VAR_17->sec == VAR_5)
       {

  *VAR_16 = VAR_17->next;
  break;
       }
 }

      VAR_13 = FUNC_1 (VAR_10->r_info);
      VAR_13 = FUNC_3 (VAR_4, VAR_13, VAR_14 != ((void*)0));
      switch (VAR_13)
 {
 case 128:
   if (FUNC_2 (VAR_4)->tls_ld_got.refcount > 0)
     FUNC_2 (VAR_4)->tls_ld_got.refcount -= 1;
   break;

 case 129:
 case 141:
 case 130:
 case 137:
 case 143:
 case 140:
 case 142:
 case 139:
 case 138:
   if (VAR_14 != ((void*)0))
     {
       if (VAR_13 == 138 && VAR_14->plt.refcount > 0)
         VAR_14->plt.refcount -= 1;
       if (VAR_14->got.refcount > 0)
  VAR_14->got.refcount -= 1;
     }
   else if (VAR_9 != ((void*)0))
     {
       if (VAR_9[VAR_12] > 0)
  VAR_9[VAR_12] -= 1;
     }
   break;

 case 144:
 case 148:
 case 147:
 case 145:
 case 146:
 case 133:
 case 136:
 case 135:
 case 134:
   if (VAR_4->shared)
     break;


 case 132:
 case 131:
   if (VAR_14 != ((void*)0))
     {
       if (VAR_14->plt.refcount > 0)
  VAR_14->plt.refcount -= 1;
     }
   break;

 default:
   break;
 }
    }

  return VAR_0;
}
