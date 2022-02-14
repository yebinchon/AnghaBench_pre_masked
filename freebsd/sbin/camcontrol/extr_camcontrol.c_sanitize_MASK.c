
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_sense_data {int dummy; } ;
struct TYPE_5__ {scalar_t__ sense_resid; scalar_t__ sense_len; struct scsi_sense_data sense_data; } ;
struct TYPE_4__ {int status; int flags; } ;
union ccb {TYPE_2__ csio; TYPE_1__ ccb_h; } ;
typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct stat {scalar_t__ st_size; } ;
struct scsi_sanitize_parameter_list {int byte1; int length; } ;
struct cam_device {char* device_name; int dev_unit_num; } ;
typedef scalar_t__ ata_params ;
typedef int str ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ camcontrol_devtype ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (struct cam_device*,union ccb*,int,int ,int,int ,int ,int ,int,int,int,int *,int ,int,int) ;
 int FUNC_2 (struct cam_device*,int,int,union ccb*,scalar_t__**) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (char*) ;
 scalar_t__* FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_7 (union ccb*) ;
 union ccb* FUNC_8 (struct cam_device*) ;
 scalar_t__ FUNC_9 (struct cam_device*,union ccb*) ;
 int FUNC_10 (int) ;
 int * FUNC_11 (char*,int,int ) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (scalar_t__*) ;
 scalar_t__ FUNC_14 (int,struct stat*) ;
 int FUNC_15 () ;
 int FUNC_16 (struct cam_device*,int,int ,int ,scalar_t__*) ;
 int FUNC_17 (int,char**,char*) ;
 int FUNC_18 (char const*,int ) ;
 char* VAR_30 ;
 int FUNC_19 (char*,char*,int ) ;
 scalar_t__ FUNC_20 (int,scalar_t__*,scalar_t__) ;
 int FUNC_21 (struct cam_device*,union ccb*,int,scalar_t__) ;
 int FUNC_22 (struct cam_device*,union ccb*,int,int) ;
 int FUNC_23 (scalar_t__*) ;
 int FUNC_24 (struct scsi_sense_data*,scalar_t__,int*,int*,int*,int*,int) ;
 int FUNC_25 (TYPE_2__*,int,int *,int,scalar_t__,int ,scalar_t__*,scalar_t__,int ,int) ;
 int FUNC_26 (scalar_t__,int ) ;
 int FUNC_27 (struct cam_device*,int,char**,char*,int,int,int) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_28 (char*,char*) ;
 int FUNC_29 (char*,int *,int ) ;
 int FUNC_30 (char*,...) ;
 int FUNC_31 (char*,...) ;

