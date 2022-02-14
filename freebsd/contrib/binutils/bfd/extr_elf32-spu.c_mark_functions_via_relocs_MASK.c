
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_17__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_29__ {struct elf_link_hash_entry* sym; } ;
struct function_info {TYPE_6__ u; } ;
struct TYPE_26__ {int value; } ;
struct TYPE_27__ {TYPE_3__ def; } ;
struct TYPE_28__ {TYPE_4__ u; } ;
struct elf_link_hash_entry {int is_tail; TYPE_7__* fun; int st_shndx; int st_value; TYPE_5__ root; } ;
struct call_info {int is_tail; TYPE_7__* fun; int st_shndx; int st_value; TYPE_5__ root; } ;
struct bfd_link_info {TYPE_2__* callbacks; int keep_memory; } ;
typedef enum elf_spu_reloc_type { ____Placeholder_elf_spu_reloc_type } elf_spu_reloc_type ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_31__ {scalar_t__ owner; int reloc_count; int flags; TYPE_1__* output_section; } ;
typedef TYPE_8__ asection ;
struct TYPE_32__ {int contents; } ;
struct TYPE_30__ {int is_func; scalar_t__ stack; struct function_info* start; } ;
struct TYPE_25__ {int (* einfo ) (int ,scalar_t__,TYPE_8__*,int ,scalar_t__,TYPE_8__*) ;} ;
struct TYPE_24__ {scalar_t__ owner; } ;
struct TYPE_23__ {TYPE_9__ symtab_hdr; } ;
struct TYPE_22__ {scalar_t__ r_addend; int r_offset; int r_info; } ;
typedef struct elf_link_hash_entry Elf_Internal_Sym ;
typedef TYPE_9__ Elf_Internal_Shdr ;
typedef TYPE_10__ Elf_Internal_Rela ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 TYPE_10__* FUNC_3 (scalar_t__,TYPE_8__*,int *,int *,int ) ;
 int FUNC_4 (scalar_t__,TYPE_8__*) ;
 int FUNC_5 (scalar_t__,TYPE_8__*,unsigned char*,int ,int) ;
 struct elf_link_hash_entry* FUNC_6 (int) ;
 struct elf_link_hash_entry* FUNC_7 (int) ;
 TYPE_17__* FUNC_8 (scalar_t__) ;
 void* FUNC_9 (TYPE_8__*,int ,struct bfd_link_info*) ;
 int FUNC_10 (struct elf_link_hash_entry*) ;
 int FUNC_11 (struct elf_link_hash_entry**,struct elf_link_hash_entry**,TYPE_8__**,void*,unsigned int,scalar_t__) ;
 int FUNC_12 (struct function_info*,struct elf_link_hash_entry*) ;
 int FUNC_13 (unsigned char*) ;
 struct function_info* FUNC_14 (TYPE_8__*,struct elf_link_hash_entry*,int,int) ;
 int FUNC_15 (int ,scalar_t__,TYPE_8__*,int ,scalar_t__,TYPE_8__*) ;

