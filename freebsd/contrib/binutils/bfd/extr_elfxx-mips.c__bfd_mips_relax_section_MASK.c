
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_34__ {int value; TYPE_9__* section; } ;
struct TYPE_33__ {scalar_t__ link; } ;
struct TYPE_35__ {TYPE_3__ def; TYPE_2__ i; } ;
struct TYPE_36__ {scalar_t__ type; TYPE_4__ u; } ;
struct TYPE_37__ {TYPE_5__ root; int forced_local; } ;
struct mips_elf_link_hash_entry {TYPE_6__ root; } ;
struct bfd_link_info {int keep_memory; int symbolic; scalar_t__ shared; scalar_t__ relocatable; } ;
typedef int bfd_vma ;
typedef int bfd_signed_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_40__ {int output_offset; int reloc_count; TYPE_7__* output_section; } ;
typedef TYPE_9__ asection ;
struct TYPE_39__ {int * contents; } ;
struct TYPE_38__ {int vma; } ;
struct TYPE_32__ {int int_rels_per_ext_rel; } ;
struct TYPE_31__ {TYPE_8__ this_hdr; } ;
struct TYPE_27__ {size_t sh_info; scalar_t__ contents; } ;
struct TYPE_30__ {TYPE_11__ symtab_hdr; } ;
struct TYPE_29__ {TYPE_1__* s; } ;
struct TYPE_28__ {int r_addend; int r_offset; int r_info; } ;
struct TYPE_26__ {scalar_t__ st_shndx; int st_value; } ;
typedef TYPE_10__ Elf_Internal_Sym ;
typedef TYPE_11__ Elf_Internal_Shdr ;
typedef TYPE_12__ Elf_Internal_Rela ;


 unsigned long FUNC_0 (int *,int ) ;
 unsigned int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_12__* FUNC_2 (int *,TYPE_9__*,int *,int *,int ) ;
 TYPE_9__* VAR_6 ;
 TYPE_9__* VAR_7 ;
 TYPE_10__* FUNC_3 (int *,TYPE_11__*,scalar_t__,int ,int *,int *,int *) ;
 unsigned long FUNC_4 (int *,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int *,TYPE_9__*,int **) ;
 int FUNC_6 (int *,unsigned long,int *) ;
 TYPE_9__* FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 TYPE_15__* FUNC_9 (TYPE_9__*) ;
 scalar_t__* FUNC_10 (int *) ;
 TYPE_14__* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_13__* FUNC_13 (int *) ;