__attribute__((used)) static int
FUNC_32(struct cam_device *VAR_34, int VAR_35, char **VAR_36,
      char *VAR_37, int VAR_38, int VAR_39, int VAR_40)
{
 union ccb *VAR_41;
 u_int8_t VAR_42 = 0;
 int VAR_43;
 int VAR_44 = 0, VAR_45 = 0;
 int VAR_46 = 0;
 int VAR_47;
 int VAR_48 = 1;
 int VAR_49 = 0;
 int VAR_50 = 0;
 int VAR_51 = 0;
 int VAR_52 = -1;
 const char *VAR_53 = ((void*)0);
 u_int8_t *VAR_54 = ((void*)0);
 u_int32_t VAR_55 = 0;
 uint8_t VAR_56;
 uint16_t VAR_57, VAR_58;
 uint64_t VAR_59;
 int VAR_60 = 0;
 camcontrol_devtype VAR_61;




 VAR_46 = FUNC_16(VAR_34, -1, 0, 0, &VAR_61);
 if (VAR_46 != 0 || (unsigned)VAR_61 > VAR_16) {
  FUNC_31("sanitize: can't get device type");
  return (1);
 }

 VAR_41 = FUNC_8(VAR_34);

 if (VAR_41 == ((void*)0)) {
  FUNC_31("sanitize: error allocating ccb");
  return (1);
 }

 FUNC_0(&VAR_41->csio);

 while ((VAR_43 = FUNC_17(VAR_35, VAR_36, VAR_37)) != -1) {
  switch(VAR_43) {
  case 'a':
   if (FUNC_28(VAR_30, "overwrite") == 0)
    VAR_42 = VAR_27;
   else if (FUNC_28(VAR_30, "block") == 0)
    VAR_42 = VAR_24;
   else if (FUNC_28(VAR_30, "crypto") == 0)
    VAR_42 = VAR_25;
   else if (FUNC_28(VAR_30, "exitfailure") == 0)
    VAR_42 = VAR_26;
   else {
    FUNC_31("invalid service operation \"%s\"",
          VAR_30);
    VAR_46 = 1;
    goto sanitize_bailout;
   }
   break;
  case 'c':
   VAR_50 = FUNC_29(VAR_30, ((void*)0), 0);
   if (VAR_50 < 1 || VAR_50 > 31) {
    FUNC_31("invalid passes value %d", VAR_50);
    VAR_46 = 1;
    goto sanitize_bailout;
   }
   break;
  case 'I':
   VAR_49 = 1;
   break;
  case 'P':
   VAR_53 = VAR_30;
   break;
  case 'q':
   VAR_45++;
   break;
  case 'U':
   VAR_51 = 1;
   break;
  case 'r':
   VAR_60 = 1;
   break;
  case 'w':

   if (VAR_61 == VAR_15)
    VAR_48 = 0;
   break;
  case 'y':
   VAR_44++;
   break;
  }
 }

 if (VAR_60)
  goto doreport;

 if (VAR_42 == 0) {
  FUNC_31("an action is required");
  VAR_46 = 1;
  goto sanitize_bailout;
 } else if (VAR_42 == VAR_27) {
  struct scsi_sanitize_parameter_list *VAR_62;
  struct stat VAR_63;
  ssize_t VAR_64, VAR_65;

  if (VAR_53 == ((void*)0)) {
   FUNC_31("overwrite action requires -P argument");
   VAR_46 = 1;
   goto sanitize_bailout;
  }
  VAR_52 = FUNC_18(VAR_53, VAR_18);
  if (VAR_52 < 0) {
   FUNC_30("cannot open pattern file %s", VAR_53);
   VAR_46 = 1;
   goto sanitize_bailout;
  }
  if (FUNC_14(VAR_52, &VAR_63) < 0) {
   FUNC_30("cannot stat pattern file %s", VAR_53);
   VAR_46 = 1;
   goto sanitize_bailout;
  }
  VAR_64 = VAR_63.st_size;
  if (VAR_64 > VAR_22) {
   FUNC_31("pattern file size exceeds maximum value %d",
         VAR_22);
   VAR_46 = 1;
   goto sanitize_bailout;
  }
  VAR_55 = sizeof(*VAR_62) + VAR_64;
  VAR_54 = FUNC_5(1, VAR_55);
  if (VAR_54 == ((void*)0)) {
   FUNC_31("cannot allocate parameter list buffer");
   VAR_46 = 1;
   goto sanitize_bailout;
  }

  VAR_65 = FUNC_20(VAR_52, VAR_54 + sizeof(*VAR_62), VAR_64);
  if (VAR_65 < 0) {
   FUNC_30("cannot read pattern file");
   VAR_46 = 1;
   goto sanitize_bailout;
  } else if (VAR_65 != VAR_64) {
   FUNC_31("short pattern file read");
   VAR_46 = 1;
   goto sanitize_bailout;
  }

  VAR_62 = (struct scsi_sanitize_parameter_list *)VAR_54;
  if (VAR_50 == 0)
   VAR_62->byte1 = 1;
  else
   VAR_62->byte1 = VAR_50;
  if (VAR_49 != 0)
   VAR_62->byte1 |= VAR_21;
  FUNC_26(VAR_64, VAR_62->length);
 } else {
  const char *VAR_66;

  if (VAR_50 != 0)
   VAR_66 = "-c";
  else if (VAR_49 != 0)
   VAR_66 = "-I";
  else if (VAR_53 != ((void*)0))
   VAR_66 = "-P";
  else
   VAR_66 = ((void*)0);
  if (VAR_66 != ((void*)0)) {
   FUNC_31("%s argument only valid with overwrite "
         "operation", VAR_66);
   VAR_46 = 1;
   goto sanitize_bailout;
  }
 }

 if (VAR_45 == 0 && VAR_44 == 0) {
  FUNC_12(VAR_33, "You are about to REMOVE ALL DATA from the "
   "following device:\n");

  if (VAR_61 == VAR_15) {
   VAR_46 = FUNC_27(VAR_34, VAR_35, VAR_36, VAR_37,
           VAR_38, VAR_39, VAR_40);
  } else if (VAR_61 == VAR_13 || VAR_61 == VAR_14) {
   struct ata_params *VAR_67;
   VAR_46 = FUNC_2(VAR_34, VAR_39, VAR_40,
      VAR_41, &VAR_67);
   if (VAR_46 == 0) {
    FUNC_19("%s%d: ", VAR_34->device_name,
        VAR_34->dev_unit_num);
    FUNC_3(VAR_67);
    FUNC_13(VAR_67);
   }
  } else
   VAR_46 = 1;

  if (VAR_46 != 0) {
   FUNC_31("sanitize: error sending inquiry");
   goto sanitize_bailout;
  }
 }

 if (VAR_44 == 0) {
  if (!FUNC_15()) {
   VAR_46 = 1;
   goto sanitize_bailout;
  }
 }

 if (VAR_40 != 0)
  VAR_47 = VAR_40;
 else
  VAR_47 = (VAR_48 ? 10 : 10800) * 1000;

 if (VAR_48 == 0 && VAR_45 == 0) {
  FUNC_12(VAR_33, "Current sanitize timeout is %d seconds\n",
   VAR_47 / 1000);
 }






 if (VAR_48 == 0 && VAR_44 == 0 && VAR_40 == 0) {
  char VAR_68[1024];
  int VAR_69 = 0;

  FUNC_12(VAR_33, "Enter new timeout in seconds or press\n"
   "return to keep the current timeout [%d] ",
   VAR_47 / 1000);

  if (FUNC_11(VAR_68, sizeof(VAR_68), VAR_32) != ((void*)0)) {
   if (VAR_68[0] != '\0')
    VAR_69 = FUNC_4(VAR_68);
  }

  if (VAR_69 != 0) {
   VAR_47 = VAR_69 * 1000;
   FUNC_12(VAR_33, "Using new timeout value %d\n",
    VAR_47 / 1000);
  }
 }

 if (VAR_61 == VAR_15) {
  VAR_56 = VAR_42;
  if (VAR_51 != 0)
   VAR_56 |= VAR_28;
  if (VAR_48 != 0)
   VAR_56 |= VAR_23;
  FUNC_25(&VAR_41->csio,
                       VAR_39,
                      ((void*)0),
                          VAR_38,
                     VAR_56,
                       0,
                        VAR_54,
                         VAR_55,
                         VAR_19,
                       VAR_47);

  VAR_41->ccb_h.flags |= VAR_5;
  if (VAR_29 & VAR_3)
   VAR_41->ccb_h.flags |= VAR_9;
  if (FUNC_9(VAR_34, VAR_41) < 0) {
   FUNC_30("error sending sanitize command");
   VAR_46 = 1;
   goto sanitize_bailout;
  }
 } else if (VAR_61 == VAR_13 || VAR_61 == VAR_14) {
  if (VAR_42 == VAR_27) {
   VAR_57 = 0x14;
   VAR_59 = 0x4F5700000000 | FUNC_23(VAR_54 + 4);
   VAR_58 = (VAR_50 == 0) ? 1 : (VAR_50 >= 16) ? 0 : VAR_50;
   if (VAR_49)
    VAR_58 |= 0x80;
   if (VAR_51)
    VAR_58 |= 0x10;
  } else if (VAR_42 == VAR_24) {
   VAR_57 = 0x12;
   VAR_59 = 0x0000426B4572;
   VAR_58 = 0;
   if (VAR_51)
    VAR_58 |= 0x10;
  } else if (VAR_42 == VAR_25) {
   VAR_57 = 0x11;
   VAR_59 = 0x000043727970;
   VAR_58 = 0;
   if (VAR_51)
    VAR_58 |= 0x10;
  } else if (VAR_42 == VAR_26) {
   VAR_57 = 0x00;
   VAR_59 = 0;
   VAR_58 = 1;
  } else {
   VAR_46 = 1;
   goto sanitize_bailout;
  }

  VAR_46 = FUNC_1(VAR_34,
       VAR_41,
       VAR_39,
                VAR_6,
                   VAR_1 | VAR_0,
                    0,
                     VAR_17,
                  VAR_2,
                   VAR_57,
              VAR_59,
                       VAR_58,
                   ((void*)0),
                    0,
                   VAR_47,
                  1);
 }

 if ((VAR_41->ccb_h.status & VAR_12) != VAR_10) {
  struct scsi_sense_data *VAR_70;
  int VAR_71, VAR_72, VAR_73, VAR_74;

  if ((VAR_41->ccb_h.status & VAR_12) ==
      VAR_11) {
   VAR_70 = &VAR_41->csio.sense_data;
   FUNC_24(VAR_70, VAR_41->csio.sense_len -
       VAR_41->csio.sense_resid, &VAR_71, &VAR_72,
       &VAR_73, &VAR_74, 1);

   if (VAR_72 == VAR_20 &&
       VAR_73 == 0x20 && VAR_74 == 0x00)
    FUNC_31("sanitize is not supported by "
          "this device");
   else
    FUNC_31("error sanitizing this device");
  } else
   FUNC_31("error sanitizing this device");

  if (VAR_29 & VAR_4) {
   FUNC_6(VAR_34, VAR_41, VAR_8,
     VAR_7, VAR_31);
  }
  VAR_46 = 1;
  goto sanitize_bailout;
 }







 if (VAR_48 == 0) {
  if (VAR_45 == 0) {
   FUNC_12(VAR_33, "Sanitize Complete\n");
  }
  goto sanitize_bailout;
 }

doreport:
 if (VAR_61 == VAR_15) {
  VAR_46 = FUNC_22(VAR_34, VAR_41, VAR_38, VAR_45);
 } else if (VAR_61 == VAR_13 || VAR_61 == VAR_14) {
  VAR_46 = FUNC_21(VAR_34, VAR_41, VAR_45, VAR_61);
 } else
  VAR_46 = 1;
 if (VAR_46 == 0 && VAR_45 == 0)
  FUNC_12(VAR_33, "Sanitize Complete                      \n");

sanitize_bailout:
 if (VAR_52 >= 0)
  FUNC_10(VAR_52);
 if (VAR_54 != ((void*)0))
  FUNC_13(VAR_54);
 FUNC_7(VAR_41);

 return (VAR_46);
}
