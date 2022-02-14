
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_0)
{
 switch (VAR_0) {
 case 1: return "NT_PRSTATUS";
 case 2: return "NT_FPREGSET";
 case 3: return "NT_PRPSINFO";
 case 7: return "NT_THRMISC";
 case 8: return "NT_PROCSTAT_PROC";
 case 9: return "NT_PROCSTAT_FILES";
 case 10: return "NT_PROCSTAT_VMMAP";
 case 11: return "NT_PROCSTAT_GROUPS";
 case 12: return "NT_PROCSTAT_UMASK";
 case 13: return "NT_PROCSTAT_RLIMIT";
 case 14: return "NT_PROCSTAT_OSREL";
 case 15: return "NT_PROCSTAT_PSSTRINGS";
 case 16: return "NT_PROCSTAT_AUXV";
 case 17: return "NT_PTLWPINFO";
 case 0x202: return "NT_X86_XSTATE (x86 XSAVE extended state)";
 case 0x400: return "NT_ARM_VFP (arm VFP registers)";
 default: return (FUNC_0(VAR_0));
 }
}
