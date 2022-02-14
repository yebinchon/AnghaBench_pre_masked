
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
typedef scalar_t__ u_int64_t ;
struct ccb_getdev {int dummy; } ;
struct cam_device {char* device_name; int dev_unit_num; } ;
struct ata_params {int support2; } ;



 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct cam_device*,int,int,union ccb*,struct ata_params**) ;
 int FUNC_1 (struct cam_device*,int,int,union ccb*,scalar_t__*) ;
 int FUNC_2 (struct ata_params*) ;
 int FUNC_3 (struct cam_device*,int,int,union ccb*) ;
 int FUNC_4 (struct ata_params*,scalar_t__,int) ;
 int FUNC_5 (struct cam_device*,int,int,union ccb*,scalar_t__) ;
 int FUNC_6 (union ccb*) ;
 union ccb* FUNC_7 (struct cam_device*) ;
 int FUNC_8 (struct cam_device*) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (struct ata_params*) ;
 scalar_t__ FUNC_11 (struct cam_device*,struct ccb_getdev*) ;
 int FUNC_12 (int,char**,char*) ;
 int VAR_2 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (struct cam_device*) ;
 scalar_t__ FUNC_15 (int ,int *,int ) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static int
FUNC_17(struct cam_device *VAR_3, int VAR_4, int VAR_5,
       int VAR_6, char **VAR_7, char *VAR_8)
{
 union ccb *VAR_9;
 struct ata_params *VAR_10;
 struct ccb_getdev VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u_int64_t VAR_17, VAR_18;

 VAR_16 = 0;
 VAR_13 = 0;
 VAR_18 = 0;


 VAR_15 = VAR_0;

 while ((VAR_14 = FUNC_12(VAR_6, VAR_7, VAR_8)) != -1) {
  switch(VAR_14){
  case 's':
   VAR_15 = 128;
   VAR_18 = FUNC_15(VAR_2, ((void*)0), 0);
   VAR_16++;
   break;

  case 'f':
   VAR_15 = 129;
   VAR_16++;
   break;

  case 'q':
   VAR_13++;
   break;
  }
 }

 if (VAR_16 > 1) {
  FUNC_16("too many AMA actions specified");
  return (1);
 }

 if (FUNC_11(VAR_3, &VAR_11) != 0) {
  FUNC_16("couldn't get CGD");
  return (1);
 }

 VAR_9 = FUNC_7(VAR_3);
 if (VAR_9 == ((void*)0)) {
  FUNC_16("couldn't allocate CCB");
  return (1);
 }

 VAR_12 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_9, &VAR_10);
 if (VAR_12 != 0) {
  FUNC_6(VAR_9);
  return (1);
 }

 if (VAR_13 == 0) {
  FUNC_13("%s%d: ", VAR_3->device_name, VAR_3->dev_unit_num);
  FUNC_2(VAR_10);
  FUNC_8(VAR_3);
 }

 if (VAR_15 == VAR_0) {
  VAR_17 = 0;
  if (VAR_10->support2 & VAR_1)
   FUNC_1(VAR_3, VAR_4, VAR_5, VAR_9,
        &VAR_17);
  FUNC_4(VAR_10, VAR_17, 1);

  FUNC_6(VAR_9);
  FUNC_10(VAR_10);
  return (VAR_12);
 }

 if (!(VAR_10->support2 & VAR_1)) {
  FUNC_16("Accessible Max Address is not supported by this device");
  FUNC_6(VAR_9);
  FUNC_10(VAR_10);
  return (1);
 }

 switch(VAR_15) {
 case 128:
  VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_9,
        &VAR_17);
  if (VAR_12 == 0) {
   VAR_12 = FUNC_5(VAR_3, VAR_4, VAR_5,
           VAR_9, VAR_18);
   if (VAR_12 == 0) {
    if (VAR_13 == 0) {

     VAR_12 = FUNC_0(VAR_3,
         VAR_4, VAR_5, VAR_9,
         &VAR_10);
     FUNC_4(VAR_10, VAR_17, 1);
    }

    FUNC_14(VAR_3);
   }
  }
  break;

 case 129:
  VAR_12 = FUNC_3(VAR_3, VAR_4, VAR_5,
        VAR_9);
  if (VAR_12 == 0 && VAR_13 == 0)
   FUNC_13("Accessible Max Address has been frozen\n");
  break;

 default:
  FUNC_9(1, "Option currently not supported");
 }

 FUNC_6(VAR_9);
 FUNC_10(VAR_10);

 return (VAR_12);
}
