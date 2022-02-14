
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buff ;
struct TYPE_2__ {int e_machine; } ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;




 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 char* FUNC_0 (char*) ;
 TYPE_1__ VAR_6 ;
 char* FUNC_1 (unsigned long) ;
 char* FUNC_2 (unsigned long) ;
 char* FUNC_3 (unsigned long) ;
 char* FUNC_4 (unsigned long) ;
 char* FUNC_5 (unsigned long) ;
 char* FUNC_6 (unsigned long) ;
 char* FUNC_7 (unsigned long) ;
 char* FUNC_8 (unsigned long) ;
 int FUNC_9 (char*,int,char*,unsigned long) ;

__attribute__((used)) static const char *
FUNC_10 (unsigned long VAR_7)
{
  static char VAR_8[64];

  switch (VAR_7)
    {
    case 173: return "NULL";
    case 174: return "NEEDED";
    case 168: return "PLTRELSZ";
    case 172: return "PLTGOT";
    case 182: return "HASH";
    case 152: return "STRTAB";
    case 146: return "SYMTAB";
    case 163: return "RELA";
    case 160: return "RELASZ";
    case 161: return "RELAENT";
    case 153: return "STRSZ";
    case 150: return "SYMENT";
    case 181: return "INIT";
    case 193: return "FINI";
    case 154: return "SONAME";
    case 156: return "RPATH";
    case 151: return "SYMBOLIC";
    case 164: return "REL";
    case 157: return "RELSZ";
    case 158: return "RELENT";
    case 169: return "PLTREL";
    case 197: return "DEBUG";
    case 145: return "TEXTREL";
    case 178: return "JMPREL";
    case 200: return "BIND_NOW";
    case 180: return "INIT_ARRAY";
    case 192: return "FINI_ARRAY";
    case 179: return "INIT_ARRAYSZ";
    case 191: return "FINI_ARRAYSZ";
    case 155: return "RUNPATH";
    case 190: return "FLAGS";

    case 166: return "PREINIT_ARRAY";
    case 165: return "PREINIT_ARRAYSZ";

    case 199: return "CHECKSUM";
    case 170: return "PLTPADSZ";
    case 177: return "MOVEENT";
    case 176: return "MOVESZ";
    case 195: return "FEATURE";
    case 167: return "POSFLAG_1";
    case 147: return "SYMINSZ";
    case 149: return "SYMINENT";

    case 203: return "ADDRRNGLO";
    case 198: return "CONFIG";
    case 196: return "DEPAUDIT";
    case 202: return "AUDIT";
    case 171: return "PLTPAD";
    case 175: return "MOVETAB";
    case 148: return "SYMINFO";

    case 137: return "VERSYM";

    case 144: return "TLSDESC_GOT";
    case 143: return "TLSDESC_PLT";
    case 162: return "RELACOUNT";
    case 159: return "RELCOUNT";
    case 189: return "FLAGS_1";
    case 141: return "VERDEF";
    case 140: return "VERDEFNUM";
    case 139: return "VERNEED";
    case 138: return "VERNEEDNUM";

    case 201: return "AUXILIARY";
    case 142: return "USED";
    case 194: return "FILTER";

    case 183: return "GNU_PRELINKED";
    case 188: return "GNU_CONFLICT";
    case 187: return "GNU_CONFLICTSZ";
    case 185: return "GNU_LIBLIST";
    case 184: return "GNU_LIBLISTSZ";
    case 186: return "GNU_HASH";

    default:
      if ((VAR_7 >= VAR_3) && (VAR_7 <= VAR_1))
 {
   const char *VAR_9;

   switch (VAR_6.e_machine)
     {
     case 134:
     case 133:
       VAR_9 = FUNC_3 (VAR_7);
       break;
     case 128:
       VAR_9 = FUNC_8 (VAR_7);
       break;
     case 131:
       VAR_9 = FUNC_6 (VAR_7);
       break;
     case 130:
       VAR_9 = FUNC_5 (VAR_7);
       break;
     case 135:
       VAR_9 = FUNC_2 (VAR_7);
       break;
     case 136:
       VAR_9 = FUNC_1 (VAR_7);
       break;
     case 129:
       VAR_9 = FUNC_7 (VAR_7);
       break;
     default:
       VAR_9 = ((void*)0);
       break;
     }

   if (VAR_9 != ((void*)0))
     return VAR_9;

   FUNC_9 (VAR_8, sizeof (VAR_8), FUNC_0("Processor Specific: %lx"), VAR_7);
 }
      else if (((VAR_7 >= VAR_2) && (VAR_7 <= VAR_0))
        || (VAR_6.e_machine == 132
     && (VAR_7 >= VAR_5) && (VAR_7 <= VAR_4)))
 {
   const char *VAR_10;

   switch (VAR_6.e_machine)
     {
     case 132:
       VAR_10 = FUNC_4 (VAR_7);
       break;
     default:
       VAR_10 = ((void*)0);
       break;
     }

   if (VAR_10 != ((void*)0))
     return VAR_10;

   FUNC_9 (VAR_8, sizeof (VAR_8), FUNC_0("Operating System specific: %lx"),
      VAR_7);
 }
      else
 FUNC_9 (VAR_8, sizeof (VAR_8), FUNC_0("<unknown>: %lx"), VAR_7);

      return VAR_8;
    }
}
