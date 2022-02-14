
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_sbind ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

 int FUNC_0 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_4)
{
 static char VAR_5[32];

 switch (VAR_4) {
 case 129: return "LOCAL";
 case 131: return "GLOBAL";
 case 128: return "WEAK";
 case 130: return "UNIQUE";
 default:
  if (VAR_4 >= VAR_2 && VAR_4 <= VAR_0)
   return "OS";
  else if (VAR_4 >= VAR_3 && VAR_4 <= VAR_1)
   return "PROC";
  else
   FUNC_0(VAR_5, sizeof(VAR_5), "<unknown: %#x>",
       VAR_4);
  return (VAR_5);
 }
}
