
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int restrict_op ;






 int FUNC_0 (char*,int,char*,int) ;

char *
FUNC_1(restrict_op VAR_0) {
 static char VAR_1[30];

 switch(VAR_0) {
     case 131: return "RESTRICT_FLAGS";
     case 128: return "RESTRICT_UNFLAGS";
     case 130: return "RESTRICT_REMOVE";
     case 129: return "RESTRICT_REMOVEIF";
     default:
  FUNC_0(VAR_1, sizeof VAR_1, "**RESTRICT_#%d**", VAR_0);
  return VAR_1;
 }
}
