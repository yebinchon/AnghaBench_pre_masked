
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct disassemble_info {scalar_t__ mach; scalar_t__ flavour; int (* read_memory_func ) (int,int *,int,struct disassemble_info*) ;int (* memory_error_func ) (int,int,struct disassemble_info*) ;int * symbols; int disassembler_options; } ;
typedef enum bfd_endian { ____Placeholder_bfd_endian } bfd_endian ;
struct TYPE_3__ {scalar_t__ st_other; } ;
struct TYPE_4__ {TYPE_1__ internal_elf_sym; } ;
typedef TYPE_2__ elf_symbol_type ;
typedef int bfd_vma ;
typedef int bfd_byte ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,unsigned long,struct disassemble_info*) ;
 int FUNC_4 (int,struct disassemble_info*) ;
 int FUNC_5 (struct disassemble_info*) ;
 int FUNC_6 (int,int *,int,struct disassemble_info*) ;
 int FUNC_7 (int,int,struct disassemble_info*) ;

__attribute__((used)) static int
FUNC_8 (bfd_vma VAR_5,
    struct disassemble_info *VAR_6,
    enum bfd_endian VAR_7)
{
  bfd_byte VAR_8[VAR_1];
  int VAR_9;

  FUNC_5 (VAR_6);
  FUNC_2 (VAR_6->disassembler_options);




  if (VAR_5 & 0x01)
    return FUNC_4 (VAR_5, VAR_6);
  VAR_9 = (*VAR_6->read_memory_func) (VAR_5, VAR_8, VAR_1, VAR_6);
  if (VAR_9 == 0)
    {
      unsigned long VAR_10;

      if (VAR_7 == VAR_0)
 VAR_10 = (unsigned long) FUNC_0 (VAR_8);
      else
 VAR_10 = (unsigned long) FUNC_1 (VAR_8);

      return FUNC_3 (VAR_5, VAR_10, VAR_6);
    }
  else
    {
      (*VAR_6->memory_error_func) (VAR_9, VAR_5, VAR_6);
      return -1;
    }
}
