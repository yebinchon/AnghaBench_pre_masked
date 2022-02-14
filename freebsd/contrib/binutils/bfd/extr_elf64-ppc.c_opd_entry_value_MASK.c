
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_15__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


struct TYPE_32__ {scalar_t__ value; TYPE_7__* section; } ;
struct TYPE_31__ {scalar_t__ link; } ;
struct TYPE_33__ {TYPE_2__ def; TYPE_1__ i; } ;
struct TYPE_34__ {scalar_t__ type; TYPE_3__ u; } ;
struct elf_link_hash_entry {TYPE_4__ root; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_byte ;
struct TYPE_36__ {TYPE_7__* sections; } ;
typedef TYPE_6__ bfd ;
struct TYPE_37__ {scalar_t__ reloc_count; scalar_t__ vma; int flags; scalar_t__ output_offset; TYPE_5__* output_section; struct TYPE_37__* next; TYPE_6__* owner; } ;
typedef TYPE_7__ asection ;
struct TYPE_39__ {unsigned long sh_info; int * contents; } ;
struct TYPE_38__ {scalar_t__ st_value; scalar_t__ st_shndx; } ;
struct TYPE_35__ {scalar_t__ vma; } ;
struct TYPE_30__ {TYPE_9__ symtab_hdr; } ;
struct TYPE_29__ {TYPE_10__* opd_relocs; } ;
struct TYPE_28__ {scalar_t__ r_offset; scalar_t__ r_addend; int r_info; } ;
typedef TYPE_8__ Elf_Internal_Sym ;
typedef TYPE_9__ Elf_Internal_Shdr ;
typedef TYPE_10__ Elf_Internal_Rela ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_10__* FUNC_3 (TYPE_6__*,TYPE_7__*,int *,int *,int ) ;
 TYPE_8__* FUNC_4 (TYPE_6__*,TYPE_9__*,unsigned long,int ,int *,int *,int *) ;
 int FUNC_5 (TYPE_6__*,TYPE_7__*,scalar_t__*,scalar_t__,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_7__* FUNC_6 (TYPE_6__*,scalar_t__) ;
 struct elf_link_hash_entry** FUNC_7 (TYPE_6__*) ;
 TYPE_15__* FUNC_8 (TYPE_6__*) ;
 TYPE_11__* FUNC_9 (TYPE_6__*) ;

__attribute__((used)) static bfd_vma
FUNC_10 (asection *VAR_13,
   bfd_vma VAR_14,
   asection **VAR_15,
   bfd_vma *VAR_16)
{
  bfd *VAR_17 = VAR_13->owner;
  Elf_Internal_Rela *VAR_18;
  Elf_Internal_Rela *VAR_19, *VAR_20, *VAR_21;
  bfd_vma VAR_22;


  if (VAR_13->reloc_count == 0)
    {
      bfd_vma VAR_23;

      if (!FUNC_5 (VAR_17, VAR_13, &VAR_23, VAR_14, 8))
 return (bfd_vma) -1;

      if (VAR_15 != ((void*)0))
 {
   asection *VAR_24, *VAR_25 = ((void*)0);
   for (VAR_24 = VAR_17->sections; VAR_24 != ((void*)0); VAR_24 = VAR_24->next)
     if (VAR_24->vma <= VAR_23
  && (VAR_24->flags & VAR_3) != 0
  && (VAR_24->flags & VAR_2) != 0)
       VAR_25 = VAR_24;
   if (VAR_25 != ((void*)0))
     {
       *VAR_15 = VAR_25;
       if (VAR_16 != ((void*)0))
  *VAR_16 = VAR_23 - VAR_25->vma;
     }
 }
      return VAR_23;
    }

  VAR_18 = FUNC_9 (VAR_17)->opd_relocs;
  if (VAR_18 == ((void*)0))
    VAR_18 = FUNC_3 (VAR_17, VAR_13, ((void*)0), ((void*)0), VAR_8);


  VAR_19 = VAR_18;
  FUNC_0 (VAR_19 != ((void*)0));
  VAR_20 = VAR_19 + VAR_13->reloc_count - 1;
  VAR_22 = (bfd_vma) -1;
  while (VAR_19 < VAR_20)
    {
      VAR_21 = VAR_19 + (VAR_20 - VAR_19) / 2;
      if (VAR_21->r_offset < VAR_14)
 VAR_19 = VAR_21 + 1;
      else if (VAR_21->r_offset > VAR_14)
 VAR_20 = VAR_21;
      else
 {
   Elf_Internal_Shdr *VAR_26 = &FUNC_8 (VAR_17)->symtab_hdr;
   if (FUNC_2 (VAR_21->r_info) == VAR_0
       && FUNC_2 ((VAR_21 + 1)->r_info) == VAR_1)
     {
       unsigned long VAR_27 = FUNC_1 (VAR_21->r_info);
       asection *VAR_28;

       if (VAR_27 < VAR_26->sh_info)
  {
    Elf_Internal_Sym *VAR_29;

    VAR_29 = (Elf_Internal_Sym *) VAR_26->contents;
    if (VAR_29 == ((void*)0))
      {
        VAR_29 = FUNC_4 (VAR_17, VAR_26,
        VAR_26->sh_info,
        0, ((void*)0), ((void*)0), ((void*)0));
        if (VAR_29 == ((void*)0))
   break;
        VAR_26->contents = (bfd_byte *) VAR_29;
      }

    VAR_29 += VAR_27;
    VAR_22 = VAR_29->st_value;
    VAR_28 = ((void*)0);
    if ((VAR_29->st_shndx != VAR_7
         && VAR_29->st_shndx < VAR_6)
        || VAR_29->st_shndx > VAR_5)
      VAR_28 = FUNC_6 (VAR_17, VAR_29->st_shndx);
    FUNC_0 ((VAR_28->flags & VAR_4) == 0);
  }
       else
  {
    struct elf_link_hash_entry **VAR_30;
    struct elf_link_hash_entry *VAR_31;

    VAR_30 = FUNC_7 (VAR_17);
    VAR_31 = VAR_30[VAR_27 - VAR_26->sh_info];
    while (VAR_31->root.type == VAR_11
    || VAR_31->root.type == VAR_12)
      VAR_31 = ((struct elf_link_hash_entry *) VAR_31->root.u.i.link);
    FUNC_0 (VAR_31->root.type == VAR_9
         || VAR_31->root.type == VAR_10);
    VAR_22 = VAR_31->root.u.def.value;
    VAR_28 = VAR_31->root.u.def.section;
  }
       VAR_22 += VAR_21->r_addend;
       if (VAR_16 != ((void*)0))
  *VAR_16 = VAR_22;
       if (VAR_15 != ((void*)0))
  *VAR_15 = VAR_28;
       if (VAR_28 != ((void*)0) && VAR_28->output_section != ((void*)0))
  VAR_22 += VAR_28->output_section->vma + VAR_28->output_offset;
     }
   break;
 }
    }

  return VAR_22;
}
