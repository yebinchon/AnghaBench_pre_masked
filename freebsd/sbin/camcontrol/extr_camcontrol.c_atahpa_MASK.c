
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef scalar_t__ u_int64_t ;
struct ccb_getdev {int dummy; } ;
struct cam_device {char* device_name; int dev_unit_num; } ;
struct ata_set_max_pwd {int password; } ;
struct TYPE_2__ {int command1; int command2; } ;
struct ata_params {TYPE_1__ support; } ;
typedef int pwd ;




 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cam_device*,int,int,union ccb*,struct ata_params**) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct ata_params*) ;
 int FUNC_3 (struct cam_device*,int,int,union ccb*,struct ata_params*,scalar_t__*) ;
 int FUNC_4 (struct cam_device*,int,int,union ccb*,int) ;
 int FUNC_5 (struct cam_device*,int,int,union ccb*,int) ;
 int FUNC_6 (struct cam_device*,int,int,union ccb*,int,struct ata_set_max_pwd*) ;
 int FUNC_7 (struct ata_params*,scalar_t__,int) ;
 int FUNC_8 (struct cam_device*,struct ata_params*,scalar_t__,int) ;
 int FUNC_9 (struct cam_device*,int,int,union ccb*,int,scalar_t__,int) ;
 int FUNC_10 (struct cam_device*,int,int,union ccb*,int,struct ata_set_max_pwd*) ;
 int FUNC_11 (union ccb*) ;
 union ccb* FUNC_12 (struct cam_device*) ;
 int FUNC_13 (struct cam_device*) ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 (struct ata_params*) ;
 scalar_t__ FUNC_16 (struct cam_device*,struct ccb_getdev*) ;
 int FUNC_17 (int,char**,char*) ;
 int FUNC_18 (struct ata_set_max_pwd*,int ,int) ;
 int VAR_4 ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (struct cam_device*) ;
 scalar_t__ FUNC_21 (int ,int *,int ) ;
 int FUNC_22 (char*) ;

