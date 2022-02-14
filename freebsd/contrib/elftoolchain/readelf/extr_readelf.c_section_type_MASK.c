
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_stype ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_5, unsigned int VAR_6)
{
 static char VAR_7[32];

 if (VAR_6 >= VAR_3 && VAR_6 <= VAR_1) {
  switch (VAR_5) {
  case 195:
   switch (VAR_6) {
   case 189: return "ARM_EXIDX";
   case 187: return "ARM_PREEMPTMAP";
   case 191: return "ARM_ATTRIBUTES";
   case 190: return "ARM_DEBUGOVERLAY";
   case 188: return "ARM_OVERLAYSECTION";
   }
   break;
  case 192:
   switch (VAR_6) {
   case 128: return "X86_64_UNWIND";
   default:
    break;
   }
   break;
  case 194:
  case 193:
   switch (VAR_6) {
   case 166: return "MIPS_LIBLIST";
   case 165: return "MIPS_MSYM";
   case 178: return "MIPS_CONFLICT";
   case 168: return "MIPS_GPTAB";
   case 155: return "MIPS_UCODE";
   case 176: return "MIPS_DEBUG";
   case 159: return "MIPS_REGINFO";
   case 163: return "MIPS_PACKAGE";
   case 162: return "MIPS_PACKSYM";
   case 158: return "MIPS_RELD";
   case 167: return "MIPS_IFACE";
   case 177: return "MIPS_CONTENT";
   case 164: return "MIPS_OPTIONS";
   case 172: return "MIPS_DELTASYM";
   case 173: return "MIPS_DELTAINST";
   case 175: return "MIPS_DELTACLASS";
   case 171: return "MIPS_DWARF";
   case 174: return "MIPS_DELTADECL";
   case 157: return "MIPS_SYMBOL_LIB";
   case 169: return "MIPS_EVENTS";
   case 156: return "MIPS_TRANSLATE";
   case 160: return "MIPS_PIXIE";
   case 153: return "MIPS_XLATE";
   case 152: return "MIPS_XLATE_DEBUG";
   case 154: return "MIPS_WHIRL";
   case 170: return "MIPS_EH_REGION";
   case 151: return "MIPS_XLATE_OLD";
   case 161: return "MIPS_PDR_EXCEPTION";
   case 179: return "MIPS_ABIFLAGS";
   default:
    break;
   }
   break;
  default:
   break;
  }

  FUNC_0(VAR_7, sizeof(VAR_7), "LOPROC+%#x",
      VAR_6 - VAR_3);
  return (VAR_7);
 }

 switch (VAR_6) {
 case 148: return "NULL";
 case 146: return "PROGBITS";
 case 130: return "SYMTAB";
 case 142: return "STRTAB";
 case 144: return "RELA";
 case 181: return "HASH";
 case 186: return "DYNAMIC";
 case 149: return "NOTE";
 case 150: return "NOBITS";
 case 145: return "REL";
 case 143: return "SHLIB";
 case 185: return "DYNSYM";
 case 180: return "INIT_ARRAY";
 case 184: return "FINI_ARRAY";
 case 147: return "PREINIT_ARRAY";
 case 182: return "GROUP";
 case 129: return "SYMTAB_SHNDX";
 case 136: return "SUNW_dof";
 case 137: return "SUNW_cap";
 case 183: return "GNU_HASH";
 case 141: return "SUNW_ANNOTATE";
 case 138: return "SUNW_DEBUGSTR";
 case 139: return "SUNW_DEBUG";
 case 135: return "SUNW_move";
 case 140: return "SUNW_COMDAT";
 case 134: return "SUNW_syminfo";
 case 133: return "SUNW_verdef";
 case 132: return "SUNW_verneed";
 case 131: return "SUNW_versym";
 default:
  if (VAR_6 >= VAR_2 && VAR_6 <= VAR_0)
   FUNC_0(VAR_7, sizeof(VAR_7), "LOOS+%#x",
       VAR_6 - VAR_2);
  else if (VAR_6 >= VAR_4)
   FUNC_0(VAR_7, sizeof(VAR_7), "LOUSER+%#x",
       VAR_6 - VAR_4);
  else
   FUNC_0(VAR_7, sizeof(VAR_7), "<unknown: %#x>",
       VAR_6);
  return (VAR_7);
 }
}
