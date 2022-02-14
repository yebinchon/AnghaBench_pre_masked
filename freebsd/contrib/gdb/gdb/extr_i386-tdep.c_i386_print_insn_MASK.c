
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct disassemble_info {char* disassembler_options; int mach; } ;
typedef int bfd_vma ;
struct TYPE_2__ {int mach; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,struct disassemble_info*) ;

__attribute__((used)) static int
FUNC_3 (bfd_vma VAR_4, struct disassemble_info *VAR_5)
{
  FUNC_0 (VAR_2 == VAR_0
       || VAR_2 == VAR_3);



  VAR_5->disassembler_options = (char *) VAR_2;
  VAR_5->mach = FUNC_1 (VAR_1)->mach;

  return FUNC_2 (VAR_4, VAR_5);
}
