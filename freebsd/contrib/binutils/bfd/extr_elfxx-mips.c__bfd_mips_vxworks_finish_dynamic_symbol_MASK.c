
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_53__ TYPE_9__ ;
typedef struct TYPE_52__ TYPE_8__ ;
typedef struct TYPE_51__ TYPE_7__ ;
typedef struct TYPE_50__ TYPE_6__ ;
typedef struct TYPE_49__ TYPE_5__ ;
typedef struct TYPE_48__ TYPE_4__ ;
typedef struct TYPE_47__ TYPE_3__ ;
typedef struct TYPE_46__ TYPE_2__ ;
typedef struct TYPE_45__ TYPE_27__ ;
typedef struct TYPE_44__ TYPE_23__ ;
typedef struct TYPE_43__ TYPE_22__ ;
typedef struct TYPE_42__ TYPE_21__ ;
typedef struct TYPE_41__ TYPE_20__ ;
typedef struct TYPE_40__ TYPE_1__ ;
typedef struct TYPE_39__ TYPE_19__ ;
typedef struct TYPE_38__ TYPE_18__ ;
typedef struct TYPE_37__ TYPE_17__ ;
typedef struct TYPE_36__ TYPE_16__ ;
typedef struct TYPE_35__ TYPE_15__ ;
typedef struct TYPE_34__ TYPE_14__ ;
typedef struct TYPE_33__ TYPE_13__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


struct mips_got_info {TYPE_7__* global_gotsym; } ;
struct TYPE_48__ {TYPE_3__* hgot; TYPE_2__* hplt; } ;
struct mips_elf_link_hash_table {scalar_t__ plt_header_size; scalar_t__ plt_entry_size; TYPE_14__* srelbss; TYPE_5__* srelplt; TYPE_4__ root; TYPE_1__* srelplt2; TYPE_18__* splt; TYPE_17__* sgotplt; } ;
struct TYPE_31__ {int value; TYPE_10__* section; } ;
struct TYPE_32__ {TYPE_11__ def; } ;
struct TYPE_33__ {TYPE_12__ u; } ;
struct TYPE_39__ {scalar_t__ offset; } ;
struct elf_link_hash_entry {int dynindx; TYPE_13__ root; scalar_t__ needs_copy; scalar_t__ forced_local; int def_regular; TYPE_19__ plt; } ;
struct bfd_link_info {scalar_t__ shared; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_41__ {scalar_t__ contents; scalar_t__ output_offset; TYPE_8__* output_section; int reloc_count; } ;
typedef TYPE_20__ asection ;
struct TYPE_53__ {int vma; } ;
struct TYPE_52__ {scalar_t__ vma; } ;
struct TYPE_51__ {scalar_t__ dynindx; } ;
struct TYPE_50__ {struct mips_got_info* got_info; } ;
struct TYPE_49__ {int * contents; } ;
struct TYPE_47__ {int indx; } ;
struct TYPE_46__ {int indx; } ;
struct TYPE_45__ {int * dynobj; } ;
struct TYPE_44__ {TYPE_6__ u; } ;
struct TYPE_43__ {int r_offset; scalar_t__ r_addend; void* r_info; } ;
struct TYPE_42__ {int st_value; scalar_t__ st_other; int st_shndx; } ;
struct TYPE_40__ {int * contents; } ;
struct TYPE_38__ {scalar_t__ size; scalar_t__ output_offset; int * contents; TYPE_15__* output_section; } ;
struct TYPE_37__ {scalar_t__ output_offset; int * contents; TYPE_16__* output_section; } ;
struct TYPE_36__ {scalar_t__ vma; } ;
struct TYPE_35__ {scalar_t__ vma; } ;
struct TYPE_34__ {int reloc_count; int * contents; } ;
struct TYPE_30__ {int output_offset; TYPE_9__* output_section; } ;
typedef TYPE_21__ Elf_Internal_Sym ;
typedef TYPE_22__ Elf_Internal_Rela ;
typedef int Elf32_External_Rela ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *,TYPE_22__*,int *) ;
 int FUNC_4 (int *,scalar_t__ const,int *) ;
 TYPE_27__* FUNC_5 (struct bfd_link_info*) ;
 scalar_t__ FUNC_6 (int *,int *,struct elf_link_hash_entry*,int ,struct bfd_link_info*) ;
 TYPE_20__* FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 struct mips_elf_link_hash_table* FUNC_9 (struct bfd_link_info*) ;
 TYPE_20__* FUNC_10 (struct bfd_link_info*,int ) ;
 TYPE_23__* FUNC_11 (TYPE_20__*) ;
 scalar_t__* VAR_10 ;
 scalar_t__* VAR_11 ;

