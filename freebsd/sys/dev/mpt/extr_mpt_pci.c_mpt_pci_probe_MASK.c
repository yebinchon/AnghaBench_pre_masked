
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 const char *VAR_5;
 int VAR_6;

 if (FUNC_2(VAR_4) != VAR_3)
  return (VAR_2);

 VAR_6 = VAR_0;
 switch (FUNC_1(VAR_4)) {
 case 151:
  VAR_5 = "LSILogic FC909 FC Adapter";
  break;
 case 152:
  VAR_5 = "LSILogic FC909A FC Adapter";
  break;
 case 150:
  VAR_5 = "LSILogic FC919 FC Adapter";
  break;
 case 147:
  VAR_5 = "LSILogic FC919 LAN Adapter";
  break;
 case 146:
  VAR_5 = "Dual LSILogic FC929 FC Adapter";
  break;
 case 143:
  VAR_5 = "Dual LSILogic FC929 LAN Adapter";
  break;
 case 149:
  VAR_5 = "LSILogic FC919 FC PCI-X Adapter";
  break;
 case 148:
  VAR_5 = "LSILogic FC919 LAN PCI-X Adapter";
  break;
 case 145:
  VAR_5 = "Dual LSILogic FC929X 2Gb/s FC PCI-X Adapter";
  break;
 case 144:
  VAR_5 = "Dual LSILogic FC929X LAN PCI-X Adapter";
  break;
 case 142:
  VAR_5 = "Dual LSILogic FC7X04X 4Gb/s FC PCI-Express Adapter";
  break;
 case 141:
  VAR_5 = "Dual LSILogic FC7X04X 4Gb/s FC PCI-X Adapter";
  break;
 case 140:
 case 139:
  VAR_5 = "LSILogic 1030 Ultra4 Adapter";
  break;
 case 130:




  VAR_6 = VAR_1;

 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 129:
 case 128:
  VAR_5 = "LSILogic SAS/SATA Adapter";
  break;
 default:
  return (VAR_2);
 }

 FUNC_0(VAR_4, VAR_5);
 return (VAR_6);
}
