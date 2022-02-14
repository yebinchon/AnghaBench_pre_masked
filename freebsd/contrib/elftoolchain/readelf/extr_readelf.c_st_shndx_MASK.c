
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_shndx ;




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
 case 128: return "UND";
 case 130: return "ABS";
 case 129: return "COM";
 default:
  if (VAR_4 >= VAR_3 && VAR_4 <= VAR_1)
   return "PRC";
  else if (VAR_4 >= VAR_2 && VAR_4 <= VAR_0)
   return "OS";
  else
   FUNC_0(VAR_5, sizeof(VAR_5), "%u", VAR_4);
  return (VAR_5);
 }
}