__attribute__((used)) static int
FUNC_23(struct cam_device *VAR_5, int VAR_6, int VAR_7,
       int VAR_8, char **VAR_9, char *VAR_10)
{
 union ccb *VAR_11;
 struct ata_params *VAR_12;
 struct ccb_getdev VAR_13;
 struct ata_set_max_pwd VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24;
 u_int64_t VAR_25, VAR_26;

 VAR_20 = 0;
 VAR_16 = 0;
 VAR_17 = 0;
 VAR_26 = 0;
 VAR_21 = 0;
 VAR_22 = 0;

 FUNC_18(&VAR_14, 0, sizeof(VAR_14));


 VAR_19 = VAR_0;
 VAR_24 = sizeof(VAR_14.password);

 while ((VAR_18 = FUNC_17(VAR_8, VAR_9, VAR_10)) != -1) {
  switch(VAR_18){
  case 's':
   VAR_19 = 130;
   VAR_26 = FUNC_21(VAR_4, ((void*)0), 0);
   VAR_20++;
   break;

  case 'p':
   if (FUNC_1(VAR_14.password, VAR_24, VAR_18) != 0)
    return (1);
   VAR_19 = 129;
   VAR_22 = 1;
   VAR_20++;
   break;

  case 'l':
   VAR_19 = 131;
   VAR_22 = 1;
   VAR_20++;
   break;

  case 'U':
   if (FUNC_1(VAR_14.password, VAR_24, VAR_18) != 0)
    return (1);
   VAR_19 = 128;
   VAR_22 = 1;
   VAR_20++;
   break;

  case 'f':
   VAR_19 = 132;
   VAR_22 = 1;
   VAR_20++;
   break;

  case 'P':
   VAR_21 = 1;
   break;

  case 'y':
   VAR_16++;
   break;

  case 'q':
   VAR_17++;
   break;
  }
 }

 if (VAR_20 > 1) {
  FUNC_22("too many hpa actions specified");
  return (1);
 }

 if (FUNC_16(VAR_5, &VAR_13) != 0) {
  FUNC_22("couldn't get CGD");
  return (1);
 }

 VAR_11 = FUNC_12(VAR_5);
 if (VAR_11 == ((void*)0)) {
  FUNC_22("couldn't allocate CCB");
  return (1);
 }

 VAR_15 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_11, &VAR_12);
 if (VAR_15 != 0) {
  FUNC_11(VAR_11);
  return (1);
 }

 if (VAR_17 == 0) {
  FUNC_19("%s%d: ", VAR_5->device_name, VAR_5->dev_unit_num);
  FUNC_2(VAR_12);
  FUNC_13(VAR_5);
 }

 if (VAR_19 == VAR_0) {
  VAR_25 = 0;
  if (VAR_12->support.command1 & VAR_3)
   FUNC_3(VAR_5, VAR_6, VAR_7, VAR_11,
        VAR_12, &VAR_25);
  FUNC_7(VAR_12, VAR_25, 1);

  FUNC_11(VAR_11);
  FUNC_15(VAR_12);
  return (VAR_15);
 }

 if (!(VAR_12->support.command1 & VAR_3)) {
  FUNC_22("HPA is not supported by this device");
  FUNC_11(VAR_11);
  FUNC_15(VAR_12);
  return (1);
 }

 if (VAR_22 && !(VAR_12->support.command2 & VAR_2)) {
  FUNC_22("HPA Security is not supported by this device");
  FUNC_11(VAR_11);
  FUNC_15(VAR_12);
  return (1);
 }

 VAR_23 = VAR_12->support.command2 & VAR_1;






 switch(VAR_19) {
 case 130:
  if (VAR_16 == 0 &&
      FUNC_8(VAR_5, VAR_12, VAR_26,
      VAR_21) == 0) {
   FUNC_11(VAR_11);
   FUNC_15(VAR_12);
   return (1);
  }

  VAR_15 = FUNC_3(VAR_5, VAR_6, VAR_7,
         VAR_11, VAR_12, &VAR_25);
  if (VAR_15 == 0) {
   VAR_15 = FUNC_9(VAR_5, VAR_6, VAR_7,
            VAR_11, VAR_23, VAR_26, VAR_21);
   if (VAR_15 == 0) {
    if (VAR_17 == 0) {

     VAR_15 = FUNC_0(VAR_5,
         VAR_6, VAR_7, VAR_11,
         &VAR_12);
     FUNC_7(VAR_12, VAR_25, 1);
    }

    FUNC_20(VAR_5);
   }
  }
  break;

 case 129:
  VAR_15 = FUNC_6(VAR_5, VAR_6, VAR_7,
     VAR_11, VAR_23, &VAR_14);
  if (VAR_15 == 0 && VAR_17 == 0)
   FUNC_19("HPA password has been set\n");
  break;

 case 131:
  VAR_15 = FUNC_5(VAR_5, VAR_6, VAR_7,
        VAR_11, VAR_23);
  if (VAR_15 == 0 && VAR_17 == 0)
   FUNC_19("HPA has been locked\n");
  break;

 case 128:
  VAR_15 = FUNC_10(VAR_5, VAR_6, VAR_7,
          VAR_11, VAR_23, &VAR_14);
  if (VAR_15 == 0 && VAR_17 == 0)
   FUNC_19("HPA has been unlocked\n");
  break;

 case 132:
  VAR_15 = FUNC_4(VAR_5, VAR_6, VAR_7,
        VAR_11, VAR_23);
  if (VAR_15 == 0 && VAR_17 == 0)
   FUNC_19("HPA has been frozen\n");
  break;

 default:
  FUNC_14(1, "Option currently not supported");
 }

 FUNC_11(VAR_11);
 FUNC_15(VAR_12);

 return (VAR_15);
}
