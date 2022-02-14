
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_type ;


 unsigned int VAR_0 ;







 int FUNC_0 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_1, unsigned int VAR_2)
{
 static char VAR_3[32];

 switch (VAR_2) {
 case 131: return "STT_NOTYPE";
 case 130: return "STT_OBJECT";
 case 132: return "STT_FUNC";
 case 129: return "STT_SECTION";
 case 133: return "STT_FILE";
 case 134: return "STT_COMMON";
 case 128: return "STT_TLS";
 case 13:
  if (VAR_1 == VAR_0)
   return "STT_SPARC_REGISTER";
  break;
 }
 FUNC_0(VAR_3, sizeof(VAR_3), "<unknown: %#x>", VAR_2);
 return (VAR_3);
}
