
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int priority; } ;
struct TYPE_6__ {int timeout; int status; TYPE_2__ pinfo; scalar_t__ target_lun; scalar_t__ target_id; scalar_t__ path_id; int func_code; } ;
struct TYPE_4__ {int flags; } ;
union ccb {TYPE_3__ ccb_h; TYPE_1__ crcn; } ;
typedef scalar_t__ uintmax_t ;
typedef scalar_t__ target_id_t ;
struct cam_device {int dummy; } ;
typedef scalar_t__ path_id_t ;
typedef scalar_t__ lun_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (union ccb*,int) ;
 int FUNC_1 (struct cam_device*) ;
 scalar_t__ VAR_12 ;
 struct cam_device* FUNC_2 (scalar_t__,scalar_t__,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_3 (struct cam_device*,union ccb*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_6 (int,int ,union ccb*) ;
 int FUNC_7 (scalar_t__,int ) ;
 int VAR_13 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_10(path_id_t VAR_14, target_id_t VAR_15, lun_id_t VAR_16, int VAR_17)
{
 union ccb VAR_18;
 struct cam_device *VAR_19;
 int VAR_20;

 VAR_19 = ((void*)0);

 if (VAR_14 == VAR_2) {
  FUNC_9("invalid bus number %d", VAR_14);
  return (1);
 }

 if (VAR_15 == VAR_7) {
  FUNC_9("invalid target number %d", VAR_15);
  return (1);
 }

 if (VAR_16 == VAR_4) {
  FUNC_9("invalid lun number %jx", (uintmax_t)VAR_16);
  return (1);
 }

 VAR_20 = -1;

 FUNC_0(&VAR_18, sizeof(union ccb));

 if (VAR_17) {
  if ((VAR_20 = FUNC_7(VAR_9, VAR_8)) < 0) {
   FUNC_9("error opening transport layer device %s\n",
       VAR_9);
   FUNC_8("%s", VAR_9);
   return (1);
  }
 } else {
  VAR_19 = FUNC_2(VAR_14, VAR_15, VAR_16, VAR_8, ((void*)0));
  if (VAR_19 == ((void*)0)) {
   FUNC_9("%s", VAR_12);
   return (1);
  }
 }

 VAR_18.ccb_h.func_code = (VAR_17)? VAR_11 : VAR_10;
 VAR_18.ccb_h.path_id = VAR_14;
 VAR_18.ccb_h.target_id = VAR_15;
 VAR_18.ccb_h.target_lun = VAR_16;
 VAR_18.ccb_h.timeout = 5000;
 VAR_18.crcn.flags = VAR_3;


 VAR_18.ccb_h.pinfo.priority = 5;

 if (VAR_17) {
  if (FUNC_6(VAR_20, VAR_0, &VAR_18) < 0) {
   FUNC_8("CAMIOCOMMAND ioctl failed");
   FUNC_4(VAR_20);
   return (1);
  }
 } else {
  if (FUNC_3(VAR_19, &VAR_18) < 0) {
   FUNC_8("error sending XPT_RESET_DEV CCB");
   FUNC_1(VAR_19);
   return (1);
  }
 }

 if (VAR_17)
  FUNC_4(VAR_20);
 else
  FUNC_1(VAR_19);




 if (((VAR_18.ccb_h.status & VAR_6) == VAR_5)
  || ((!VAR_17)
   && ((VAR_18.ccb_h.status & VAR_6) == VAR_1))) {
  FUNC_5(VAR_13, "%s of %ld:%ld:%jx was successful\n",
      VAR_17? "Re-scan" : "Reset", VAR_14, VAR_15, (uintmax_t)VAR_16);
  return (0);
 } else {
  FUNC_5(VAR_13, "%s of %ld:%ld:%jx returned error %#x\n",
      VAR_17? "Re-scan" : "Reset", VAR_14, VAR_15, (uintmax_t)VAR_16,
      VAR_18.ccb_h.status & VAR_6);
  return (1);
 }
}
