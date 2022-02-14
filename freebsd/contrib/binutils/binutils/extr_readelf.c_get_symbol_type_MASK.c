
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buff ;
struct TYPE_2__ {int e_machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;



 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;


 unsigned int VAR_10 ;
 unsigned int VAR_11 ;




 char* FUNC_0 (char*) ;
 TYPE_1__ VAR_12 ;
 int FUNC_1 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_2 (unsigned int VAR_13)
{
  static char VAR_14[32];

  switch (VAR_13)
    {
    case 133: return "NOTYPE";
    case 132: return "OBJECT";
    case 134: return "FUNC";
    case 130: return "SECTION";
    case 135: return "FILE";
    case 136: return "COMMON";
    case 128: return "TLS";
    case 131: return "RELC";
    case 129: return "SRELC";
    default:
      if (VAR_13 >= VAR_9 && VAR_13 <= VAR_5)
 {
   if (VAR_12.e_machine == VAR_0 && VAR_13 == VAR_3)
     return "THUMB_FUNC";

   if (VAR_12.e_machine == VAR_2 && VAR_13 == VAR_11)
     return "REGISTER";

   if (VAR_12.e_machine == VAR_1 && VAR_13 == VAR_10)
     return "PARISC_MILLI";

   FUNC_1 (VAR_14, sizeof (VAR_14), FUNC_0("<processor specific>: %d"), VAR_13);
 }
      else if (VAR_13 >= VAR_8 && VAR_13 <= VAR_4)
 {
   if (VAR_12.e_machine == VAR_1)
     {
       if (VAR_13 == VAR_6)
  return "HP_OPAQUE";
       if (VAR_13 == VAR_7)
  return "HP_STUB";
     }

   FUNC_1 (VAR_14, sizeof (VAR_14), FUNC_0("<OS specific>: %d"), VAR_13);
 }
      else
 FUNC_1 (VAR_14, sizeof (VAR_14), FUNC_0("<unknown>: %d"), VAR_13);
      return VAR_14;
    }
}
