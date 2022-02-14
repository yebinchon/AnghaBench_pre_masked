
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;




 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_2 (unsigned int VAR_4)
{
  static char VAR_5 [32];

  switch (VAR_4)
    {
    case 131: return "NOTYPE";
    case 130: return "OBJECT";
    case 132: return "FUNC";
    case 129: return "SECTION";
    case 133: return "FILE";
    case 134: return "COMMON";
    case 128: return "TLS";
    default:
      if (VAR_4 >= VAR_3 && VAR_4 <= VAR_1)
 FUNC_1 (VAR_5, FUNC_0("<processor specific>: %d"), VAR_4);
      else if (VAR_4 >= VAR_2 && VAR_4 <= VAR_0)
 FUNC_1 (VAR_5, FUNC_0("<OS specific>: %d"), VAR_4);
      else
 FUNC_1 (VAR_5, FUNC_0("<unknown>: %d"), VAR_4);
      return VAR_5;
    }
}
