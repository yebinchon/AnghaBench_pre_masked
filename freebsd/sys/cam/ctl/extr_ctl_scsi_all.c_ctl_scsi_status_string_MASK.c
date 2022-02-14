
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unkstr ;
struct ctl_scsiio {int scsi_status; } ;
 int FUNC_0 (char*,int,char*,int) ;

const char *
FUNC_1(struct ctl_scsiio *VAR_0)
{
 switch(VAR_0->scsi_status) {
 case 131:
  return("OK");
 case 135:
  return("Check Condition");
 case 136:
  return("Busy");
 case 133:
  return("Intermediate");
 case 132:
  return("Intermediate-Condition Met");
 case 129:
  return("Reservation Conflict");
 case 134:
  return("Command Terminated");
 case 130:
  return("Queue Full");
 case 137:
  return("ACA Active");
 case 128:
  return("Task Aborted");
 default: {
  static char VAR_1[64];
  FUNC_0(VAR_1, sizeof(VAR_1), "Unknown %#x",
    VAR_0->scsi_status);
  return(VAR_1);
 }
 }
}
