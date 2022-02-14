
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static const char* FUNC_1(u_int8_t VAR_0)
{
 static char VAR_1[20];
 switch(VAR_0){
  case 130:
   return("OFFLINE");
   break;
  case 129:
   return("OK");
   break;
  case 132:
   return("DEGRADED");
   break;
  case 131:
   return("FREE");
   break;
  case 128:
   return("SYS");
   break;
  case 133:
   return("CRS");
   break;
 }
 FUNC_0(VAR_1,"UNKNOWN(0x%02x)", VAR_0);
 return(VAR_1);
}