bfd_boolean
FUNC_12 (bfd *VAR_12,
      struct bfd_link_info *VAR_13,
      struct elf_link_hash_entry *VAR_14,
      Elf_Internal_Sym *VAR_15)
{
  bfd *VAR_16;
  asection *VAR_17;
  struct mips_got_info *VAR_18;
  struct mips_elf_link_hash_table *VAR_19;

  VAR_19 = FUNC_9 (VAR_13);
  VAR_16 = FUNC_5 (VAR_13)->dynobj;

  if (VAR_14->plt.offset != (bfd_vma) -1)
    {
      bfd_byte *VAR_20;
      bfd_vma VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
      Elf_Internal_Rela VAR_26;
      static const bfd_vma *VAR_27;

      FUNC_0 (VAR_14->dynindx != -1);
      FUNC_0 (VAR_19->splt != ((void*)0));
      FUNC_0 (VAR_14->plt.offset <= VAR_19->splt->size);


      VAR_21 = (VAR_19->splt->output_section->vma
       + VAR_19->splt->output_offset
       + VAR_14->plt.offset);


      VAR_22 = ((VAR_14->plt.offset - VAR_19->plt_header_size)
     / VAR_19->plt_entry_size);


      VAR_23 = (VAR_19->sgotplt->output_section->vma
       + VAR_19->sgotplt->output_offset
       + VAR_22 * 4);



      VAR_24 = FUNC_8 (VAR_13, VAR_14);



      VAR_25 = -(VAR_14->plt.offset / 4 + 1) & 0xffff;


      FUNC_4 (VAR_12, VAR_21,
    VAR_19->sgotplt->contents + VAR_22 * 4);


      VAR_20 = VAR_19->splt->contents + VAR_14->plt.offset;

      if (VAR_13->shared)
 {
   VAR_27 = VAR_11;
   FUNC_4 (VAR_12, VAR_27[0] | VAR_25, VAR_20);
   FUNC_4 (VAR_12, VAR_27[1] | VAR_22, VAR_20 + 4);
 }
      else
 {
   bfd_vma VAR_28, VAR_29;

   VAR_27 = VAR_10;
   VAR_28 = ((VAR_23 + 0x8000) >> 16) & 0xffff;
   VAR_29 = VAR_23 & 0xffff;

   FUNC_4 (VAR_12, VAR_27[0] | VAR_25, VAR_20);
   FUNC_4 (VAR_12, VAR_27[1] | VAR_22, VAR_20 + 4);
   FUNC_4 (VAR_12, VAR_27[2] | VAR_28, VAR_20 + 8);
   FUNC_4 (VAR_12, VAR_27[3] | VAR_29, VAR_20 + 12);
   FUNC_4 (VAR_12, VAR_27[4], VAR_20 + 16);
   FUNC_4 (VAR_12, VAR_27[5], VAR_20 + 20);
   FUNC_4 (VAR_12, VAR_27[6], VAR_20 + 24);
   FUNC_4 (VAR_12, VAR_27[7], VAR_20 + 28);

   VAR_20 = (VAR_19->srelplt2->contents
   + (VAR_22 * 3 + 2) * sizeof (Elf32_External_Rela));


   VAR_26.r_offset = VAR_23;
   VAR_26.r_info = FUNC_1 (VAR_19->root.hplt->indx, VAR_1);
   VAR_26.r_addend = VAR_14->plt.offset;
   FUNC_3 (VAR_12, &VAR_26, VAR_20);


   VAR_20 += sizeof (Elf32_External_Rela);
   VAR_26.r_offset = VAR_21 + 8;
   VAR_26.r_info = FUNC_1 (VAR_19->root.hgot->indx, VAR_4);
   VAR_26.r_addend = VAR_24;
   FUNC_3 (VAR_12, &VAR_26, VAR_20);


   VAR_20 += sizeof (Elf32_External_Rela);
   VAR_26.r_offset += 4;
   VAR_26.r_info = FUNC_1 (VAR_19->root.hgot->indx, VAR_6);
   FUNC_3 (VAR_12, &VAR_26, VAR_20);
 }


      VAR_20 = VAR_19->srelplt->contents + VAR_22 * sizeof (Elf32_External_Rela);
      VAR_26.r_offset = VAR_23;
      VAR_26.r_info = FUNC_1 (VAR_14->dynindx, VAR_5);
      VAR_26.r_addend = 0;
      FUNC_3 (VAR_12, &VAR_26, VAR_20);

      if (!VAR_14->def_regular)
 VAR_15->st_shndx = VAR_7;
    }

  FUNC_0 (VAR_14->dynindx != -1 || VAR_14->forced_local);

  VAR_17 = FUNC_7 (VAR_16, VAR_0);
  FUNC_0 (VAR_17 != ((void*)0));
  FUNC_0 (FUNC_11 (VAR_17) != ((void*)0));
  VAR_18 = FUNC_11 (VAR_17)->u.got_info;
  FUNC_0 (VAR_18 != ((void*)0));


  if (VAR_18->global_gotsym != ((void*)0)
      && VAR_14->dynindx >= VAR_18->global_gotsym->dynindx)
    {
      bfd_vma VAR_30;
      Elf_Internal_Rela VAR_31;
      bfd_byte *VAR_32;
      asection *VAR_33;


      VAR_30 = FUNC_6 (VAR_16, VAR_12, VAR_14,
       VAR_3, VAR_13);
      FUNC_2 (VAR_12, VAR_15->st_value, VAR_17->contents + VAR_30);


      VAR_33 = FUNC_10 (VAR_13, VAR_0);
      VAR_32 = VAR_33->contents + (VAR_33->reloc_count++ * sizeof (Elf32_External_Rela));
      VAR_31.r_offset = (VAR_17->output_section->vma
    + VAR_17->output_offset
    + VAR_30);
      VAR_31.r_info = FUNC_1 (VAR_14->dynindx, VAR_1);
      VAR_31.r_addend = 0;
      FUNC_3 (VAR_16, &VAR_31, VAR_32);
    }


  if (VAR_14->needs_copy)
    {
      Elf_Internal_Rela VAR_34;

      FUNC_0 (VAR_14->dynindx != -1);

      VAR_34.r_offset = (VAR_14->root.u.def.section->output_section->vma
        + VAR_14->root.u.def.section->output_offset
        + VAR_14->root.u.def.value);
      VAR_34.r_info = FUNC_1 (VAR_14->dynindx, VAR_2);
      VAR_34.r_addend = 0;
      FUNC_3 (VAR_12, &VAR_34,
     VAR_19->srelbss->contents
     + (VAR_19->srelbss->reloc_count
        * sizeof (Elf32_External_Rela)));
      ++VAR_19->srelbss->reloc_count;
    }


  if (VAR_15->st_other == VAR_8)
    VAR_15->st_value &= ~1;

  return VAR_9;
}
