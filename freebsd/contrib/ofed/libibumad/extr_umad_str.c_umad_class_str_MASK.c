
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

const char * FUNC_0(uint8_t VAR_6)
{
 switch (VAR_6) {
  case 128:
  case 129:
   return("Subn");
  case 130:
   return("SubnAdm");
  case 132:
   return("Perf");
  case 138:
   return("BM");
  case 133:
   return("DevMgt");
  case 136:
   return("ComMgt");
  case 131:
   return("SNMP");
  case 134:
   return("DevAdm");
  case 137:
   return("BootMgt");
  case 139:
   return("BIS");
  case 135:
   return("CongestionManagment");
  default:
   break;
 }

 if ((VAR_3 <= VAR_6
  && VAR_6 <= VAR_2)
     || (VAR_5 <= VAR_6
  && VAR_6 <= VAR_4))
  return("Vendor");

 if (VAR_1 <= VAR_6
     && VAR_6 <= VAR_0) {
  return("Application");
 }
 return ("<unknown>");
}
