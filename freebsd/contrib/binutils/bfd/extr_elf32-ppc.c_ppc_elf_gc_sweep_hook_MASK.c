
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
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_13__ ;


struct TYPE_23__ {struct elf_link_hash_entry* hgot; } ;
struct ppc_elf_link_hash_table {TYPE_5__ elf; } ;
struct ppc_elf_link_hash_entry {struct ppc_elf_dyn_relocs* dyn_relocs; } ;
struct ppc_elf_dyn_relocs {struct ppc_elf_dyn_relocs* next; TYPE_7__* sec; } ;
struct TYPE_24__ {int refcount; } ;
struct plt_entry {TYPE_6__ plt; } ;
struct TYPE_22__ {int refcount; } ;
struct TYPE_19__ {scalar_t__ link; } ;
struct TYPE_20__ {TYPE_1__ i; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_4__ got; TYPE_3__ root; } ;
struct bfd_link_info {int shared; } ;
typedef enum elf_ppc_reloc_type { ____Placeholder_elf_ppc_reloc_type } elf_ppc_reloc_type ;
typedef int bfd_vma ;
typedef int bfd_signed_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_25__ {int flags; int reloc_count; } ;
typedef TYPE_7__ asection ;
struct TYPE_27__ {int r_addend; int r_info; } ;
struct TYPE_26__ {unsigned long sh_info; } ;
struct TYPE_18__ {int * local_dynrel; } ;
struct TYPE_17__ {TYPE_8__ symtab_hdr; } ;
typedef TYPE_8__ Elf_Internal_Shdr ;
typedef TYPE_9__ Elf_Internal_Rela ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_2 (int *,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_3 (int *) ;
 TYPE_14__* FUNC_4 (TYPE_7__*) ;
 struct elf_link_hash_entry** FUNC_5 (int *) ;
 TYPE_13__* FUNC_6 (int *) ;
 struct plt_entry* FUNC_7 (struct elf_link_hash_entry*,TYPE_7__*,int ) ;
 struct ppc_elf_link_hash_table* FUNC_8 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd *VAR_4,
         struct bfd_link_info *VAR_5,
         asection *VAR_6,
         const Elf_Internal_Rela *VAR_7)
{
  struct ppc_elf_link_hash_table *VAR_8;
  Elf_Internal_Shdr *VAR_9;
  struct elf_link_hash_entry **VAR_10;
  bfd_signed_vma *VAR_11;
  const Elf_Internal_Rela *VAR_12, *VAR_13;
  asection *VAR_14;

  if ((VAR_6->flags & VAR_0) == 0)
    return VAR_1;

  FUNC_4 (VAR_6)->local_dynrel = ((void*)0);

  VAR_8 = FUNC_8 (VAR_5);
  VAR_9 = &FUNC_6 (VAR_4)->symtab_hdr;
  VAR_10 = FUNC_5 (VAR_4);
  VAR_11 = FUNC_3 (VAR_4);
  VAR_14 = FUNC_2 (VAR_4, ".got2");

  VAR_13 = VAR_7 + VAR_6->reloc_count;
  for (VAR_12 = VAR_7; VAR_12 < VAR_13; VAR_12++)
    {
      unsigned long VAR_15;
      enum elf_ppc_reloc_type VAR_16;
      struct elf_link_hash_entry *VAR_17 = ((void*)0);

      VAR_15 = FUNC_0 (VAR_12->r_info);
      if (VAR_15 >= VAR_9->sh_info)
 {
   struct ppc_elf_dyn_relocs **VAR_18, *VAR_19;
   struct ppc_elf_link_hash_entry *VAR_20;

   VAR_17 = VAR_10[VAR_15 - VAR_9->sh_info];
   while (VAR_17->root.type == VAR_2
   || VAR_17->root.type == VAR_3)
     VAR_17 = (struct elf_link_hash_entry *) VAR_17->root.u.i.link;
   VAR_20 = (struct ppc_elf_link_hash_entry *) VAR_17;

   for (VAR_18 = &VAR_20->dyn_relocs; (VAR_19 = *VAR_18) != ((void*)0); VAR_18 = &VAR_19->next)
     if (VAR_19->sec == VAR_6)
       {

  *VAR_18 = VAR_19->next;
  break;
       }
 }

      VAR_16 = FUNC_1 (VAR_12->r_info);
      switch (VAR_16)
 {
 case 148:
 case 145:
 case 146:
 case 147:
 case 152:
 case 149:
 case 150:
 case 151:
 case 144:
 case 141:
 case 142:
 case 143:
 case 156:
 case 153:
 case 154:
 case 155:
 case 160:
 case 157:
 case 158:
 case 159:
   if (VAR_17 != ((void*)0))
     {
       if (VAR_17->got.refcount > 0)
  VAR_17->got.refcount--;
     }
   else if (VAR_11 != ((void*)0))
     {
       if (VAR_11[VAR_15] > 0)
  VAR_11[VAR_15]--;
     }
   break;

 case 131:
 case 134:
 case 132:
 case 133:
 case 130:
   if (VAR_17 == ((void*)0) || VAR_17 == VAR_8->elf.hgot)
     break;


 case 161:
 case 162:
 case 166:
 case 163:
 case 164:
 case 165:
 case 169:
 case 167:
 case 168:
 case 128:
 case 129:
   if (VAR_5->shared)
     break;

 case 137:
 case 136:
 case 135:
 case 138:
 case 139:
 case 140:
   if (VAR_17 != ((void*)0))
     {
       bfd_vma VAR_21 = VAR_16 == 136 ? VAR_12->r_addend : 0;
       struct plt_entry *VAR_22 = FUNC_7 (VAR_17, VAR_14, VAR_21);
       if (VAR_22->plt.refcount > 0)
  VAR_22->plt.refcount -= 1;
     }
   break;

 default:
   break;
 }
    }
  return VAR_1;
}
