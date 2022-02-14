
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {scalar_t__ mips_abi; } ;
struct disassemble_info {scalar_t__ mach; char* disassembler_options; int flavour; } ;
typedef scalar_t__ mips_extra_func_info_t ;
typedef int bfd_vma ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct gdbarch_tdep* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,struct disassemble_info*) ;
 int FUNC_7 (int,struct disassemble_info*) ;

__attribute__((used)) static int
FUNC_8 (bfd_vma VAR_7, struct disassemble_info *VAR_8)
{
  struct gdbarch_tdep *VAR_9 = FUNC_2 (VAR_6);
  mips_extra_func_info_t VAR_10;






  VAR_7 = FUNC_0 (VAR_7);
  VAR_10 = FUNC_4 (FUNC_3 (VAR_7), ((void*)0));
  if (VAR_10)
    {
      if (FUNC_5 (FUNC_1 (VAR_10)))
 VAR_8->mach = VAR_4;
    }
  else
    {
      if (FUNC_5 (VAR_7))
 VAR_8->mach = VAR_4;
    }


  VAR_7 &= (VAR_8->mach == VAR_4 ? ~1 : ~3);


  if (VAR_9->mips_abi == VAR_1 || VAR_9->mips_abi == VAR_2)
    {


      if (VAR_9->mips_abi == VAR_1)
 VAR_8->disassembler_options = "gpr-names=n32";
      else
 VAR_8->disassembler_options = "gpr-names=64";
      VAR_8->flavour = VAR_5;
    }
  else





    VAR_8->disassembler_options = "gpr-names=32";


  if (VAR_3 == VAR_0)
    return FUNC_6 (VAR_7, VAR_8);
  else
    return FUNC_7 (VAR_7, VAR_8);
}
