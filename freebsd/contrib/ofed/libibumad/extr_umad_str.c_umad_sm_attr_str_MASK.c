
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be16 ;
 int FUNC_0 (int ) ;
 char const* FUNC_1 (int ) ;

__attribute__((used)) static const char * FUNC_2(__be16 VAR_0)
{
 switch(FUNC_0(VAR_0)) {
  case 139:
   return ("NodeDescription");
  case 138:
   return ("NodeInfo");
  case 131:
   return ("SwitchInfo");
  case 145:
   return ("GUIDInfo");
  case 136:
   return ("PortInfo");
  case 137:
   return ("P_KeyTable");
  case 133:
   return ("SLtoVLMappingTable");
  case 128:
   return ("VLArbitrationTable");
  case 142:
   return ("LinearForwardingTable");
  case 134:
   return ("RandomForwardingTable");
  case 140:
   return ("MulticastForwardingTable");
  case 132:
   return ("SMInfo");
  case 130:
   return ("VendorDiag");
  case 143:
   return ("LedInfo");
  case 141:
   return ("LinkSpeedWidthPairsTable");
  case 129:
   return ("VendorSpecificMadsTable");
  case 144:
   return ("HierarchyInfo");
  case 146:
   return ("CableInfo");
  case 135:
   return ("PortInfoExtended");
  default:
   return (FUNC_1(VAR_0));
 }
 return ("<unknown>");
}
