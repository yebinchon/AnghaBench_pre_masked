
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (struct scsi_inquiry_data*) ;
 scalar_t__ FUNC_1 (struct scsi_inquiry_data*) ;
 int FUNC_2 (struct scsi_inquiry_data*) ;

 scalar_t__ FUNC_3 (struct scsi_inquiry_data*) ;



 int FUNC_4 (struct scsi_inquiry_data*) ;
 int FUNC_5 (struct sbuf*,char*,...) ;
 int FUNC_6 (struct sbuf*,struct scsi_inquiry_data*) ;

void
FUNC_7(struct sbuf *VAR_2, struct scsi_inquiry_data *VAR_3)
{
 u_int8_t VAR_4;
 char *VAR_5, *VAR_6;

 VAR_4 = FUNC_4(VAR_3);




 if (FUNC_3(VAR_3)) {
  VAR_6 = " (vendor-unique qualifier)";
 } else {
  switch (FUNC_2(VAR_3)) {
  case 148:
   VAR_6 = "";
   break;

  case 147:
   VAR_6 = " (offline)";
   break;

  case 146:
   VAR_6 = " (reserved qualifier)";
   break;
  default:
  case 149:
   VAR_6 = " (LUN not supported)";
   break;
  }
 }

 switch (VAR_4) {
 case 141:
  VAR_5 = "Direct Access";
  break;
 case 131:
  VAR_5 = "Sequential Access";
  break;
 case 135:
  VAR_5 = "Printer";
  break;
 case 134:
  VAR_5 = "Processor";
  break;
 case 129:
  VAR_5 = "WORM";
  break;
 case 144:
  VAR_5 = "CD-ROM";
  break;
 case 132:
  VAR_5 = "Scanner";
  break;
 case 137:
  VAR_5 = "Optical";
  break;
 case 143:
  VAR_5 = "Changer";
  break;
 case 142:
  VAR_5 = "Communication";
  break;
 case 130:
  VAR_5 = "Storage Array";
  break;
 case 140:
  VAR_5 = "Enclosure Services";
  break;
 case 133:
  VAR_5 = "Simplified Direct Access";
  break;
 case 138:
  VAR_5 = "Optical Card Read/Write";
  break;
 case 136:
  VAR_5 = "Object-Based Storage";
  break;
 case 145:
  VAR_5 = "Automation/Drive Interface";
  break;
 case 128:
  VAR_5 = "Host Managed Zoned Block";
  break;
 case 139:
  VAR_5 = "Uninstalled";
  break;
 default:
  VAR_5 = "unknown";
  break;
 }

 FUNC_6(VAR_2, VAR_3);

 FUNC_5(VAR_2, "%s %s ", FUNC_1(VAR_3) ? "Removable" : "Fixed", VAR_5);

 if (FUNC_0(VAR_3) == VAR_0)
  FUNC_5(VAR_2, "SCSI ");
 else if (FUNC_0(VAR_3) <= VAR_1) {
  FUNC_5(VAR_2, "SCSI-%d ", FUNC_0(VAR_3));
 } else {
  FUNC_5(VAR_2, "SPC-%d SCSI ", FUNC_0(VAR_3) - 2);
 }
 FUNC_5(VAR_2, "device%s\n", VAR_6);
}
