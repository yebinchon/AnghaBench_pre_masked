
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ppc_link_hash_entry {struct ppc_dyn_relocs* dyn_relocs; } ;
struct ppc_dyn_relocs {int pc_count; scalar_t__ count; struct ppc_dyn_relocs* next; TYPE_2__* sec; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct elf_link_hash_entry {int def_regular; TYPE_1__ root; } ;
struct bfd_link_info {scalar_t__ shared; int symbolic; } ;
typedef enum elf_ppc64_reloc_type { ____Placeholder_elf_ppc64_reloc_type } elf_ppc64_reloc_type ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_11__ {int * owner; } ;
typedef TYPE_2__ asection ;
struct TYPE_12__ {int local_dynrel; } ;
typedef int Elf_Internal_Sym ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 TYPE_5__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct elf_link_hash_entry**,int **,TYPE_2__**,int *,int **,unsigned long,int *) ;
 scalar_t__ FUNC_7 (struct bfd_link_info*,int) ;
 int FUNC_8 (int ,int *,TYPE_2__*) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd_vma VAR_5,
    asection *VAR_6,
    struct bfd_link_info *VAR_7,
    Elf_Internal_Sym **VAR_8,
    struct elf_link_hash_entry *VAR_9,
    asection *VAR_10)
{
  enum elf_ppc64_reloc_type VAR_11;
  struct ppc_dyn_relocs *VAR_12;
  struct ppc_dyn_relocs **VAR_13;



  VAR_11 = FUNC_1 (VAR_5);
  switch (VAR_11)
    {
    default:
      return VAR_2;

    case 141:
    case 133:
    case 138:
    case 139:
    case 140:
    case 132:
    case 137:
    case 136:
    case 135:
    case 134:
      if (!VAR_7->shared)
 return VAR_2;

    case 131:
    case 147:
    case 146:
    case 148:
    case 145:
    case 144:
    case 143:
    case 163:
    case 162:
    case 161:
    case 160:
    case 159:
    case 158:
    case 157:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
    case 151:
    case 150:
    case 149:
    case 130:
    case 129:
    case 128:
    case 142:
      break;
    }

  if (VAR_8 != ((void*)0))
    {
      unsigned long VAR_14;
      Elf_Internal_Sym *VAR_15;
      bfd *VAR_16 = VAR_6->owner;

      VAR_14 = FUNC_0 (VAR_5);
      if (!FUNC_6 (&VAR_9, &VAR_15, &VAR_10, ((void*)0), VAR_8, VAR_14, VAR_16))
 return VAR_1;
    }

  if ((VAR_7->shared
       && (FUNC_7 (VAR_7, VAR_11)
    || (VAR_9 != ((void*)0)
        && (!VAR_7->symbolic
     || VAR_9->root.type == VAR_4
     || !VAR_9->def_regular))))
      || (VAR_0
   && !VAR_7->shared
   && VAR_9 != ((void*)0)
   && (VAR_9->root.type == VAR_4
       || !VAR_9->def_regular)))
    ;
  else
    return VAR_2;

  if (VAR_9 != ((void*)0))
    VAR_13 = &((struct ppc_link_hash_entry *) VAR_9)->dyn_relocs;
  else
    {
      if (VAR_10 != ((void*)0))
 {
   void *VAR_17 = &FUNC_5 (VAR_10)->local_dynrel;
   VAR_13 = (struct ppc_dyn_relocs **) VAR_17;
 }
      else
 {
   void *VAR_18 = &FUNC_5 (VAR_6)->local_dynrel;
   VAR_13 = (struct ppc_dyn_relocs **) VAR_18;
 }




      if (*VAR_13 == ((void*)0))
 return VAR_2;
    }

  while ((VAR_12 = *VAR_13) != ((void*)0))
    {
      if (VAR_12->sec == VAR_6)
 {
   if (!FUNC_7 (VAR_7, VAR_11))
     VAR_12->pc_count -= 1;
   VAR_12->count -= 1;
   if (VAR_12->count == 0)
     *VAR_13 = VAR_12->next;
   return VAR_2;
 }
      VAR_13 = &VAR_12->next;
    }

  FUNC_3) (FUNC_2("dynreloc miscount for %B, section %A"),
      VAR_6->owner, VAR_6);
  FUNC_4 (VAR_3);
  return VAR_1;
}
