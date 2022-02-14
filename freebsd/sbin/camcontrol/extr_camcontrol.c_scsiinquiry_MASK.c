
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int flags; } ;
union ccb {TYPE_1__ ccb_h; int csio; } ;
typedef int u_int8_t ;
struct scsi_inquiry_data {int dummy; } ;
struct cam_device {char* device_name; int dev_unit_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct scsi_inquiry_data*,int) ;
 int FUNC_2 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_3 (union ccb*) ;
 union ccb* FUNC_4 (struct cam_device*) ;
 scalar_t__ FUNC_5 (struct cam_device*,union ccb*) ;
 int FUNC_6 (int ,char*,char*,int ) ;
 int FUNC_7 (struct scsi_inquiry_data*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,int,int *,int,int *,int ,int ,int ,int ,int) ;
 int FUNC_10 (struct scsi_inquiry_data*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int
FUNC_13(struct cam_device *VAR_13, int VAR_14, int VAR_15,
     int VAR_16)
{
 union ccb *VAR_17;
 struct scsi_inquiry_data *VAR_18;
 int VAR_19 = 0;

 VAR_17 = FUNC_4(VAR_13);

 if (VAR_17 == ((void*)0)) {
  FUNC_12("couldn't allocate CCB");
  return (1);
 }


 FUNC_0(&VAR_17->csio);

 VAR_18 = (struct scsi_inquiry_data *)FUNC_8(
  sizeof(struct scsi_inquiry_data));

 if (VAR_18 == ((void*)0)) {
  FUNC_3(VAR_17);
  FUNC_12("can't malloc memory for inquiry\n");
  return (1);
 }
 FUNC_1(VAR_18, sizeof(*VAR_18));
 FUNC_9(&VAR_17->csio,
                     VAR_15,
                    ((void*)0),
                        VAR_14,
                     (u_int8_t *)VAR_18,
                     VAR_8,
                  0,
                       0,
                       VAR_9,
                     VAR_16 ? VAR_16 : 5000);


 VAR_17->ccb_h.flags |= VAR_2;

 if (VAR_10 & VAR_0)
  VAR_17->ccb_h.flags |= VAR_5;

 if (FUNC_5(VAR_13, VAR_17) < 0) {
  FUNC_11("error sending INQUIRY command");
  FUNC_3(VAR_17);
  return (1);
 }

 if ((VAR_17->ccb_h.status & VAR_7) != VAR_6) {
  VAR_19 = 1;

  if (VAR_10 & VAR_1) {
   FUNC_2(VAR_13, VAR_17, VAR_4,
     VAR_3, VAR_11);
  }
 }

 FUNC_3(VAR_17);

 if (VAR_19 != 0) {
  FUNC_7(VAR_18);
  return (VAR_19);
 }

 FUNC_6(VAR_12, "%s%d: ", VAR_13->device_name,
  VAR_13->dev_unit_num);
 FUNC_10(VAR_18);

 FUNC_7(VAR_18);

 return (0);
}
