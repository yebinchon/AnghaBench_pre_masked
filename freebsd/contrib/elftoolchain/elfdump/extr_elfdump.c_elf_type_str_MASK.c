
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_type ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;


 int FUNC_0 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_3)
{
 static char VAR_4[32];

 switch (VAR_3)
 {
 case 129: return "ET_NONE";
 case 128: return "ET_REL";
 case 130: return "ET_EXEC";
 case 131: return "ET_DYN";
 case 132: return "ET_CORE";
 }
 if (VAR_3 >= VAR_2)
  FUNC_0(VAR_4, sizeof(VAR_4), "<proc: %#x>", VAR_3);
 else if (VAR_3 >= VAR_1 && VAR_3 <= VAR_0)
  FUNC_0(VAR_4, sizeof(VAR_4), "<os: %#x>", VAR_3);
 else
  FUNC_0(VAR_4, sizeof(VAR_4), "<unknown: %#x", VAR_3);
 return (VAR_4);
}
