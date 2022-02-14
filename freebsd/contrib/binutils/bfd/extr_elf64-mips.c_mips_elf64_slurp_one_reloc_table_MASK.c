
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


typedef enum elf_mips_reloc_type { ____Placeholder_elf_mips_reloc_type } elf_mips_reloc_type ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_22__ {int flags; } ;
typedef TYPE_2__ bfd ;
struct TYPE_23__ {int flags; TYPE_1__* section; } ;
typedef TYPE_3__ asymbol ;
struct TYPE_24__ {int reloc_count; scalar_t__ vma; } ;
typedef TYPE_4__ asection ;
struct TYPE_25__ {int howto; int addend; scalar_t__ address; TYPE_3__** sym_ptr_ptr; } ;
typedef TYPE_5__ arelent ;
struct TYPE_27__ {int r_addend; scalar_t__ r_offset; int r_ssym; int r_sym; int r_type3; int r_type2; int r_type; } ;
struct TYPE_26__ {int sh_entsize; int sh_size; int sh_offset; } ;
struct TYPE_21__ {TYPE_3__** symbol_ptr_ptr; } ;
struct TYPE_20__ {TYPE_3__** symbol_ptr_ptr; } ;
typedef TYPE_6__ Elf_Internal_Shdr ;
typedef TYPE_7__ Elf64_Mips_Internal_Rela ;
typedef int Elf64_Mips_External_Rela ;
typedef int Elf64_Mips_External_Rel ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 TYPE_19__* VAR_6 ;
 int FUNC_2 (void*,int ,TYPE_2__*) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int *,TYPE_7__*) ;
 int FUNC_8 (TYPE_2__*,int *,TYPE_7__*) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd *VAR_7, asection *VAR_8,
      Elf_Internal_Shdr *VAR_9,
      bfd_size_type VAR_10,
      arelent *VAR_11, asymbol **VAR_12,
      bfd_boolean VAR_13)
{
  void *VAR_14;
  bfd_byte *VAR_15;
  arelent *VAR_16;
  bfd_vma VAR_17;
  int VAR_18;
  bfd_boolean VAR_19;

  VAR_14 = FUNC_3 (VAR_9->sh_size);
  if (VAR_14 == ((void*)0))
    return VAR_3;

  if (FUNC_4 (VAR_7, VAR_9->sh_offset, VAR_4) != 0
      || (FUNC_2 (VAR_14, VAR_9->sh_size, VAR_7)
   != VAR_9->sh_size))
    goto error_return;

  VAR_15 = VAR_14;

  VAR_18 = VAR_9->sh_entsize;
  FUNC_0 (VAR_18 == sizeof (Elf64_Mips_External_Rel)
       || VAR_18 == sizeof (Elf64_Mips_External_Rela));

  if (VAR_18 == sizeof (Elf64_Mips_External_Rel))
    VAR_19 = VAR_3;
  else
    VAR_19 = VAR_5;

  for (VAR_17 = 0, VAR_16 = VAR_11;
       VAR_17 < VAR_10;
       VAR_17++, VAR_15 += VAR_18)
    {
      Elf64_Mips_Internal_Rela VAR_20;
      bfd_boolean VAR_21, VAR_22;
      int VAR_23;

      if (VAR_18 == sizeof (Elf64_Mips_External_Rela))
 FUNC_8 (VAR_7,
       (Elf64_Mips_External_Rela *) VAR_15,
       &VAR_20);
      else
 FUNC_7 (VAR_7,
      (Elf64_Mips_External_Rel *) VAR_15,
      &VAR_20);



      VAR_21 = VAR_3;
      VAR_22 = VAR_3;
      for (VAR_23 = 0; VAR_23 < 3; VAR_23++)
 {
   enum elf_mips_reloc_type VAR_24;

   switch (VAR_23)
     {
     default:
       FUNC_1 ();
     case 0:
       VAR_24 = (enum elf_mips_reloc_type) VAR_20.r_type;
       break;
     case 1:
       VAR_24 = (enum elf_mips_reloc_type) VAR_20.r_type2;
       break;
     case 2:
       VAR_24 = (enum elf_mips_reloc_type) VAR_20.r_type3;
       break;
     }


   switch (VAR_24)
     {
     case 128:
     case 129:
     case 131:
     case 130:
     case 132:
       VAR_16->sym_ptr_ptr = VAR_6->symbol_ptr_ptr;
       break;

     default:
       if (! VAR_21)
  {
    if (VAR_20.r_sym == 0)
      VAR_16->sym_ptr_ptr = VAR_6->symbol_ptr_ptr;
    else
      {
        asymbol **VAR_25, *VAR_26;

        VAR_25 = VAR_12 + VAR_20.r_sym - 1;
        VAR_26 = *VAR_25;
        if ((VAR_26->flags & VAR_0) == 0)
   VAR_16->sym_ptr_ptr = VAR_25;
        else
   VAR_16->sym_ptr_ptr = VAR_26->section->symbol_ptr_ptr;
      }

    VAR_21 = VAR_5;
  }
       else if (! VAR_22)
  {
    switch (VAR_20.r_ssym)
      {
      case 133:
        VAR_16->sym_ptr_ptr =
   VAR_6->symbol_ptr_ptr;
        break;

      case 136:
      case 135:
      case 134:


        FUNC_0 (0);
        break;

      default:
        FUNC_0 (0);
        break;
      }

    VAR_22 = VAR_5;
  }
       else
  VAR_16->sym_ptr_ptr = VAR_6->symbol_ptr_ptr;

       break;
     }





   if ((VAR_7->flags & (VAR_2 | VAR_1)) == 0 || VAR_13)
     VAR_16->address = VAR_20.r_offset;
   else
     VAR_16->address = VAR_20.r_offset - VAR_8->vma;

   VAR_16->addend = VAR_20.r_addend;

   VAR_16->howto = FUNC_6 (VAR_24, VAR_19);

   ++VAR_16;
 }
    }

  VAR_8->reloc_count += (VAR_16 - VAR_11) / 3;

  if (VAR_14 != ((void*)0))
    FUNC_5 (VAR_14);

  return VAR_5;

 error_return:
  if (VAR_14 != ((void*)0))
    FUNC_5 (VAR_14);
  return VAR_3;
}
