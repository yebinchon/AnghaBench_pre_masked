
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_top_tag ;


 int FUNC_0 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_0)
{
 static char VAR_1[32];

 switch (VAR_0) {
 case 1: return "File Attributes";
 case 2: return "Section Attributes";
 case 3: return "Symbol Attributes";
 default:
  FUNC_0(VAR_1, sizeof(VAR_1), "Unknown tag: %u", VAR_0);
  return (VAR_1);
 }
}
