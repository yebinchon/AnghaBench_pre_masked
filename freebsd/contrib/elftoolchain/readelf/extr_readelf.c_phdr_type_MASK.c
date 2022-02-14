
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_ptype ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;


 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_4, unsigned int VAR_5)
{
 static char VAR_6[32];

 if (VAR_5 >= VAR_3 && VAR_5 <= VAR_1) {
  switch (VAR_4) {
  case 144:
   switch (VAR_5) {
   case 143: return "ARM_ARCHEXT";
   case 142: return "ARM_EXIDX";
   }
   break;
  }
  FUNC_0(VAR_6, sizeof(VAR_6), "LOPROC+%#x",
      VAR_5 - VAR_3);
  return (VAR_6);
 }

 switch (VAR_5) {
 case 134: return "NULL";
 case 136: return "LOAD";
 case 141: return "DYNAMIC";
 case 137: return "INTERP";
 case 135: return "NOTE";
 case 129: return "SHLIB";
 case 130: return "PHDR";
 case 128: return "TLS";
 case 140: return "GNU_EH_FRAME";
 case 138: return "GNU_STACK";
 case 139: return "GNU_RELRO";
 case 132: return "OPENBSD_RANDOMIZE";
 case 131: return "OPENBSD_WXNEEDED";
 case 133: return "OPENBSD_BOOTDATA";
 default:
  if (VAR_5 >= VAR_2 && VAR_5 <= VAR_0)
   FUNC_0(VAR_6, sizeof(VAR_6), "LOOS+%#x",
       VAR_5 - VAR_2);
  else
   FUNC_0(VAR_6, sizeof(VAR_6), "<unknown: %#x>",
       VAR_5);
  return (VAR_6);
 }
}
