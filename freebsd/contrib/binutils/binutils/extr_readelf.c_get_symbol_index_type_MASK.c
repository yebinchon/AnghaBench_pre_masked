
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int e_machine; int * e_ident; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;

 unsigned int VAR_14 ;
 TYPE_1__ VAR_15 ;
 int FUNC_0 (char*,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_1 (unsigned int VAR_16)
{
  static char VAR_17[32];

  switch (VAR_16)
    {
    case 128: return "UND";
    case 130: return "ABS";
    case 129: return "COM";
    default:
      if (VAR_16 == VAR_8
   && VAR_15.e_machine == VAR_2
   && VAR_15.e_ident[VAR_0] == VAR_1)
 return "ANSI_COM";
      else if (VAR_15.e_machine == VAR_4
        && VAR_16 == VAR_14)
 return "LARGE_COM";
      else if (VAR_16 == VAR_12
        && VAR_15.e_machine == VAR_3)
 return "SCOM";
      else if (VAR_16 == VAR_13
        && VAR_15.e_machine == VAR_3)
 return "SUND";
      else if (VAR_16 >= VAR_10 && VAR_16 <= VAR_6)
 FUNC_0 (VAR_17, "PRC[0x%04x]", VAR_16);
      else if (VAR_16 >= VAR_9 && VAR_16 <= VAR_5)
 FUNC_0 (VAR_17, "OS [0x%04x]", VAR_16);
      else if (VAR_16 >= VAR_11 && VAR_16 <= VAR_7)
 FUNC_0 (VAR_17, "RSV[0x%04x]", VAR_16);
      else
 FUNC_0 (VAR_17, "%3d", VAR_16);
      break;
    }

  return VAR_17;
}
