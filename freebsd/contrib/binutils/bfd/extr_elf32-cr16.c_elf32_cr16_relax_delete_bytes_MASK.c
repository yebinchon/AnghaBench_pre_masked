
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_16__ {int value; TYPE_5__* section; } ;
struct TYPE_17__ {TYPE_2__ def; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_3__ u; } ;
struct elf_link_hash_entry {TYPE_4__ root; } ;
struct bfd_link_info {int * wrap_hash; } ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_19__ {int size; int reloc_count; } ;
typedef TYPE_5__ asection ;
struct TYPE_21__ {int sh_info; int sh_size; scalar_t__ contents; } ;
struct TYPE_23__ {TYPE_7__ symtab_hdr; } ;
struct TYPE_22__ {int r_offset; int r_addend; int r_info; } ;
struct TYPE_20__ {unsigned int st_shndx; int st_value; } ;
struct TYPE_15__ {int * contents; } ;
struct TYPE_14__ {TYPE_8__* relocs; TYPE_1__ this_hdr; } ;
typedef TYPE_6__ Elf_Internal_Sym ;
typedef TYPE_7__ Elf_Internal_Shdr ;
typedef TYPE_8__ Elf_Internal_Rela ;
typedef int Elf32_External_Sym ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int *,TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_10__* FUNC_2 (TYPE_5__*) ;
 struct elf_link_hash_entry** FUNC_3 (int *) ;
 TYPE_9__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,size_t) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (struct bfd_link_info *VAR_3, bfd *VAR_4,
                               asection *VAR_5, bfd_vma VAR_6, int VAR_7)
{
  Elf_Internal_Shdr *VAR_8;
  unsigned int VAR_9;
  bfd_byte *VAR_10;
  Elf_Internal_Rela *VAR_11, *VAR_12;
  Elf_Internal_Rela *VAR_13;
  bfd_vma VAR_14;
  Elf_Internal_Sym *VAR_15;
  Elf_Internal_Sym *VAR_16;
  struct elf_link_hash_entry **VAR_17;
  struct elf_link_hash_entry **VAR_18;
  struct elf_link_hash_entry **VAR_19;
  unsigned int VAR_20;

  VAR_9 = FUNC_1 (VAR_4, VAR_5);

  VAR_10 = FUNC_2 (VAR_5)->this_hdr.contents;



  VAR_13 = ((void*)0);
  VAR_14 = VAR_5->size;

  VAR_11 = FUNC_2 (VAR_5)->relocs;
  VAR_12 = VAR_11 + VAR_5->reloc_count;


  FUNC_5 (VAR_10 + VAR_6, VAR_10 + VAR_6 + VAR_7,
           (size_t) (VAR_14 - VAR_6 - VAR_7));
  VAR_5->size -= VAR_7;


  for (VAR_11 = FUNC_2 (VAR_5)->relocs; VAR_11 < VAR_12; VAR_11++)

    if ((VAR_11->r_offset > VAR_6 && VAR_11->r_offset < VAR_14))
 VAR_11->r_offset -= VAR_7;


  VAR_8 = &FUNC_4 (VAR_4)->symtab_hdr;
  VAR_15 = (Elf_Internal_Sym *) VAR_8->contents;
  for (VAR_16 = VAR_15 + VAR_8->sh_info; VAR_15 < VAR_16; VAR_15++)
    {
      if (VAR_15->st_shndx == VAR_9
          && VAR_15->st_value > VAR_6
          && VAR_15->st_value < VAR_14)
        {


          for (VAR_11 = FUNC_2 (VAR_5)->relocs; VAR_11 < VAR_12; VAR_11++)
            {
              unsigned long VAR_21;
              Elf_Internal_Sym *VAR_22;
              bfd_vma VAR_23, VAR_24;

              VAR_21 = FUNC_0 (VAR_11->r_info);
              VAR_22 = (Elf_Internal_Sym *) VAR_8->contents + VAR_21;


              if (VAR_22 != VAR_15)
                continue;

              VAR_23 = VAR_15->st_value;
              VAR_24 = VAR_23 - VAR_11->r_addend;


              if (VAR_24 <= VAR_6)
                VAR_11->r_addend -= VAR_7;
              else
                continue;
            }

          VAR_15->st_value -= VAR_7;
        }
    }


  VAR_20 = (VAR_8->sh_size / sizeof (Elf32_External_Sym)
               - VAR_8->sh_info);
  VAR_17 = VAR_19 = FUNC_3 (VAR_4);
  VAR_18 = VAR_17 + VAR_20;

  for (; VAR_17 < VAR_18; VAR_17++)
    {
      struct elf_link_hash_entry *VAR_25 = *VAR_17;
      if (VAR_3->wrap_hash != ((void*)0))
        {
          struct elf_link_hash_entry **VAR_26;


          for (VAR_26 = VAR_19; VAR_26 < VAR_17;
               VAR_26++)


     if (*VAR_26 == VAR_25)
       break;


          if (VAR_26 < VAR_17)
            continue;
        }

      if ((VAR_25->root.type == VAR_1
          || VAR_25->root.type == VAR_2)
          && VAR_25->root.u.def.section == VAR_5
          && VAR_25->root.u.def.value > VAR_6
          && VAR_25->root.u.def.value < VAR_14)
        VAR_25->root.u.def.value -= VAR_7;
    }

  return VAR_0;
}