bfd_boolean
FUNC_14 (bfd *VAR_12, asection *VAR_13,
    struct bfd_link_info *VAR_14,
    bfd_boolean *VAR_15)
{
  Elf_Internal_Rela *VAR_16;
  Elf_Internal_Rela *VAR_17, *VAR_18;
  Elf_Internal_Shdr *VAR_19;
  bfd_byte *VAR_20 = ((void*)0);
  size_t VAR_21;
  bfd_boolean VAR_22 = VAR_0;
  bfd_vma VAR_23 = VAR_13->output_section->vma + VAR_13->output_offset;
  Elf_Internal_Sym *VAR_24 = ((void*)0);


  *VAR_15 = VAR_0;

  if (VAR_14->relocatable)
    return VAR_5;

  VAR_16 = FUNC_2 (VAR_12, VAR_13, ((void*)0), ((void*)0),
            VAR_14->keep_memory);
  if (VAR_16 == ((void*)0))
    return VAR_5;

  VAR_18 = VAR_16 + VAR_13->reloc_count
    * FUNC_13 (VAR_12)->s->int_rels_per_ext_rel;
  VAR_19 = &FUNC_11 (VAR_12)->symtab_hdr;
  VAR_21 = (FUNC_8 (VAR_12)) ? 0 : VAR_19->sh_info;

  for (VAR_17 = VAR_16; VAR_17 < VAR_18; VAR_17++)
    {
      bfd_vma VAR_25;
      bfd_signed_vma VAR_26;
      unsigned int VAR_27;
      unsigned long VAR_28;
      asection *VAR_29;
      unsigned long VAR_30;




      VAR_27 = FUNC_1 (VAR_12, VAR_17->r_info);
      if (VAR_27 != VAR_1)
 continue;

      VAR_28 = FUNC_0 (VAR_12, VAR_17->r_info);

      if (VAR_28 >= VAR_21)
 {
   struct mips_elf_link_hash_entry *VAR_31
     = ((struct mips_elf_link_hash_entry *)
        FUNC_10 (VAR_12) [VAR_28 - VAR_21]);

   while (VAR_31->root.root.type == VAR_10
   || VAR_31->root.root.type == VAR_11)
     VAR_31 = (struct mips_elf_link_hash_entry *) VAR_31->root.root.u.i.link;



   if (! ((VAR_31->root.root.type == VAR_8
    || VAR_31->root.root.type == VAR_9)
   && VAR_31->root.root.u.def.section)
       || (VAR_14->shared && ! VAR_14->symbolic
    && !VAR_31->root.forced_local))
     continue;

   VAR_29 = VAR_31->root.root.u.def.section;
   if (VAR_29->output_section)
     VAR_25 = (VAR_31->root.root.u.def.value
        + VAR_29->output_section->vma
        + VAR_29->output_offset);
   else
     VAR_25 = VAR_31->root.root.u.def.value;
 }
      else
 {
   Elf_Internal_Sym *VAR_32;


   if (VAR_24 == ((void*)0) && VAR_19->sh_info != 0)
     {
       VAR_24 = (Elf_Internal_Sym *) VAR_19->contents;
       if (VAR_24 == ((void*)0))
  VAR_24 = FUNC_3 (VAR_12, VAR_19,
      VAR_19->sh_info, 0,
      ((void*)0), ((void*)0), ((void*)0));
       if (VAR_24 == ((void*)0))
  goto relax_return;
     }

   VAR_32 = VAR_24 + VAR_28;
   if (VAR_32->st_shndx == VAR_4)
     continue;
   else if (VAR_32->st_shndx == VAR_2)
     VAR_29 = VAR_6;
   else if (VAR_32->st_shndx == VAR_3)
     VAR_29 = VAR_7;
   else
     VAR_29
       = FUNC_7 (VAR_12, VAR_32->st_shndx);
   VAR_25 = VAR_32->st_value
     + VAR_29->output_section->vma
     + VAR_29->output_offset;
 }



      VAR_26 = (VAR_25 + VAR_17->r_addend)
 - (VAR_23 + VAR_17->r_offset + 4);


      if ((VAR_26 & 3) != 0)
 continue;

      VAR_26 >>= 2;


      if (VAR_26 < -0x8000 || VAR_26 >= 0x8000)
 continue;


      if (VAR_20 == ((void*)0))
 {

   if (FUNC_9 (VAR_13)->this_hdr.contents != ((void*)0))
     VAR_20 = FUNC_9 (VAR_13)->this_hdr.contents;
   else
     {
       if (!FUNC_5 (VAR_12, VAR_13, &VAR_20))
  goto relax_return;
     }
 }

      VAR_30 = FUNC_4 (VAR_12, VAR_20 + VAR_17->r_offset);


      if ((VAR_30 & 0xfc1fffff) == 0x0000f809)
 VAR_30 = 0x04110000;

      else if ((VAR_30 & 0xfc1fffff) == 0x00000008)
 VAR_30 = 0x10000000;
      else
 continue;

      VAR_30 |= (VAR_26 & 0xffff);
      FUNC_6 (VAR_12, VAR_30, VAR_20 + VAR_17->r_offset);
      VAR_22 = VAR_5;
    }

  if (VAR_20 != ((void*)0)
      && FUNC_9 (VAR_13)->this_hdr.contents != VAR_20)
    {
      if (!VAR_22 && !VAR_14->keep_memory)
        FUNC_12 (VAR_20);
      else
        {

          FUNC_9 (VAR_13)->this_hdr.contents = VAR_20;
        }
    }
  return VAR_5;

 relax_return:
  if (VAR_20 != ((void*)0)
      && FUNC_9 (VAR_13)->this_hdr.contents != VAR_20)
    FUNC_12 (VAR_20);
  return VAR_0;
}
