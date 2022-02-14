
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_15__ ;
typedef struct TYPE_35__ TYPE_14__ ;
typedef struct TYPE_34__ TYPE_11__ ;


struct TYPE_39__ {unsigned short value; TYPE_2__* section; } ;
struct TYPE_40__ {TYPE_3__ def; } ;
struct TYPE_41__ {scalar_t__ type; TYPE_4__ u; } ;
struct elf_link_hash_entry {TYPE_5__ root; } ;
struct bfd_link_info {int keep_memory; scalar_t__ relocatable; } ;
typedef unsigned short bfd_vma ;
struct TYPE_44__ {scalar_t__ st_shndx; unsigned short st_value; int r_offset; void* r_info; scalar_t__ r_addend; } ;
typedef TYPE_8__ bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_45__ {int flags; scalar_t__ reloc_count; unsigned short output_offset; TYPE_6__* output_section; } ;
typedef TYPE_9__ asection ;
struct TYPE_43__ {TYPE_8__* contents; } ;
struct TYPE_42__ {unsigned short vma; } ;
struct TYPE_38__ {unsigned short output_offset; TYPE_1__* output_section; } ;
struct TYPE_37__ {unsigned short vma; } ;
struct TYPE_36__ {TYPE_8__* relocs; TYPE_7__ this_hdr; } ;
struct TYPE_34__ {scalar_t__ sh_info; unsigned char* contents; } ;
struct TYPE_35__ {TYPE_11__ symtab_hdr; } ;
typedef TYPE_8__ Elf_Internal_Sym ;
typedef TYPE_11__ Elf_Internal_Shdr ;
typedef TYPE_8__ Elf_Internal_Rela ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_8__* FUNC_4 (int *,TYPE_9__*,int *,int *,int ) ;
 TYPE_9__* VAR_14 ;
 TYPE_9__* VAR_15 ;
 TYPE_8__* FUNC_5 (int *,TYPE_11__*,scalar_t__,int ,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_8__*) ;
 scalar_t__ FUNC_7 (int *,TYPE_8__*) ;
 scalar_t__ FUNC_8 (int *,TYPE_8__*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_9 (int *,TYPE_9__*,TYPE_8__**) ;
 int FUNC_10 (int *,unsigned short,TYPE_8__*) ;
 int FUNC_11 (int *,unsigned short,TYPE_8__*) ;
 TYPE_9__* FUNC_12 (int *,scalar_t__) ;
 TYPE_9__* VAR_18 ;
 int FUNC_13 (struct bfd_link_info*,int *,TYPE_9__*,int,int) ;
 TYPE_15__* FUNC_14 (TYPE_9__*) ;
 struct elf_link_hash_entry** FUNC_15 (int *) ;
 TYPE_14__* FUNC_16 (int *) ;
 int FUNC_17 (TYPE_8__*) ;

__attribute__((used)) static bfd_boolean
FUNC_18 (bfd *VAR_19, asection *VAR_20,
                         struct bfd_link_info *VAR_21, bfd_boolean *VAR_22)
{
  Elf_Internal_Shdr *VAR_23;
  Elf_Internal_Rela *VAR_24;
  Elf_Internal_Rela *VAR_25, *VAR_26;
  bfd_byte *VAR_27 = ((void*)0);
  Elf_Internal_Sym *VAR_28 = ((void*)0);


  *VAR_22 = VAR_0;




  if (VAR_21->relocatable
      || (VAR_20->flags & VAR_9) == 0
      || VAR_20->reloc_count == 0
      || (VAR_20->flags & VAR_8) == 0)
    return VAR_13;

  VAR_23 = &FUNC_16 (VAR_19)->symtab_hdr;


  VAR_24 = FUNC_4 (VAR_19, VAR_20, ((void*)0), ((void*)0),
            VAR_21->keep_memory);
  if (VAR_24 == ((void*)0))
    goto error_return;


  VAR_26 = VAR_24 + VAR_20->reloc_count;
  for (VAR_25 = VAR_24; VAR_25 < VAR_26; VAR_25++)
    {
      bfd_vma VAR_29;



      if (FUNC_3 (VAR_25->r_info) != (int) VAR_1
          && FUNC_3 (VAR_25->r_info) != (int) VAR_2)
        continue;


      if (VAR_27 == ((void*)0))
        {

          if (FUNC_14 (VAR_20)->this_hdr.contents != ((void*)0))
            VAR_27 = FUNC_14 (VAR_20)->this_hdr.contents;

          else if (!FUNC_9 (VAR_19, VAR_20, &VAR_27))
            goto error_return;
        }


      if (VAR_28 == ((void*)0) && VAR_23->sh_info != 0)
        {
          VAR_28 = (Elf_Internal_Sym *) VAR_23->contents;
          if (VAR_28 == ((void*)0))
            VAR_28 = FUNC_5 (VAR_19, VAR_23,
                                            VAR_23->sh_info, 0,
                                            ((void*)0), ((void*)0), ((void*)0));
          if (VAR_28 == ((void*)0))
            goto error_return;
        }


      if (FUNC_2 (VAR_25->r_info) < VAR_23->sh_info)
        {

          Elf_Internal_Sym *VAR_30;
          asection *VAR_31;

          VAR_30 = VAR_28 + FUNC_2 (VAR_25->r_info);
          if (VAR_30->st_shndx == VAR_12)
            VAR_31 = VAR_18;
          else if (VAR_30->st_shndx == VAR_10)
            VAR_31 = VAR_14;
          else if (VAR_30->st_shndx == VAR_11)
            VAR_31 = VAR_15;
          else
            VAR_31 = FUNC_12 (VAR_19, VAR_30->st_shndx);
          VAR_29 = (VAR_30->st_value
                    + VAR_31->output_section->vma
                    + VAR_31->output_offset);
        }
      else
        {
          unsigned long VAR_32;
          struct elf_link_hash_entry *VAR_33;


          VAR_32 = FUNC_2 (VAR_25->r_info) - VAR_23->sh_info;
          VAR_33 = FUNC_15 (VAR_19)[VAR_32];
          FUNC_0 (VAR_33 != ((void*)0));

          if (VAR_33->root.type != VAR_16
              && VAR_33->root.type != VAR_17)



            continue;

          VAR_29 = (VAR_33->root.u.def.value
                    + VAR_33->root.u.def.section->output_section->vma
                    + VAR_33->root.u.def.section->output_offset);
        }
      if (FUNC_3 (VAR_25->r_info) == (int) VAR_2)
        {
          bfd_vma VAR_34 = VAR_29;


          VAR_34 -= (VAR_20->output_section->vma + VAR_20->output_offset);
          VAR_34 -= VAR_25->r_offset;
          VAR_34 += VAR_25->r_addend;




          if ((long) VAR_34 < 0x10000 && (long) VAR_34 > -0x10002)
            {
              unsigned int VAR_35;


              VAR_35 = (unsigned int) FUNC_7 (VAR_19, VAR_27 + VAR_25->r_offset);


              if ((VAR_35 & 0xffff) == 0x0010)
                {
                FUNC_10 (VAR_19, 0x1800 | ((0xf & (VAR_35 >>20))<<4), VAR_27 + VAR_25->r_offset);
                FUNC_10 (VAR_19, VAR_34, VAR_27 + VAR_25->r_offset+2);
                }
              else
                continue;


              FUNC_14 (VAR_20)->relocs = VAR_24;
              FUNC_14 (VAR_20)->this_hdr.contents = VAR_27;
              VAR_23->contents = (unsigned char *) VAR_28;


              VAR_25->r_info = FUNC_1 (FUNC_2 (VAR_25->r_info),
                                           VAR_1);


              if (!FUNC_13 (VAR_21, VAR_19, VAR_20,
                                                   VAR_25->r_offset + 2, 2))
                goto error_return;



              *VAR_22 = VAR_13;
            }
        }



      if (FUNC_3 (VAR_25->r_info) == (int) VAR_1)
        {
          bfd_vma VAR_36 = VAR_29;


          VAR_36 -= (VAR_20->output_section->vma + VAR_20->output_offset);
          VAR_36 -= VAR_25->r_offset;
          VAR_36 += VAR_25->r_addend;




          if ((long) VAR_36 < 0xfe && (long) VAR_36 > -0x100)
            {
              unsigned short VAR_37;


              VAR_37 = (unsigned short) FUNC_6 (VAR_19, VAR_27 + VAR_25->r_offset);


              if ((VAR_37 & 0xff00) == 0x1800)
                {
                 FUNC_11 (VAR_19, 0x1 | ((0xf & (VAR_37>>4))<<4), VAR_27 + VAR_25->r_offset);
                 FUNC_11 (VAR_19, VAR_36, VAR_27 + VAR_25->r_offset+2);
                }
              else
                continue;


              FUNC_14 (VAR_20)->relocs = VAR_24;
              FUNC_14 (VAR_20)->this_hdr.contents = VAR_27;
              VAR_23->contents = (unsigned char *) VAR_28;


              VAR_25->r_info = FUNC_1 (FUNC_2 (VAR_25->r_info),
                                           VAR_3);


              if (!FUNC_13 (VAR_21, VAR_19, VAR_20,
                                                   VAR_25->r_offset + 2, 2))
                goto error_return;



              *VAR_22 = VAR_13;
            }
        }
    }

  if (VAR_28 != ((void*)0)
      && VAR_23->contents != (unsigned char *) VAR_28)
    {
      if (! VAR_21->keep_memory)
        FUNC_17 (VAR_28);
      else
        {

          VAR_23->contents = (unsigned char *) VAR_28;
        }
    }

  if (VAR_27 != ((void*)0)
      && FUNC_14 (VAR_20)->this_hdr.contents != VAR_27)
    {
      if (! VAR_21->keep_memory)
        FUNC_17 (VAR_27);
      else
        {

          FUNC_14 (VAR_20)->this_hdr.contents = VAR_27;
        }
    }

  if (VAR_24 != ((void*)0)
      && FUNC_14 (VAR_20)->relocs != VAR_24)
    FUNC_17 (VAR_24);

  return VAR_13;

 error_return:
  if (VAR_28 != ((void*)0)
      && VAR_23->contents != (unsigned char *) VAR_28)
    FUNC_17 (VAR_28);
  if (VAR_27 != ((void*)0)
      && FUNC_14 (VAR_20)->this_hdr.contents != VAR_27)
    FUNC_17 (VAR_27);
  if (VAR_24 != ((void*)0)
      && FUNC_14 (VAR_20)->relocs != VAR_24)
    FUNC_17 (VAR_24);

  return VAR_0;
}
