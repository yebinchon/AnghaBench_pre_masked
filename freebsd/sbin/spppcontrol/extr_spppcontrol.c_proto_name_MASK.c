
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;




 int FUNC_0 (char*,char*,unsigned int) ;

const char *
FUNC_1(u_short VAR_0)
{
 static char VAR_1[12];
 switch (VAR_0) {
 case 128: return "pap";
 case 129: return "chap";
 }
 FUNC_0(VAR_1, "0x%x", (unsigned)VAR_0);
 return VAR_1;
}
