
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buff ;
struct TYPE_2__ {int e_machine; } ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 char* FUNC_0 (char*) ;
 TYPE_1__ VAR_6 ;
 char* FUNC_1 (unsigned int) ;
 char* FUNC_2 (unsigned int) ;
 char* FUNC_3 (unsigned int) ;
 char* FUNC_4 (unsigned int) ;
 char* FUNC_5 (unsigned int) ;
 int FUNC_6 (char*,int,char*,unsigned int) ;
 int FUNC_7 (char*,char*,int ) ;

__attribute__((used)) static const char *
FUNC_8 (unsigned int VAR_7)
{
  static char VAR_8[32];

  switch (VAR_7)
    {
    case 136: return "NULL";
    case 134: return "PROGBITS";
    case 129: return "SYMTAB";
    case 130: return "STRTAB";
    case 132: return "RELA";
    case 140: return "HASH";
    case 149: return "DYNAMIC";
    case 137: return "NOTE";
    case 138: return "NOBITS";
    case 133: return "REL";
    case 131: return "SHLIB";
    case 148: return "DYNSYM";
    case 139: return "INIT_ARRAY";
    case 147: return "FINI_ARRAY";
    case 135: return "PREINIT_ARRAY";
    case 146: return "GNU_HASH";
    case 141: return "GROUP";
    case 128: return "SYMTAB SECTION INDICIES";
    case 144: return "VERDEF";
    case 143: return "VERNEED";
    case 142: return "VERSYM";
    case 0x6ffffff0: return "VERSYM";
    case 0x6ffffffc: return "VERDEF";
    case 0x7ffffffd: return "AUXILIARY";
    case 0x7fffffff: return "FILTER";
    case 145: return "GNU_LIBLIST";

    default:
      if ((VAR_7 >= VAR_4) && (VAR_7 <= VAR_1))
 {
   const char *VAR_9;

   switch (VAR_6.e_machine)
     {
     case 153:
     case 152:
       VAR_9 = FUNC_3 (VAR_7);
       break;
     case 151:
       VAR_9 = FUNC_4 (VAR_7);
       break;
     case 154:
       VAR_9 = FUNC_2 (VAR_7);
       break;
     case 150:
       VAR_9 = FUNC_5 (VAR_7);
       break;
     case 155:
       VAR_9 = FUNC_1 (VAR_7);
       break;
     default:
       VAR_9 = ((void*)0);
       break;
     }

   if (VAR_9 != ((void*)0))
     return VAR_9;

   FUNC_7 (VAR_8, "LOPROC+%x", VAR_7 - VAR_4);
 }
      else if ((VAR_7 >= VAR_3) && (VAR_7 <= VAR_0))
 FUNC_7 (VAR_8, "LOOS+%x", VAR_7 - VAR_3);
      else if ((VAR_7 >= VAR_5) && (VAR_7 <= VAR_2))
 FUNC_7 (VAR_8, "LOUSER+%x", VAR_7 - VAR_5);
      else
 FUNC_6 (VAR_8, sizeof (VAR_8), FUNC_0("<unknown>: %x"), VAR_7);

      return VAR_8;
    }
}
