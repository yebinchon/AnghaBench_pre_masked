
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int8_t ;
typedef int u_int ;
struct ccb_pathinq {scalar_t__ protocol; } ;
struct ccb_getdev {scalar_t__ protocol; } ;
struct cam_device {int dummy; } ;
struct ata_params {int dummy; } ;
typedef scalar_t__ int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct cam_device*,union ccb*,int,int ,int ,int,int ,scalar_t__,int ,int ,int,scalar_t__*,int,int,int ) ;
 int FUNC_1 (struct ata_params*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (struct cam_device*,struct ccb_getdev*) ;
 scalar_t__ FUNC_5 (struct cam_device*,struct ccb_pathinq*) ;
 int FUNC_6 (char*) ;

int
FUNC_7(struct cam_device *VAR_8, int VAR_9, int VAR_10,
  union ccb *VAR_11, struct ata_params** VAR_12)
{
 struct ata_params *VAR_13;
 struct ccb_pathinq VAR_14;
 struct ccb_getdev VAR_15;
 u_int VAR_16, VAR_17;
 int16_t *VAR_18;
 u_int8_t VAR_19, VAR_20;

 if (FUNC_5(VAR_8, &VAR_14) != 0) {
  FUNC_6("couldn't get CPI");
  return (-1);
 }


 if (VAR_14.protocol == VAR_7) {
  if (FUNC_4(VAR_8, &VAR_15) != 0) {
   FUNC_6("couldn't get CGD");
   return (-1);
  }

  VAR_19 = (VAR_15.protocol == VAR_7) ?
      VAR_4 : VAR_3;
  VAR_20 = 0;
 } else {

  VAR_19 = VAR_4;
  VAR_20 = VAR_3;
 }

 VAR_18 = (uint16_t *)FUNC_2(1, sizeof(struct ata_params));
 if (VAR_18 == ((void*)0)) {
  FUNC_6("can't calloc memory for identify\n");
  return (1);
 }

retry:
 VAR_17 = FUNC_0(VAR_8,
      VAR_11,
                 VAR_9,
               VAR_5,
                  VAR_2,
                   VAR_0 |
       VAR_1,
                    VAR_6,
                 VAR_19,
                  0,
             0,
                      sizeof(struct ata_params) / 512,
                  (u_int8_t *)VAR_18,
                   sizeof(struct ata_params),
                 VAR_10 ? VAR_10 : 30 * 1000,
                    0);

 if (VAR_17 != 0) {
  if (VAR_20 != 0) {
   VAR_19 = VAR_20;
   VAR_20 = 0;
   goto retry;
  }
  FUNC_3(VAR_18);
  return (1);
 }

 VAR_13 = (struct ata_params *)VAR_18;
 FUNC_1(VAR_13);

 VAR_17 = 1;
 for (VAR_16 = 0; VAR_16 < sizeof(struct ata_params) / 2; VAR_16++) {
  if (VAR_18[VAR_16] != 0)
   VAR_17 = 0;
 }


 if (VAR_17 != 0) {
  FUNC_6("Invalid identify response detected");
  FUNC_3(VAR_18);
  return (VAR_17);
 }

 *VAR_12 = VAR_13;

 return (0);
}
