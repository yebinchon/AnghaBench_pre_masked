
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int flags; } ;
union ccb {TYPE_1__ ccb_h; int csio; } ;
typedef int u_int8_t ;
struct scsi_vpd_unit_serial_number {size_t length; int serial_num; } ;
struct cam_device {char* device_name; int dev_unit_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_3 (union ccb*) ;
 union ccb* FUNC_4 (struct cam_device*) ;
 scalar_t__ FUNC_5 (struct cam_device*,union ccb*) ;
 int FUNC_6 (int ,char*,char*,...) ;
 int FUNC_7 (struct scsi_vpd_unit_serial_number*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,int,int *,int,int *,int,int,int ,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(struct cam_device *VAR_16, int VAR_17, int VAR_18,
    int VAR_19)
{
 union ccb *VAR_20;
 struct scsi_vpd_unit_serial_number *VAR_21;
 char VAR_22[VAR_11 + 1];
 int VAR_23 = 0;

 VAR_20 = FUNC_4(VAR_16);

 if (VAR_20 == ((void*)0)) {
  FUNC_11("couldn't allocate CCB");
  return (1);
 }


 FUNC_0(&VAR_20->csio);

 VAR_21 = (struct scsi_vpd_unit_serial_number *)
  FUNC_8(sizeof(*VAR_21));

 if (VAR_21 == ((void*)0)) {
  FUNC_3(VAR_20);
  FUNC_11("can't malloc memory for serial number");
  return (1);
 }

 FUNC_9(&VAR_20->csio,
                   VAR_18,
                  ((void*)0),
                        VAR_17,
                     (u_int8_t *)VAR_21,
                     sizeof(*VAR_21),
                  1,
                       VAR_12,
                       VAR_10,
                     VAR_19 ? VAR_19 : 5000);


 VAR_20->ccb_h.flags |= VAR_4;

 if (VAR_13 & VAR_0)
  VAR_20->ccb_h.flags |= VAR_7;

 if (FUNC_5(VAR_16, VAR_20) < 0) {
  FUNC_10("error sending INQUIRY command");
  FUNC_3(VAR_20);
  FUNC_7(VAR_21);
  return (1);
 }

 if ((VAR_20->ccb_h.status & VAR_9) != VAR_8) {
  VAR_23 = 1;

  if (VAR_13 & VAR_3) {
   FUNC_2(VAR_16, VAR_20, VAR_6,
     VAR_5, VAR_14);
  }
 }

 FUNC_3(VAR_20);

 if (VAR_23 != 0) {
  FUNC_7(VAR_21);
  return (VAR_23);
 }

 FUNC_1(VAR_21->serial_num, VAR_22, VAR_21->length);
 VAR_22[VAR_21->length] = '\0';

 if ((VAR_13 & VAR_1)
  || (VAR_13 & VAR_2))
  FUNC_6(VAR_15, "%s%d: Serial Number ",
   VAR_16->device_name, VAR_16->dev_unit_num);

 FUNC_6(VAR_15, "%.60s\n", VAR_22);

 FUNC_7(VAR_21);

 return (0);
}
