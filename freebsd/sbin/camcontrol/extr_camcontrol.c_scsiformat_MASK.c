
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_sense_data {int dummy; } ;
struct TYPE_7__ {scalar_t__ sense_resid; scalar_t__ sense_len; struct scsi_sense_data sense_data; } ;
struct TYPE_6__ {int status; int flags; } ;
union ccb {TYPE_2__ csio; TYPE_1__ ccb_h; } ;
typedef int uintmax_t ;
typedef int uint8_t ;
typedef unsigned long long uint32_t ;
typedef int u_int8_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct format_defect_list_header {int byte2; } ;
struct cam_device {int dummy; } ;
typedef int str ;
typedef int fh ;
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
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct format_defect_list_header*,int) ;
 int FUNC_3 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_4 (union ccb*) ;
 union ccb* FUNC_5 (struct cam_device*) ;
 int FUNC_6 (struct cam_device*,union ccb*) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (char*,int,int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 () ;
 int FUNC_11 (int,char**,char*) ;
 unsigned long long FUNC_12 (int *) ;
 int FUNC_13 (struct scsi_sense_data*,scalar_t__,int*,int*,int*,int*,int) ;
 int FUNC_14 (TYPE_2__*,int,int *,int,int ,int ,int *,int,int ,int) ;
 scalar_t__ FUNC_15 (struct scsi_sense_data*,scalar_t__,int *) ;
 int FUNC_16 (struct cam_device*,TYPE_2__*,int ) ;
 int FUNC_17 (TYPE_2__*,int ,int *,int,int ,int) ;
 int FUNC_18 (struct cam_device*,int,char**,char*,int,int,int) ;
 int FUNC_19 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_20 (char const*) ;
 int FUNC_21 (char const*,...) ;

__attribute__((used)) static int
FUNC_22(struct cam_device *VAR_18, int VAR_19, char **VAR_20,
    char *VAR_21, int VAR_22, int VAR_23, int VAR_24)
{
 union ccb *VAR_25;
 int VAR_26;
 int VAR_27 = 0, VAR_28 = 0;
 int VAR_29 = 0, VAR_30 = 0;
 int VAR_31 = 10800 * 1000;
 int VAR_32 = 1;
 struct format_defect_list_header VAR_33;
 u_int8_t *VAR_34 = ((void*)0);
 u_int32_t VAR_35 = 0;
 u_int8_t VAR_36 = 0;
 int VAR_37 = 0;
 int VAR_38 = 0;

 VAR_25 = FUNC_5(VAR_18);

 if (VAR_25 == ((void*)0)) {
  FUNC_21("scsiformat: error allocating ccb");
  return (1);
 }

 FUNC_0(&VAR_25->csio);

 while ((VAR_26 = FUNC_11(VAR_19, VAR_20, VAR_21)) != -1) {
  switch(VAR_26) {
  case 'q':
   VAR_28++;
   break;
  case 'r':
   VAR_38 = 1;
   break;
  case 'w':
   VAR_32 = 0;
   break;
  case 'y':
   VAR_27++;
   break;
  }
 }

 if (VAR_38)
  goto doreport;

 if (VAR_28 == 0 && VAR_27 == 0) {
  FUNC_9(VAR_17, "You are about to REMOVE ALL DATA from the "
   "following device:\n");

  VAR_29 = FUNC_18(VAR_18, VAR_19, VAR_20, VAR_21,
          VAR_22, VAR_23, VAR_24);

  if (VAR_29 != 0) {
   FUNC_21("scsiformat: error sending inquiry");
   goto scsiformat_bailout;
  }
 }

 if (VAR_27 == 0) {
  if (!FUNC_10()) {
   VAR_29 = 1;
   goto scsiformat_bailout;
  }
 }

 if (VAR_24 != 0)
  VAR_31 = VAR_24;

 if (VAR_28 == 0) {
  FUNC_9(VAR_17, "Current format timeout is %d seconds\n",
   VAR_31 / 1000);
 }






 if ((VAR_27 == 0)
  && (VAR_24 == 0)) {
  char VAR_39[1024];
  int VAR_40 = 0;

  FUNC_9(VAR_17, "Enter new timeout in seconds or press\n"
   "return to keep the current timeout [%d] ",
   VAR_31 / 1000);

  if (FUNC_8(VAR_39, sizeof(VAR_39), VAR_16) != ((void*)0)) {
   if (VAR_39[0] != '\0')
    VAR_40 = FUNC_1(VAR_39);
  }

  if (VAR_40 != 0) {
   VAR_31 = VAR_40 * 1000;
   FUNC_9(VAR_17, "Using new timeout value %d\n",
    VAR_31 / 1000);
  }
 }





 FUNC_2(&VAR_33, sizeof(VAR_33));





 if (VAR_32 != 0) {
  VAR_33.byte2 = VAR_10;
  VAR_34 = (u_int8_t *)&VAR_33;
  VAR_35 = sizeof(VAR_33);
  VAR_36 = VAR_11;
 } else if (VAR_28 == 0) {
  FUNC_9(VAR_17, "Formatting...");
  FUNC_7(VAR_17);
 }

 FUNC_14(&VAR_25->csio,
                  VAR_23,
                 ((void*)0),
                     VAR_22,
                VAR_36,
                 0,
                   VAR_34,
                    VAR_35,
                    VAR_12,
                  VAR_31);


 VAR_25->ccb_h.flags |= VAR_3;

 if (VAR_14 & VAR_0)
  VAR_25->ccb_h.flags |= VAR_6;

 if (((VAR_30 = FUNC_6(VAR_18, VAR_25)) < 0)
  || ((VAR_32 == 0)
    && ((VAR_25->ccb_h.status & VAR_9) != VAR_7))) {
  const char VAR_41[] = "error sending format command";

  if (VAR_30 < 0)
   FUNC_20(VAR_41);
  else
   FUNC_21(VAR_41);

  if (VAR_14 & VAR_1) {
   FUNC_3(VAR_18, VAR_25, VAR_5,
     VAR_4, VAR_15);
  }
  VAR_29 = 1;
  goto scsiformat_bailout;
 }







 if (VAR_32 == 0) {
  if (VAR_28 == 0) {
   FUNC_9(VAR_17, "Format Complete\n");
  }
  goto scsiformat_bailout;
 }

doreport:
 do {
  cam_status VAR_42;

  FUNC_0(&VAR_25->csio);






  FUNC_17(&VAR_25->csio,
                       0,
                      ((void*)0),
                          VAR_22,
                         VAR_12,
                       5000);


  VAR_25->ccb_h.flags |= VAR_3;

  VAR_30 = FUNC_6(VAR_18, VAR_25);





  if (VAR_30 < 0) {
   FUNC_20("error sending TEST UNIT READY command");
   VAR_29 = 1;
   goto scsiformat_bailout;
  }

  VAR_42 = VAR_25->ccb_h.status & VAR_9;

  if ((VAR_42 != VAR_7)
   && (VAR_42 == VAR_8)
   && ((VAR_25->ccb_h.status & VAR_2) != 0)) {
   struct scsi_sense_data *VAR_43;
   int VAR_44, VAR_45, VAR_46, VAR_47;

   VAR_43 = &VAR_25->csio.sense_data;
   FUNC_13(VAR_43, VAR_25->csio.sense_len -
       VAR_25->csio.sense_resid, &VAR_44, &VAR_45,
       &VAR_46, &VAR_47, 1);
   if ((VAR_45 == VAR_13)
    && (VAR_46 == 0x04) && (VAR_47 == 0x04)) {
    uint8_t VAR_48[3];

    if ((FUNC_15(VAR_43, VAR_25->csio.sense_len -
         VAR_25->csio.sense_resid, VAR_48) == 0)
     && (VAR_28 == 0)) {
     uint32_t VAR_49;
     u_int64_t VAR_50;

     VAR_49 = FUNC_12(&VAR_48[1]);
     VAR_50 = 10000ull * VAR_49;

     FUNC_9(VAR_17,
      "\rFormatting:  %jd.%02u %% "
      "(%llu/%d) done",
      (uintmax_t)(VAR_50 /
      (0x10000 * 100)),
      (unsigned)((VAR_50 /
      0x10000) % 100),
      VAR_49, 0x10000);
     FUNC_7(VAR_17);
    } else if ((VAR_28 == 0)
     && (++VAR_37 <= 1)) {
     FUNC_21("Unexpected SCSI Sense Key "
           "Specific value returned "
           "during format:");
     FUNC_16(VAR_18, &VAR_25->csio,
        VAR_15);
     FUNC_21("Unable to print status "
           "information, but format will "
           "proceed.");
     FUNC_21("will exit when format is "
           "complete");
    }
    FUNC_19(1);
   } else {
    FUNC_21("Unexpected SCSI error during format");
    FUNC_3(VAR_18, VAR_25, VAR_5,
      VAR_4, VAR_15);
    VAR_29 = 1;
    goto scsiformat_bailout;
   }

  } else if (VAR_42 != VAR_7) {
   FUNC_21("Unexpected CAM status %#x", VAR_42);
   if (VAR_14 & VAR_1)
    FUNC_3(VAR_18, VAR_25, VAR_5,
      VAR_4, VAR_15);
   VAR_29 = 1;
   goto scsiformat_bailout;
  }

 } while((VAR_25->ccb_h.status & VAR_9) != VAR_7);

 if (VAR_28 == 0)
  FUNC_9(VAR_17, "\nFormat Complete\n");

scsiformat_bailout:

 FUNC_4(VAR_25);

 return (VAR_29);
}
