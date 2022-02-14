
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ia64_insn ;
typedef enum ia64_unit { ____Placeholder_ia64_unit } ia64_unit ;
typedef enum ia64_insn_type { ____Placeholder_ia64_insn_type } ia64_insn_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







__attribute__((used)) static enum ia64_insn_type
FUNC_1 (ia64_insn VAR_6, enum ia64_unit VAR_7)
{
  enum ia64_insn_type VAR_8;
  int VAR_9;

  VAR_9 = FUNC_0 (VAR_6);

  if (VAR_9 >= 8 && (VAR_7 == 131 || VAR_7 == 129))
    {
      VAR_8 = VAR_0;
    }
  else
    {
      switch (VAR_7)
 {
 case 131:
   VAR_8 = VAR_3; break;
 case 129:
   VAR_8 = VAR_4; break;
 case 133:
   VAR_8 = VAR_1; break;
 case 132:
   VAR_8 = VAR_2; break;
        case 130:
 case 128:
   VAR_8 = VAR_5; break;
 default:
   VAR_8 = -1;
 }
    }
  return VAR_8;
}
