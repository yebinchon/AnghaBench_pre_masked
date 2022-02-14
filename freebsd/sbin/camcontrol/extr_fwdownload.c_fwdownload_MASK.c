
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct fw_vendor {scalar_t__ type; int timeout_ms; size_t timeout_type; } ;
struct cam_device {char* device_name; int dev_unit_num; } ;
typedef char ata_params ;
typedef scalar_t__ camcontrol_devtype ;
struct TYPE_2__ {char* timeout_desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct cam_device*,int,int,union ccb*,char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (union ccb*) ;
 union ccb* FUNC_3 (struct cam_device*) ;
 int FUNC_4 (struct cam_device*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (struct cam_device*,struct fw_vendor*,char*,int,int,int,int,int,int,char*,scalar_t__) ;
 int FUNC_9 (struct cam_device*,struct fw_vendor*,int,int,int) ;
 struct fw_vendor* FUNC_10 (struct cam_device*,char*) ;
 char* FUNC_11 (struct cam_device*,int,int,int,char*,struct fw_vendor*,int*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_12 () ;
 int FUNC_13 (struct cam_device*,int,int,int,scalar_t__*) ;
 int FUNC_14 (int,char**,char*) ;
 char* VAR_6 ;
 int FUNC_15 (char*,char*,int ) ;
 scalar_t__ FUNC_16 (struct cam_device*,int,char**,char*,int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (char*) ;

int
FUNC_18(struct cam_device *VAR_9, int VAR_10, char **VAR_11,
    char *VAR_12, int VAR_13, int VAR_14, int VAR_15,
    int VAR_16)
{
 union ccb *VAR_17 = ((void*)0);
 struct fw_vendor *VAR_18;
 char *VAR_19 = ((void*)0);
 struct ata_params *VAR_20 = ((void*)0);
 camcontrol_devtype VAR_21;
 char *VAR_22 = ((void*)0);
 int VAR_23;
 int VAR_24;
 int VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = 0;

 while ((VAR_24 = FUNC_14(VAR_10, VAR_11, VAR_12)) != -1) {
  switch (VAR_24) {
  case 'f':
   VAR_19 = VAR_6;
   break;
  case 'q':
   VAR_27 = 1;
   break;
  case 's':
   VAR_25 = 1;
   break;
  case 'y':
   VAR_26 = 1;
   break;
  default:
   break;
  }
 }

 if (VAR_19 == ((void*)0))
  FUNC_5(1, "you must specify a firmware image file using -f "
       "option");

 VAR_28 = FUNC_13(VAR_9, VAR_15, VAR_16, VAR_13,
     &VAR_21);
 if (VAR_28 != 0)
  FUNC_5(1, "Unable to determine device type");

 if ((VAR_21 == VAR_0)
  || (VAR_21 == VAR_1)) {
  VAR_17 = FUNC_3(VAR_9);
  if (VAR_17 == ((void*)0)) {
   FUNC_17("couldn't allocate CCB");
   VAR_28 = 1;
   goto bailout;
  }

  if (FUNC_0(VAR_9, VAR_15, VAR_16, VAR_17,
            &VAR_20) != 0) {
   VAR_28 = 1;
   goto bailout;
  }
 } else if (VAR_21 != VAR_2)
  FUNC_5(1, "Unsupported device type %d", VAR_21);

 VAR_18 = FUNC_10(VAR_9, VAR_20);







 if (((VAR_18 == ((void*)0))
   || (VAR_18->type == VAR_4))
  && (VAR_21 == VAR_2))
  FUNC_5(1, "Unsupported device");

 VAR_28 = FUNC_9(VAR_9, VAR_18, VAR_14, VAR_15, VAR_16);
 if (VAR_28 != 0) {
  FUNC_17("Unable to get a firmware download timeout value");
  goto bailout;
 }

 VAR_22 = FUNC_11(VAR_9, VAR_15, VAR_16, VAR_27, VAR_19,
     VAR_18, &VAR_23);
 if (VAR_22 == ((void*)0)) {
  VAR_28 = 1;
  goto bailout;
 }

 if (!VAR_26) {
  FUNC_6(VAR_8, "You are about to download firmware image (%s)"
      " into the following device:\n",
      VAR_19);
  if (VAR_21 == VAR_2) {
   if (FUNC_16(VAR_9, VAR_10, VAR_11, VAR_12,
       VAR_3, 0, 5000) != 0) {
    FUNC_17("Error sending inquiry");
    VAR_28 = 1;
    goto bailout;
   }
  } else {
   FUNC_15("%s%d: ", VAR_9->device_name,
       VAR_9->dev_unit_num);
   FUNC_1(VAR_20);
   FUNC_4(VAR_9);
   FUNC_7(VAR_20);
  }
  FUNC_6(VAR_8, "Using a timeout of %u ms, which is %s.\n",
   VAR_18->timeout_ms,
   VAR_5[VAR_18->timeout_type].timeout_desc);
  FUNC_6(VAR_8, "\nIt may damage your drive. ");
  if (!FUNC_12()) {
   VAR_28 = 1;
   goto bailout;
  }
 }
 if ((VAR_25 != 0) && (VAR_27 == 0))
  FUNC_6(VAR_8, "Running in simulation mode\n");

 if (FUNC_8(VAR_9, VAR_18, VAR_22, VAR_23, VAR_25, VAR_13,
     VAR_27, VAR_15, VAR_18->timeout_ms, VAR_19, VAR_21) != 0) {
  FUNC_6(VAR_7, "Firmware download failed\n");
  VAR_28 = 1;
  goto bailout;
 } else if (VAR_27 == 0)
  FUNC_6(VAR_8, "Firmware download successful\n");

bailout:
 FUNC_2(VAR_17);
 FUNC_7(VAR_22);
 return (VAR_28);
}
