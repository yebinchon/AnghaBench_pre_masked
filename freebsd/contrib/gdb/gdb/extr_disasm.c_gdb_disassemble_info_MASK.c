
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct gdbarch {int dummy; } ;
struct disassemble_info {int endian; int mach; int arch; int read_memory_func; int print_address_func; int memory_error_func; int flavour; } ;
struct TYPE_2__ {int mach; int arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct gdbarch*) ;
 int FUNC_1 (struct gdbarch*) ;
 int FUNC_2 (struct disassemble_info*,struct ui_file*,int ) ;

__attribute__((used)) static struct disassemble_info
FUNC_3 (struct gdbarch *VAR_5, struct ui_file *VAR_6)
{
  struct disassemble_info VAR_7;
  FUNC_2 (&VAR_7, VAR_6, VAR_4);
  VAR_7.flavour = VAR_0;
  VAR_7.memory_error_func = VAR_1;
  VAR_7.print_address_func = VAR_2;
  VAR_7.read_memory_func = VAR_3;
  VAR_7.arch = FUNC_0 (VAR_5)->arch;
  VAR_7.mach = FUNC_0 (VAR_5)->mach;
  VAR_7.endian = FUNC_1 (VAR_5);
  return VAR_7;
}
