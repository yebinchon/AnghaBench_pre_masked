
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





 char* FUNC_0 (char*) ;
 TYPE_1__ VAR_4 ;
 char* FUNC_1 (unsigned long) ;
 char* FUNC_2 (unsigned long) ;
 char* FUNC_3 (unsigned long) ;
 char* FUNC_4 (unsigned long) ;
 int FUNC_5 (char*,int,char*,unsigned long) ;
 int FUNC_6 (char*,char*,int ) ;

__attribute__((used)) static const char *
FUNC_7 (unsigned long VAR_5)
{
  static char VAR_6[32];

  switch (VAR_5)
    {
    case 131: return "NULL";
    case 133: return "LOAD";
    case 138: return "DYNAMIC";
    case 134: return "INTERP";
    case 132: return "NOTE";
    case 129: return "SHLIB";
    case 130: return "PHDR";
    case 128: return "TLS";

    case 137:
   return "GNU_EH_FRAME";
    case 135: return "GNU_STACK";
    case 136: return "GNU_RELRO";

    default:
      if ((VAR_5 >= VAR_3) && (VAR_5 <= VAR_1))
 {
   const char *VAR_7;

   switch (VAR_4.e_machine)
     {
     case 143:
       VAR_7 = FUNC_1 (VAR_5);
       break;
     case 141:
     case 140:
       VAR_7 = FUNC_3 (VAR_5);
       break;
     case 139:
       VAR_7 = FUNC_4 (VAR_5);
       break;
     case 142:
       VAR_7 = FUNC_2 (VAR_5);
       break;
     default:
       VAR_7 = ((void*)0);
       break;
     }

   if (VAR_7 != ((void*)0))
     return VAR_7;

   FUNC_6 (VAR_6, "LOPROC+%lx", VAR_5 - VAR_3);
 }
      else if ((VAR_5 >= VAR_2) && (VAR_5 <= VAR_0))
 {
   const char *VAR_8;

   switch (VAR_4.e_machine)
     {
     case 139:
       VAR_8 = FUNC_4 (VAR_5);
       break;
     case 142:
       VAR_8 = FUNC_2 (VAR_5);
       break;
     default:
       VAR_8 = ((void*)0);
       break;
     }

   if (VAR_8 != ((void*)0))
     return VAR_8;

   FUNC_6 (VAR_6, "LOOS+%lx", VAR_5 - VAR_2);
 }
      else
 FUNC_5 (VAR_6, sizeof (VAR_6), FUNC_0("<unknown>: %lx"), VAR_5);

      return VAR_6;
    }
}
