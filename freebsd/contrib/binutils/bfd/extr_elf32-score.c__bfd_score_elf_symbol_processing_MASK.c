
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int st_shndx; int st_size; } ;
struct TYPE_9__ {TYPE_1__ internal_elf_sym; } ;
typedef TYPE_2__ elf_symbol_type ;
typedef int bfd ;
struct TYPE_10__ {int value; TYPE_6__* section; } ;
typedef TYPE_3__ asymbol ;
struct TYPE_12__ {char* name; TYPE_4__** symbol_ptr_ptr; TYPE_4__* symbol; struct TYPE_12__* output_section; int flags; } ;
struct TYPE_11__ {char* name; TYPE_6__* section; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *) ;
 TYPE_6__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_4__* VAR_4 ;

__attribute__((used)) static void
FUNC_1 (bfd *VAR_5, asymbol *VAR_6)
{
  elf_symbol_type *VAR_7;

  VAR_7 = (elf_symbol_type *) VAR_6;
  switch (VAR_7->internal_elf_sym.st_shndx)
    {
    case 129:
      if (VAR_6->value > FUNC_0 (VAR_5))
        break;

    case 128:
      if (VAR_2.name == ((void*)0))
        {

          VAR_2.name = ".scommon";
          VAR_2.flags = VAR_1;
          VAR_2.output_section = &VAR_2;
          VAR_2.symbol = &VAR_3;
          VAR_2.symbol_ptr_ptr = &VAR_4;
          VAR_3.name = ".scommon";
          VAR_3.flags = VAR_0;
          VAR_3.section = &VAR_2;
          VAR_4 = &VAR_3;
        }
      VAR_6->section = &VAR_2;
      VAR_6->value = VAR_7->internal_elf_sym.st_size;
      break;
    }
}
