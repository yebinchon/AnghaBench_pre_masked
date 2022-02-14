
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
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;



 unsigned int VAR_8 ;

 int FUNC_0 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_9, unsigned int VAR_10, unsigned int VAR_11)
{
 static char VAR_12[32];

 switch (VAR_11) {
 case 131: return "NOTYPE";
 case 130: return "OBJECT";
 case 132: return "FUNC";
 case 129: return "SECTION";
 case 133: return "FILE";
 case 134: return "COMMON";
 case 128: return "TLS";
 default:
  if (VAR_11 >= VAR_6 && VAR_11 <= VAR_4) {
   if ((VAR_10 == VAR_1 || VAR_10 == VAR_0) &&
       VAR_11 == VAR_3)
    return "IFUNC";
   FUNC_0(VAR_12, sizeof(VAR_12), "OS+%#x",
       VAR_11 - VAR_6);
  } else if (VAR_11 >= VAR_7 && VAR_11 <= VAR_5) {
   if (VAR_9 == VAR_2 && VAR_11 == VAR_8)
    return "REGISTER";
   FUNC_0(VAR_12, sizeof(VAR_12), "PROC+%#x",
       VAR_11 - VAR_7);
  } else
   FUNC_0(VAR_12, sizeof(VAR_12), "<unknown: %#x>",
       VAR_11);
  return (VAR_12);
 }
}
