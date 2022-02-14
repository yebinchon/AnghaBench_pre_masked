
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_7__ ;
typedef struct TYPE_45__ TYPE_6__ ;
typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_21__ ;
typedef struct TYPE_39__ TYPE_20__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_11__ ;


struct spu_stub_hash_entry {scalar_t__ off; } ;
struct spu_link_hash_table {TYPE_3__* stub; int stub_hash_table; } ;
struct TYPE_38__ {char* string; } ;
struct TYPE_37__ {TYPE_1__ root; } ;
struct elf_link_hash_entry {TYPE_11__ root; } ;
struct bfd_link_info {int emitrelocations; scalar_t__ relocatable; TYPE_4__* callbacks; } ;
struct TYPE_44__ {int name; } ;
typedef TYPE_5__ reloc_howto_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_45__ {int reloc_count; } ;
typedef TYPE_6__ asection ;
struct TYPE_47__ {int r_offset; scalar_t__ r_info; scalar_t__ r_addend; } ;
struct TYPE_46__ {unsigned long sh_info; int sh_size; int sh_entsize; } ;
struct TYPE_43__ {int (* warning ) (struct bfd_link_info*,char const*,char const*,int *,TYPE_6__*,int) ;int (* undefined_symbol ) (struct bfd_link_info*,char const*,int *,TYPE_6__*,int,int) ;int (* reloc_overflow ) (struct bfd_link_info*,TYPE_11__*,char const*,int ,scalar_t__,int *,TYPE_6__*,int) ;} ;
struct TYPE_42__ {scalar_t__ output_offset; TYPE_2__* output_section; } ;
struct TYPE_41__ {scalar_t__ vma; } ;
struct TYPE_40__ {TYPE_7__ rel_hdr; } ;
struct TYPE_39__ {TYPE_7__ symtab_hdr; } ;
typedef int Elf_Internal_Sym ;
typedef TYPE_7__ Elf_Internal_Shdr ;
typedef TYPE_8__ Elf_Internal_Rela ;


 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct bfd_link_info*,int *,TYPE_6__*,TYPE_8__*,unsigned long,TYPE_7__*,struct elf_link_hash_entry**,struct elf_link_hash_entry*,TYPE_6__*,scalar_t__,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_5__*,int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *,TYPE_6__**,TYPE_8__*) ;
 int FUNC_6 (char*,int *,int ,long,int ,char const*) ;
 int FUNC_7 (TYPE_5__*,int *,TYPE_6__*,int *,int,scalar_t__,scalar_t__) ;
 char* FUNC_8 (int *,TYPE_7__*,int *,TYPE_6__*) ;
 int FUNC_9 (int *,TYPE_6__*) ;
 scalar_t__ FUNC_10 (int *,char*,int,int) ;


 int VAR_4 ;



 scalar_t__ FUNC_11 (TYPE_6__*) ;
 TYPE_5__* VAR_5 ;
 TYPE_21__* FUNC_12 (TYPE_6__*) ;
 scalar_t__ FUNC_13 (int *) ;
 TYPE_20__* FUNC_14 (int *) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (char const*,TYPE_6__*,TYPE_6__*,struct spu_link_hash_table*,int) ;
 struct spu_link_hash_table* FUNC_19 (struct bfd_link_info*) ;
 char* FUNC_20 (TYPE_6__*,struct elf_link_hash_entry*,TYPE_8__*) ;
 int FUNC_21 (char*,int *,int ,long,int ,char const*) ;
 int FUNC_22 (struct bfd_link_info*,TYPE_11__*,char const*,int ,scalar_t__,int *,TYPE_6__*,int) ;
 int FUNC_23 (struct bfd_link_info*,char const*,int *,TYPE_6__*,int,int) ;
 int FUNC_24 (struct bfd_link_info*,char const*,char const*,int *,TYPE_6__*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_25 (bfd *VAR_6,
     struct bfd_link_info *VAR_7,
     bfd *VAR_8,
     asection *VAR_9,
     bfd_byte *VAR_10,
     Elf_Internal_Rela *VAR_11,
     Elf_Internal_Sym *VAR_12,
     asection **VAR_13)
{
  Elf_Internal_Shdr *VAR_14;
  struct elf_link_hash_entry **VAR_15;
  Elf_Internal_Rela *VAR_16, *VAR_17;
  struct spu_link_hash_table *VAR_18;
  bfd_boolean VAR_19 = VAR_3;
  bfd_boolean VAR_20 = VAR_0;

  VAR_18 = FUNC_19 (VAR_7);
  VAR_14 = &FUNC_14 (VAR_8)->symtab_hdr;
  VAR_15 = (struct elf_link_hash_entry **) (FUNC_13 (VAR_8));

  VAR_16 = VAR_11;
  VAR_17 = VAR_11 + VAR_9->reloc_count;
  for (; VAR_16 < VAR_17; VAR_16++)
    {
      int VAR_21;
      reloc_howto_type *VAR_22;
      unsigned long VAR_23;
      Elf_Internal_Sym *VAR_24;
      asection *VAR_25;
      struct elf_link_hash_entry *VAR_26;
      const char *VAR_27;
      bfd_vma VAR_28;
      bfd_vma VAR_29;
      bfd_reloc_status_type VAR_30;
      bfd_boolean VAR_31;
      bfd_boolean VAR_32;
      bfd_boolean VAR_33;

      VAR_23 = FUNC_0 (VAR_16->r_info);
      VAR_21 = FUNC_1 (VAR_16->r_info);
      if (VAR_21 == VAR_1 || VAR_21 == VAR_2)
 {
   VAR_20 = VAR_3;
   continue;
 }

      VAR_22 = VAR_5 + VAR_21;
      VAR_31 = VAR_0;
      VAR_32 = VAR_0;
      VAR_26 = ((void*)0);
      VAR_24 = ((void*)0);
      VAR_25 = ((void*)0);
      if (VAR_23 < VAR_14->sh_info)
 {
   VAR_24 = VAR_12 + VAR_23;
   VAR_25 = VAR_13[VAR_23];
   VAR_27 = FUNC_8 (VAR_8, VAR_14, VAR_24, VAR_25);
   VAR_28 = FUNC_5 (VAR_6, VAR_24, &VAR_25, VAR_16);
 }
      else
 {
   FUNC_2 (VAR_7, VAR_8, VAR_9, VAR_16,
       VAR_23, VAR_14, VAR_15,
       VAR_26, VAR_25, VAR_28,
       VAR_31, VAR_32);
   VAR_27 = VAR_26->root.root.string;
 }

      if (VAR_25 != ((void*)0) && FUNC_11 (VAR_25))
 {



   FUNC_4 (VAR_22, VAR_8, VAR_10 + VAR_16->r_offset);
   VAR_16->r_info = 0;
   VAR_16->r_addend = 0;
   continue;
 }

      if (VAR_7->relocatable)
 continue;

      if (VAR_31)
 {
   FUNC_6)
     (FUNC_3("%B(%s+0x%lx): unresolvable %s relocation against symbol `%s'"),
      VAR_8,
      FUNC_9 (VAR_8, VAR_9),
      (long) VAR_16->r_offset,
      VAR_22->name,
      VAR_27);
   VAR_19 = VAR_0;
 }



      VAR_29 = VAR_16->r_addend;
      VAR_33 = (FUNC_16 (VAR_10 + VAR_16->r_offset)
  || FUNC_17 (VAR_10 + VAR_16->r_offset));
      if (FUNC_18 (VAR_27, VAR_25, VAR_9, VAR_18, VAR_33))
 {
   char *VAR_34;
   struct spu_stub_hash_entry *VAR_35;

   VAR_34 = FUNC_20 (VAR_25, VAR_26, VAR_16);
   if (VAR_34 == ((void*)0))
     return VAR_0;

   VAR_35 = (struct spu_stub_hash_entry *)
     FUNC_10 (&VAR_18->stub_hash_table, VAR_34, VAR_0, VAR_0);
   if (VAR_35 != ((void*)0))
     {
       VAR_28 = (VAR_18->stub->output_section->vma
       + VAR_18->stub->output_offset
       + VAR_35->off);
       VAR_29 = 0;
     }
   FUNC_15 (VAR_34);
 }

      VAR_30 = FUNC_7 (VAR_22,
        VAR_8,
        VAR_9,
        VAR_10,
        VAR_16->r_offset, VAR_28, VAR_29);

      if (VAR_30 != VAR_4)
 {
   const char *VAR_36 = (const char *) 0;

   switch (VAR_30)
     {
     case 129:
       if (!((*VAR_7->callbacks->reloc_overflow)
      (VAR_7, (VAR_26 ? &VAR_26->root : ((void*)0)), VAR_27, VAR_22->name,
       (bfd_vma) 0, VAR_8, VAR_9, VAR_16->r_offset)))
  return VAR_0;
       break;

     case 128:
       if (!((*VAR_7->callbacks->undefined_symbol)
      (VAR_7, VAR_27, VAR_8, VAR_9,
       VAR_16->r_offset, VAR_3)))
  return VAR_0;
       break;

     case 130:
       VAR_36 = FUNC_3("internal error: out of range error");
       goto common_error;

     case 131:
       VAR_36 = FUNC_3("internal error: unsupported relocation error");
       goto common_error;

     case 132:
       VAR_36 = FUNC_3("internal error: dangerous error");
       goto common_error;

     default:
       VAR_36 = FUNC_3("internal error: unknown error");


     common_error:
       if (!((*VAR_7->callbacks->warning)
      (VAR_7, VAR_36, VAR_27, VAR_8, VAR_9,
       VAR_16->r_offset)))
  return VAR_0;
       break;
     }
 }
    }

  if (VAR_19
      && VAR_20
      && !VAR_7->relocatable
      && !VAR_7->emitrelocations)
    {
      Elf_Internal_Rela *VAR_37;
      Elf_Internal_Shdr *VAR_38;

      VAR_37 = VAR_16 = VAR_11;
      VAR_17 = VAR_11 + VAR_9->reloc_count;
      for (; VAR_16 < VAR_17; VAR_16++)
 {
   int VAR_39;

   VAR_39 = FUNC_1 (VAR_16->r_info);
   if (VAR_39 == VAR_1 || VAR_39 == VAR_2)
     *VAR_37++ = *VAR_16;
 }
      VAR_9->reloc_count = VAR_37 - VAR_11;

      VAR_38 = &FUNC_12 (VAR_9)->rel_hdr;
      VAR_38->sh_size = VAR_9->reloc_count * VAR_38->sh_entsize;
      VAR_19 = 2;
    }

  return VAR_19;
}
