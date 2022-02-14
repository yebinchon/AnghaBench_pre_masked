
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int st_shndx; int st_size; int st_info; } ;
struct TYPE_15__ {TYPE_1__ internal_elf_sym; } ;
typedef TYPE_2__ elf_symbol_type ;
typedef int bfd ;
struct TYPE_16__ {int value; TYPE_4__* section; } ;
typedef TYPE_3__ asymbol ;
struct TYPE_17__ {char* name; int vma; TYPE_5__** symbol_ptr_ptr; TYPE_5__* symbol; struct TYPE_17__* output_section; int flags; } ;
typedef TYPE_4__ asection ;
struct TYPE_18__ {char* name; TYPE_4__* section; void* flags; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;






 int VAR_3 ;
 TYPE_4__* FUNC_4 (int *,char*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_5__ VAR_7 ;
 TYPE_5__* VAR_8 ;
 TYPE_4__ VAR_9 ;
 TYPE_5__ VAR_10 ;
 TYPE_5__* VAR_11 ;

void
FUNC_6 (bfd *VAR_12, asymbol *VAR_13)
{
  elf_symbol_type *VAR_14;

  VAR_14 = (elf_symbol_type *) VAR_13;
  switch (VAR_14->internal_elf_sym.st_shndx)
    {
    case 132:





      if (VAR_6.name == ((void*)0))
 {

   VAR_6.name = ".acommon";
   VAR_6.flags = VAR_1;
   VAR_6.output_section = &VAR_6;
   VAR_6.symbol = &VAR_7;
   VAR_6.symbol_ptr_ptr = &VAR_8;
   VAR_7.name = ".acommon";
   VAR_7.flags = VAR_0;
   VAR_7.section = &VAR_6;
   VAR_8 = &VAR_7;
 }
      VAR_13->section = &VAR_6;
      break;

    case 133:


      if (VAR_13->value > FUNC_5 (VAR_12)
   || FUNC_1 (VAR_14->internal_elf_sym.st_info) == VAR_3
   || FUNC_2 (VAR_12) == VAR_5)
 break;

    case 130:
      if (VAR_9.name == ((void*)0))
 {

   VAR_9.name = ".scommon";
   VAR_9.flags = VAR_2;
   VAR_9.output_section = &VAR_9;
   VAR_9.symbol = &VAR_10;
   VAR_9.symbol_ptr_ptr = &VAR_11;
   VAR_10.name = ".scommon";
   VAR_10.flags = VAR_0;
   VAR_10.section = &VAR_9;
   VAR_11 = &VAR_10;
 }
      VAR_13->section = &VAR_9;
      VAR_13->value = VAR_14->internal_elf_sym.st_size;
      break;

    case 129:
      VAR_13->section = VAR_4;
      break;

    case 128:
      {
 asection *VAR_15 = FUNC_4 (VAR_12, ".text");

 FUNC_0 (FUNC_3 (VAR_12));
 if (VAR_15 != ((void*)0))
   {
     VAR_13->section = VAR_15;



     VAR_13->value -= VAR_15->vma;
   }
      }
      break;

    case 131:
      {
 asection *VAR_16 = FUNC_4 (VAR_12, ".data");

 FUNC_0 (FUNC_3 (VAR_12));
 if (VAR_16 != ((void*)0))
   {
     VAR_13->section = VAR_16;



     VAR_13->value -= VAR_16->vma;
   }
      }
      break;
    }
}
