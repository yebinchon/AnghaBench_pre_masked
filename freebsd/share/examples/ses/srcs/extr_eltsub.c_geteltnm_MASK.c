
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,...) ;

char *
FUNC_1(int VAR_0)
{
 static char VAR_1[132];

 switch (VAR_0) {
 case 130:
  FUNC_0(VAR_1, "Unspecified");
  break;
 case 149:
  FUNC_0(VAR_1, "Device Slot");
  break;
 case 139:
  FUNC_0(VAR_1, "Power Supply");
  break;
 case 144:
  FUNC_0(VAR_1, "Cooling");
  break;
 case 131:
  FUNC_0(VAR_1, "Temperature Sensors");
  break;
 case 147:
  FUNC_0(VAR_1, "Door Lock");
  break;
 case 153:
  FUNC_0(VAR_1, "Audible alarm");
  break;
 case 145:
  FUNC_0(VAR_1, "Enclosure Services Controller Electronics");
  break;
 case 136:
  FUNC_0(VAR_1, "SCC Controller Electronics");
  break;
 case 140:
  FUNC_0(VAR_1, "Nonvolatile Cache");
  break;
 case 143:
  FUNC_0(VAR_1, "Invalid Operation Reason");
  break;
 case 129:
  FUNC_0(VAR_1, "Uninterruptible Power Supply");
  break;
 case 148:
  FUNC_0(VAR_1, "Display");
  break;
 case 142:
  FUNC_0(VAR_1, "Key Pad Entry");
  break;
 case 146:
  FUNC_0(VAR_1, "Enclosure");
  break;
 case 135:
  FUNC_0(VAR_1, "SCSI Port/Transceiver");
  break;
 case 141:
  FUNC_0(VAR_1, "Language");
  break;
 case 150:
  FUNC_0(VAR_1, "Communication Port");
  break;
 case 128:
  FUNC_0(VAR_1, "Voltage Sensor");
  break;
 case 152:
  FUNC_0(VAR_1, "Current Sensor");
  break;
 case 133:
  FUNC_0(VAR_1, "SCSI Target Port");
  break;
 case 134:
  FUNC_0(VAR_1, "SCSI Initiator Port");
  break;
 case 132:
  FUNC_0(VAR_1, "Simple Subenclosure");
  break;
 case 151:
  FUNC_0(VAR_1, "Array Device Slot");
  break;
 case 137:
  FUNC_0(VAR_1, "SAS Expander");
  break;
 case 138:
  FUNC_0(VAR_1, "SAS Connector");
  break;
 default:
  (void) FUNC_0(VAR_1, "<Type 0x%x>", VAR_0);
  break;
 }
 return (VAR_1);
}
