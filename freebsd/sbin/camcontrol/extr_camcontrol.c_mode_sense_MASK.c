
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int status; int flags; } ;
struct TYPE_5__ {scalar_t__ cdb_bytes; } ;
struct TYPE_7__ {int cdb_len; TYPE_1__ cdb_io; } ;
union ccb {TYPE_2__ ccb_h; TYPE_3__ csio; } ;
typedef int u_int8_t ;
struct scsi_mode_sense_10 {int byte2; } ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct cam_device*) ;
 int FUNC_2 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_3 (union ccb*) ;
 union ccb* FUNC_4 (struct cam_device*) ;
 scalar_t__ FUNC_5 (struct cam_device*,union ccb*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int,char*) ;
 scalar_t__ FUNC_8 (union ccb*,int*,int*,int*,int*) ;
 int FUNC_9 (TYPE_3__*,int,int *,int,int,int,int,int,int *,int,int,int ,int) ;
 int VAR_13 ;

void
FUNC_10(struct cam_device *VAR_14, int *VAR_15, int VAR_16, int VAR_17, int VAR_18,
    int VAR_19, int VAR_20, int VAR_21, int VAR_22, int VAR_23,
    u_int8_t *VAR_24, int VAR_25)
{
 union ccb *VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;

 VAR_26 = FUNC_4(VAR_14);
 if (VAR_26 == ((void*)0))
  FUNC_7(1, "mode_sense: couldn't allocate CCB");

retry:




 if (*VAR_15 == 6 && VAR_25 > 255)
  VAR_25 = 255;

 FUNC_0(&VAR_26->csio);

 FUNC_9(&VAR_26->csio,
                 VAR_22,
                ((void*)0),
                    VAR_21,
             VAR_16,
            VAR_18 << 6,
              VAR_19,
                 VAR_20,
                   VAR_24,
                   VAR_25,
                          *VAR_15,
                   VAR_10,
                 VAR_23 ? VAR_23 : 5000);
 if (VAR_17 && VAR_26->csio.cdb_len == 10) {
  struct scsi_mode_sense_10 *VAR_31 =
      (struct scsi_mode_sense_10 *)VAR_26->csio.cdb_io.cdb_bytes;
  VAR_31->byte2 |= VAR_9;
 }


 *VAR_15 = VAR_26->csio.cdb_len;

 if (VAR_12 & VAR_0)
  VAR_26->ccb_h.flags |= VAR_5;


 VAR_26->ccb_h.flags |= VAR_2;

 if (FUNC_5(VAR_14, VAR_26) < 0)
  FUNC_6(1, "error sending mode sense command");


 if (*VAR_15 != 6 &&
     ((VAR_26->ccb_h.status & VAR_8) == VAR_7 ||
      (FUNC_8(VAR_26, &VAR_27, &VAR_28, &VAR_29, &VAR_30)
       && VAR_28 == VAR_11))) {
  *VAR_15 = 6;
  goto retry;
 }

 if ((VAR_26->ccb_h.status & VAR_8) != VAR_6) {
  if (VAR_12 & VAR_1) {
   FUNC_2(VAR_14, VAR_26, VAR_4,
     VAR_3, VAR_13);
  }
  FUNC_3(VAR_26);
  FUNC_1(VAR_14);
  FUNC_7(1, "mode sense command returned error");
 }

 FUNC_3(VAR_26);
}
