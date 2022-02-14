
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct cam_device {char* device_name; int dev_unit_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_1 (struct cam_device*,union ccb*,int*,int*,int *,int*,int*) ;
 int FUNC_2 (char*,...) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct cam_device *VAR_6, union ccb *VAR_7)
{
 uint8_t VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 uint16_t VAR_11 = 0;
 uint64_t VAR_12 = 0;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_6, VAR_7, &VAR_8, &VAR_11, &VAR_12, &VAR_9,
     &VAR_10);
 if (VAR_13 == 1) {
  if (VAR_4 & VAR_1) {
   FUNC_0(VAR_6, VAR_7, VAR_3,
     VAR_2, VAR_5);
  }
  FUNC_3("Can't get ATA command status");
  return (VAR_13);
 }

 if (VAR_10 & VAR_0) {
  FUNC_0(VAR_6, VAR_7, VAR_3,
      VAR_2, VAR_5);
         return (1);
 }

 FUNC_2("%s%d: ", VAR_6->device_name, VAR_6->dev_unit_num);
 switch (VAR_11) {
 case 0x00:
  FUNC_2("Standby mode\n");
  break;
 case 0x01:
  FUNC_2("Standby_y mode\n");
  break;
 case 0x40:
  FUNC_2("NV Cache Power Mode and the spindle is spun down or spinning down\n");
  break;
 case 0x41:
  FUNC_2("NV Cache Power Mode and the spindle is spun up or spinning up\n");
  break;
 case 0x80:
  FUNC_2("Idle mode\n");
  break;
 case 0x81:
  FUNC_2("Idle_a mode\n");
  break;
 case 0x82:
  FUNC_2("Idle_b mode\n");
  break;
 case 0x83:
  FUNC_2("Idle_c mode\n");
  break;
 case 0xff:
  FUNC_2("Active or Idle mode\n");
  break;
 default:
  FUNC_2("Unknown mode 0x%02x\n", VAR_11);
  break;
 }

 return (0);
}
