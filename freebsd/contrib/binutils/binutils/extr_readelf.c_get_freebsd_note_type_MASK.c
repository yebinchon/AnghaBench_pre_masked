
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
 char const* FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_3 (unsigned VAR_2)
{
  static char VAR_3[64];

  if (VAR_1.e_type == VAR_0)
    switch (VAR_2)
      {
      case 129:
 return FUNC_0("NT_THRMISC (thrmisc structure)");
      case 134:
 return FUNC_0("NT_PROCSTAT_PROC (proc data)");
      case 137:
 return FUNC_0("NT_PROCSTAT_FILES (files data)");
      case 130:
 return FUNC_0("NT_PROCSTAT_VMMAP (vmmap data)");
      case 136:
 return FUNC_0("NT_PROCSTAT_GROUPS (groups data)");
      case 131:
 return FUNC_0("NT_PROCSTAT_UMASK (umask data)");
      case 132:
 return FUNC_0("NT_PROCSTAT_RLIMIT (rlimit data)");
      case 135:
 return FUNC_0("NT_PROCSTAT_OSREL (osreldate data)");
      case 133:
 return FUNC_0("NT_PROCSTAT_PSSTRINGS (ps_strings data)");
      case 138:
 return FUNC_0("NT_PROCSTAT_AUXV (auxv data)");
      case 128:
 return FUNC_0("NT_X86_XSTATE (x86 XSAVE extended state)");
      default:
 return FUNC_1(VAR_2);
      }
  else
    switch (VAR_2)
      {
      case 141:
 return FUNC_0("NT_FREEBSD_ABI_TAG");
      case 139:
 return FUNC_0("NT_FREEBSD_NOINIT_TAG");
      case 140:
 return FUNC_0("NT_FREEBSD_ARCH_TAG");
      default:
 break;
      }

  FUNC_2 (VAR_3, sizeof(VAR_3), FUNC_0("Unknown note type: (0x%08x)"), VAR_2);
  return VAR_3;
}
