
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ehdr64 ;
typedef int ehdr32 ;
typedef int bfd_vma ;
struct TYPE_6__ {int* e_ident; scalar_t__ e_type; void* e_shoff; void* e_shstrndx; void* e_shnum; void* e_shentsize; void* e_phnum; void* e_phentsize; void* e_ehsize; void* e_flags; void* e_phoff; void* e_entry; void* e_version; void* e_machine; } ;
struct TYPE_5__ {int* e_type; int* e_machine; int* e_version; int* e_entry; int* e_phoff; int* e_shoff; int* e_flags; int* e_ehsize; int* e_phentsize; int* e_phnum; int* e_shentsize; int* e_shnum; int* e_shstrndx; } ;
struct TYPE_4__ {int* e_type; int* e_machine; int* e_version; int* e_entry; int* e_phoff; int* e_shoff; int* e_flags; int* e_ehsize; int* e_phentsize; int* e_phnum; int* e_shentsize; int* e_shnum; int* e_shstrndx; } ;
typedef int FILE ;
typedef TYPE_1__ Elf64_External_Ehdr ;
typedef TYPE_2__ Elf32_External_Ehdr ;


 void* FUNC_0 (int*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,scalar_t__,int,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_6 (FILE *VAR_14)
{

  if (FUNC_3 (VAR_11.e_ident, VAR_2, 1, VAR_14) != 1)
    return 0;


  switch (VAR_11.e_ident[VAR_1])
    {
    default:
    case 128:
    case 130:
      VAR_5 = VAR_7;
      VAR_8 = VAR_10;
      break;
    case 129:
      VAR_5 = VAR_6;
      VAR_8 = VAR_9;
      break;
    }


  VAR_12 = (VAR_11.e_ident[VAR_0] != VAR_3);


  if (VAR_12)
    {
      Elf32_External_Ehdr VAR_15;

      if (FUNC_3 (VAR_15, sizeof (VAR_15) - VAR_2, 1, VAR_14) != 1)
 return 0;

      VAR_11.e_type = FUNC_0 (VAR_15);
      VAR_11.e_machine = FUNC_0 (VAR_15);
      VAR_11.e_version = FUNC_0 (VAR_15);
      VAR_11.e_entry = FUNC_0 (VAR_15);
      VAR_11.e_phoff = FUNC_0 (VAR_15);
      VAR_11.e_shoff = FUNC_0 (VAR_15);
      VAR_11.e_flags = FUNC_0 (VAR_15);
      VAR_11.e_ehsize = FUNC_0 (VAR_15);
      VAR_11.e_phentsize = FUNC_0 (VAR_15);
      VAR_11.e_phnum = FUNC_0 (VAR_15);
      VAR_11.e_shentsize = FUNC_0 (VAR_15);
      VAR_11.e_shnum = FUNC_0 (VAR_15);
      VAR_11.e_shstrndx = FUNC_0 (VAR_15);
    }
  else
    {
      Elf64_External_Ehdr VAR_16;





      if (sizeof (bfd_vma) < 8)
 {
   FUNC_2 (FUNC_1("This instance of readelf has been built without support for a\n64 bit data type and so it cannot read 64 bit ELF files.\n"));

   return 0;
 }

      if (FUNC_3 (VAR_16, sizeof (VAR_16) - VAR_2, 1, VAR_14) != 1)
 return 0;

      VAR_11.e_type = FUNC_0 (VAR_16);
      VAR_11.e_machine = FUNC_0 (VAR_16);
      VAR_11.e_version = FUNC_0 (VAR_16);
      VAR_11.e_entry = FUNC_0 (VAR_16);
      VAR_11.e_phoff = FUNC_0 (VAR_16);
      VAR_11.e_shoff = FUNC_0 (VAR_16);
      VAR_11.e_flags = FUNC_0 (VAR_16);
      VAR_11.e_ehsize = FUNC_0 (VAR_16);
      VAR_11.e_phentsize = FUNC_0 (VAR_16);
      VAR_11.e_phnum = FUNC_0 (VAR_16);
      VAR_11.e_shentsize = FUNC_0 (VAR_16);
      VAR_11.e_shnum = FUNC_0 (VAR_16);
      VAR_11.e_shstrndx = FUNC_0 (VAR_16);
    }

  if (VAR_11.e_shoff)
    {


      if (VAR_12)
 FUNC_4 (VAR_14, 1);
      else
 FUNC_5 (VAR_14, 1);
    }

  VAR_13 = VAR_11.e_type == VAR_4;

  return 1;
}
