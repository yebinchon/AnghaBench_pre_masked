
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ flags; } ;
struct TYPE_3__ {int path_id; int target_id; int status; scalar_t__ target_lun; int func_code; } ;
union ccb {TYPE_2__ cdbg; TYPE_1__ ccb_h; } ;
typedef int uintmax_t ;
typedef int target_id_t ;
typedef int path_id_t ;
typedef scalar_t__ lun_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (union ccb*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (int,int ,union ccb*) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (int,int ) ;
 scalar_t__ VAR_26 ;
 int FUNC_7 (char*,int*,int*,scalar_t__*,int*) ;
 int VAR_27 ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static int
FUNC_11(int VAR_28, char **VAR_29, char *VAR_30)
{
 int VAR_31, VAR_32;
 path_id_t VAR_33 = VAR_8;
 target_id_t VAR_34 = VAR_21;
 lun_id_t VAR_35 = VAR_18;
 char *VAR_36;
 union ccb VAR_37;
 int VAR_38 = 0, VAR_39;

 FUNC_0(&VAR_37, sizeof(union ccb));

 while ((VAR_31 = FUNC_3(VAR_28, VAR_29, VAR_30)) != -1) {
  switch(VAR_31) {
  case 'I':
   VAR_25 |= VAR_2;
   VAR_37.cdbg.flags |= VAR_10;
   break;
  case 'P':
   VAR_25 |= VAR_3;
   VAR_37.cdbg.flags |= VAR_12;
   break;
  case 'S':
   VAR_25 |= VAR_5;
   VAR_37.cdbg.flags |= VAR_14;
   break;
  case 'T':
   VAR_25 |= VAR_6;
   VAR_37.cdbg.flags |= VAR_15;
   break;
  case 'X':
   VAR_25 |= VAR_7;
   VAR_37.cdbg.flags |= VAR_16;
   break;
  case 'c':
   VAR_25 |= VAR_1;
   VAR_37.cdbg.flags |= VAR_9;
   break;
  case 'p':
   VAR_25 |= VAR_4;
   VAR_37.cdbg.flags |= VAR_13;
   break;
  default:
   break;
  }
 }

 VAR_28 -= VAR_26;
 VAR_29 += VAR_26;

 if (VAR_28 <= 0) {
  FUNC_10("you must specify \"off\", \"all\" or a bus,");
  FUNC_10("bus:target, bus:target:lun or periph");
  return (1);
 }

 VAR_36 = *VAR_29;
 while (FUNC_5(*VAR_36) && (*VAR_36 != '\0'))
  VAR_36++;

 if (FUNC_8(VAR_36, "off", 3) == 0) {
  VAR_37.cdbg.flags = VAR_11;
  VAR_25 &= ~(VAR_2|VAR_3|
        VAR_6|VAR_5|
        VAR_7|VAR_4);
 } else {
  VAR_39 = FUNC_7(VAR_36, &VAR_33, &VAR_34, &VAR_35, &VAR_25);
  if (VAR_39 < 1) {
   FUNC_10("you must specify \"all\", \"off\", or a bus,");
   FUNC_10("bus:target, bus:target:lun or periph to debug");
   return (1);
  }
 }

 if ((VAR_32 = FUNC_6(VAR_24, VAR_22)) < 0) {
  FUNC_10("error opening transport layer device %s", VAR_24);
  FUNC_9("%s", VAR_24);
  return (1);
 }

 VAR_37.ccb_h.func_code = VAR_23;
 VAR_37.ccb_h.path_id = VAR_33;
 VAR_37.ccb_h.target_id = VAR_34;
 VAR_37.ccb_h.target_lun = VAR_35;

 if (FUNC_4(VAR_32, VAR_0, &VAR_37) == -1) {
  FUNC_9("CAMIOCOMMAND ioctl failed");
  VAR_38 = 1;
 } else {
  if ((VAR_37.ccb_h.status & VAR_20) ==
       VAR_17) {
   FUNC_10("CAM debugging not available");
   FUNC_10("you need to put options CAMDEBUG in"
         " your kernel config file!");
   VAR_38 = 1;
  } else if ((VAR_37.ccb_h.status & VAR_20) !=
       VAR_19) {
   FUNC_10("XPT_DEBUG CCB failed with status %#x",
         VAR_37.ccb_h.status);
   VAR_38 = 1;
  } else {
   if (VAR_37.cdbg.flags == VAR_11) {
    FUNC_2(VAR_27,
     "Debugging turned off\n");
   } else {
    FUNC_2(VAR_27,
     "Debugging enabled for "
     "%d:%d:%jd\n",
     VAR_33, VAR_34, (uintmax_t)VAR_35);
   }
  }
 }
 FUNC_1(VAR_32);

 return (VAR_38);
}
