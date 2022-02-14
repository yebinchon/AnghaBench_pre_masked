
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_type ;
 int FUNC_0 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_0)
{
 static char VAR_1[32];

 switch (VAR_0) {
 case 134: return "PT_NULL";
 case 136: return "PT_LOAD";
 case 141: return "PT_DYNAMIC";
 case 137: return "PT_INTERP";
 case 135: return "PT_NOTE";
 case 129: return "PT_SHLIB";
 case 130: return "PT_PHDR";
 case 128: return "PT_TLS";
 case 140: return "PT_GNU_EH_FRAME";
 case 138: return "PT_GNU_STACK";
 case 139: return "PT_GNU_RELRO";
 case 132: return "PT_OPENBSD_RANDOMIZE";
 case 131: return "PT_OPENBSD_WXNEEDED";
 case 133: return "PT_OPENBSD_BOOTDATA";
 }
 FUNC_0(VAR_1, sizeof(VAR_1), "<unknown: %#x>", VAR_0);
 return (VAR_1);
}
