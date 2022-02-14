
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int (* print_insn ) (int ,struct disassemble_info*) ;} ;
struct disassemble_info {int dummy; } ;
typedef int bfd_vma ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct disassemble_info*) ;

int
FUNC_3 (struct gdbarch *VAR_2, bfd_vma VAR_3, struct disassemble_info *VAR_4)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->print_insn != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_print_insn called\n");
  return VAR_2->print_insn (VAR_3, VAR_4);
}
