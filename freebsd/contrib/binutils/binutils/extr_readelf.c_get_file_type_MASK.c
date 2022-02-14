
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,unsigned int) ;

__attribute__((used)) static char *
FUNC_2 (unsigned VAR_4)
{
  static char VAR_5[32];

  switch (VAR_4)
    {
    case 129: return FUNC_0("NONE (None)");
    case 128: return FUNC_0("REL (Relocatable file)");
    case 130: return FUNC_0("EXEC (Executable file)");
    case 131: return FUNC_0("DYN (Shared object file)");
    case 132: return FUNC_0("CORE (Core file)");

    default:
      if ((VAR_4 >= VAR_3) && (VAR_4 <= VAR_1))
 FUNC_1 (VAR_5, sizeof (VAR_5), FUNC_0("Processor Specific: (%x)"), VAR_4);
      else if ((VAR_4 >= VAR_2) && (VAR_4 <= VAR_0))
 FUNC_1 (VAR_5, sizeof (VAR_5), FUNC_0("OS Specific: (%x)"), VAR_4);
      else
 FUNC_1 (VAR_5, sizeof (VAR_5), FUNC_0("<unknown>: %x"), VAR_4);
      return VAR_5;
    }
}
