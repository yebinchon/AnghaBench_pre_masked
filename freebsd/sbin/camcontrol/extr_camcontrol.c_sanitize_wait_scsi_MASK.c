
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_sense_data {int dummy; } ;
struct TYPE_6__ {scalar_t__ sense_resid; scalar_t__ sense_len; struct scsi_sense_data sense_data; } ;
struct TYPE_5__ {int status; int flags; } ;
union ccb {TYPE_2__ csio; TYPE_1__ ccb_h; } ;
typedef int uint8_t ;
typedef int u_int ;
struct cam_device {int dummy; } ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_2 (struct cam_device*,union ccb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct scsi_sense_data*,scalar_t__,int*,int*,int*,int*,int) ;
 scalar_t__ FUNC_7 (struct scsi_sense_data*,scalar_t__,int *) ;
 int FUNC_8 (struct cam_device*,TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int *,int,int ,int) ;
 int FUNC_10 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static int
FUNC_13(struct cam_device *VAR_14, union ccb *VAR_15, int VAR_16, int VAR_17)
{
 int VAR_18 = 0, VAR_19;
 cam_status VAR_20;
 u_int VAR_21, VAR_22;

 do {
  FUNC_0(&VAR_15->csio);






  FUNC_9(&VAR_15->csio,
                       0,
                      ((void*)0),
                          VAR_16,
                         VAR_9,
                       5000);


  VAR_15->ccb_h.flags |= VAR_2;

  VAR_19 = FUNC_2(VAR_14, VAR_15);





  if (VAR_19 < 0) {
   FUNC_11("error sending TEST UNIT READY command");
   return (1);
  }

  VAR_20 = VAR_15->ccb_h.status & VAR_8;
  if ((VAR_20 == VAR_7) &&
      ((VAR_15->ccb_h.status & VAR_1) != 0)) {
   struct scsi_sense_data *VAR_23;
   int VAR_24, VAR_25, VAR_26, VAR_27;

   VAR_23 = &VAR_15->csio.sense_data;
   FUNC_6(VAR_23, VAR_15->csio.sense_len -
       VAR_15->csio.sense_resid, &VAR_24, &VAR_25,
       &VAR_26, &VAR_27, 1);
   if ((VAR_25 == VAR_10)
    && (VAR_26 == 0x04) && (VAR_27 == 0x1b)) {
    uint8_t VAR_28[3];

    if ((FUNC_7(VAR_23, VAR_15->csio.sense_len -
         VAR_15->csio.sense_resid, VAR_28) == 0)
     && (VAR_17 == 0)) {
     VAR_21 = FUNC_5(&VAR_28[1]);
     VAR_22 = 10000 * VAR_21;
     FUNC_4(VAR_13,
         "Sanitizing: %u.%02u%% (%d/%d)\r",
         (VAR_22 / (0x10000 * 100)),
         ((VAR_22 / 0x10000) % 100),
         VAR_21, 0x10000);
     FUNC_3(VAR_13);
    } else if ((VAR_17 == 0) && (++VAR_18 <= 1)) {
     FUNC_12("Unexpected SCSI Sense Key "
           "Specific value returned "
           "during sanitize:");
     FUNC_8(VAR_14, &VAR_15->csio,
        VAR_12);
     FUNC_12("Unable to print status "
           "information, but sanitze will "
           "proceed.");
     FUNC_12("will exit when sanitize is "
           "complete");
    }
    FUNC_10(1);
   } else {
    FUNC_12("Unexpected SCSI error during sanitize");
    FUNC_1(VAR_14, VAR_15, VAR_4,
      VAR_3, VAR_12);
    return (1);
   }

  } else if (VAR_20 != VAR_6 && VAR_20 != VAR_5) {
   FUNC_12("Unexpected CAM status %#x", VAR_20);
   if (VAR_11 & VAR_0)
    FUNC_1(VAR_14, VAR_15, VAR_4,
      VAR_3, VAR_12);
   return (1);
  }
 } while ((VAR_15->ccb_h.status & VAR_8) != VAR_6);
 return (0);
}