__attribute__((used)) static bfd_boolean
FUNC_16 (asection *VAR_7,
      struct bfd_link_info *VAR_8,
      int VAR_9)
{
  Elf_Internal_Rela *VAR_10, *VAR_11, *VAR_12;
  Elf_Internal_Shdr *VAR_13 = &FUNC_8 (VAR_7->owner)->symtab_hdr;
  Elf_Internal_Sym *VAR_14;
  void *VAR_15;
  static bfd_boolean VAR_16;

  VAR_10 = FUNC_3 (VAR_7->owner, VAR_7, ((void*)0), ((void*)0),
            VAR_8->keep_memory);
  if (VAR_10 == ((void*)0))
    return VAR_0;

  VAR_13 = &FUNC_8 (VAR_7->owner)->symtab_hdr;
  VAR_15 = &VAR_13->contents;
  VAR_14 = *(Elf_Internal_Sym **) VAR_15;
  VAR_12 = VAR_10;
  VAR_11 = VAR_12 + VAR_7->reloc_count;
  for (; VAR_12 < VAR_11; VAR_12++)
    {
      enum elf_spu_reloc_type VAR_17;
      unsigned int VAR_18;
      asection *VAR_19;
      Elf_Internal_Sym *VAR_20;
      struct elf_link_hash_entry *VAR_21;
      bfd_vma VAR_22;
      unsigned char VAR_23[4];
      bfd_boolean VAR_24;
      struct function_info *VAR_25;
      struct call_info *VAR_26;

      VAR_17 = FUNC_1 (VAR_12->r_info);
      if (VAR_17 != VAR_2
   && VAR_17 != VAR_1)
 continue;

      VAR_18 = FUNC_0 (VAR_12->r_info);
      if (!FUNC_11 (&VAR_21, &VAR_20, &VAR_19, VAR_15, VAR_18, VAR_7->owner))
 return VAR_0;

      if (VAR_19 == ((void*)0)
   || VAR_19->output_section == ((void*)0)
   || VAR_19->output_section->owner != VAR_7->output_section->owner)
 continue;

      if (!FUNC_5 (VAR_7->owner, VAR_7, VAR_23,
         VAR_12->r_offset, 4))
 return VAR_0;
      if (!FUNC_13 (VAR_23))
 continue;

      if ((VAR_19->flags & (VAR_3 | VAR_5 | VAR_4))
   != (VAR_3 | VAR_5 | VAR_4))
 {
   if (!VAR_9)
     VAR_16 = VAR_6;
   if (!VAR_9 || !VAR_16)
     VAR_8->callbacks->einfo (FUNC_2("%B(%A+0x%v): call to non-code section"
          " %B(%A), stack analysis incomplete\n"),
        VAR_7->owner, VAR_7, VAR_12->r_offset,
        VAR_19->owner, VAR_19);
   continue;
 }

      VAR_24 = (VAR_23[0] & 0xfd) == 0x31;

      if (VAR_21)
 VAR_22 = VAR_21->root.u.def.value;
      else
 VAR_22 = VAR_20->st_value;
      VAR_22 += VAR_12->r_addend;

      if (!VAR_9)
 {
   struct function_info *VAR_27;

   if (VAR_12->r_addend != 0)
     {
       Elf_Internal_Sym *VAR_28 = FUNC_7 (sizeof (*VAR_28));
       if (VAR_28 == ((void*)0))
  return VAR_0;
       VAR_28->st_value = VAR_22;
       VAR_28->st_shndx
  = FUNC_4 (VAR_19->owner, VAR_19);
       VAR_20 = VAR_28;
     }
   if (VAR_20)
     VAR_27 = FUNC_14 (VAR_19, VAR_20, VAR_0, VAR_24);
   else
     VAR_27 = FUNC_14 (VAR_19, VAR_21, VAR_6, VAR_24);
   if (VAR_27 == ((void*)0))
     return VAR_0;
   if (VAR_12->r_addend != 0
       && VAR_27->u.sym != VAR_20)
     FUNC_10 (VAR_20);
   continue;
 }

      VAR_25 = FUNC_9 (VAR_7, VAR_12->r_offset, VAR_8);
      if (VAR_25 == ((void*)0))
 return VAR_0;
      VAR_26 = FUNC_6 (sizeof *VAR_26);
      if (VAR_26 == ((void*)0))
 return VAR_0;

      VAR_26->fun = FUNC_9 (VAR_19, VAR_22, VAR_8);
      if (VAR_26->fun == ((void*)0))
 return VAR_0;
      VAR_26->is_tail = !VAR_24;
      if (!FUNC_12 (VAR_25, VAR_26))
 FUNC_10 (VAR_26);
      else if (!VAR_24
        && !VAR_26->fun->is_func
        && VAR_26->fun->stack == 0)
 {





   if (VAR_26->fun->start != ((void*)0)
       || VAR_7->owner != VAR_19->owner)
     {
       VAR_26->fun->start = ((void*)0);
       VAR_26->fun->is_func = VAR_6;
     }
   else
     VAR_26->fun->start = VAR_25;
 }
    }

  return VAR_6;
}
