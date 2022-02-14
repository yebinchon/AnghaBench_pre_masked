
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buff ;
struct TYPE_2__ {scalar_t__ e_type; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_2 (unsigned VAR_2)
{
  static char VAR_3[64];

  if (VAR_1.e_type == VAR_0)
    switch (VAR_2)
      {
      case 142:
 return FUNC_0("NT_AUXV (auxiliary vector)");
      case 135:
 return FUNC_0("NT_PRSTATUS (prstatus structure)");
      case 139:
 return FUNC_0("NT_FPREGSET (floating point registers)");
      case 136:
 return FUNC_0("NT_PRPSINFO (prpsinfo structure)");
      case 130:
 return FUNC_0("NT_TASKSTRUCT (task structure)");
      case 134:
 return FUNC_0("NT_PRXFPREG (user_xfpregs structure)");
      case 132:
 return FUNC_0("NT_PSTATUS (pstatus structure)");
      case 140:
 return FUNC_0("NT_FPREGS (floating point registers)");
      case 133:
 return FUNC_0("NT_PSINFO (psinfo structure)");
      case 137:
 return FUNC_0("NT_LWPSTATUS (lwpstatus_t structure)");
      case 138:
 return FUNC_0("NT_LWPSINFO (lwpsinfo_t structure)");
      case 128:
 return FUNC_0("NT_WIN32PSTATUS (win32_pstatus structure)");
      case 141:
        return FUNC_0("NT_FILE");
      case 131:
        return FUNC_0("NT_SIGINFO");
      default:
 break;
      }
  else
    switch (VAR_2)
      {
      case 129:
 return FUNC_0("NT_VERSION (version)");
      case 143:
 return FUNC_0("NT_ARCH (architecture)");
      default:
 break;
      }

  FUNC_1 (VAR_3, sizeof (VAR_3), FUNC_0("Unknown note type: (0x%08x)"), VAR_2);
  return VAR_3;
}
