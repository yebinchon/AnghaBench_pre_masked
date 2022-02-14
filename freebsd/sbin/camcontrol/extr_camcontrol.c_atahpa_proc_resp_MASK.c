
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
typedef int u_int64_t ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_1 (struct cam_device*,union ccb*,int*,int *,int *,int*,int*) ;
 int VAR_6 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct cam_device *VAR_7, union ccb *VAR_8, u_int64_t *VAR_9)
{
 uint8_t VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 uint16_t VAR_13 = 0;
 uint64_t VAR_14 = 0;
 int VAR_15;

 VAR_15 = FUNC_1(VAR_7, VAR_8, &VAR_10, &VAR_13, &VAR_14, &VAR_11,
     &VAR_12);
 if (VAR_15 == 1) {
  if (VAR_5 & VAR_2) {
   FUNC_0(VAR_7, VAR_8, VAR_4,
     VAR_3, VAR_6);
  }
  FUNC_2("Can't get ATA command status");
  return (VAR_15);
 }

 if (VAR_12 & VAR_1) {
  if (VAR_5 & VAR_2) {
   FUNC_0(VAR_7, VAR_8, VAR_4,
     VAR_3, VAR_6);
  }

  if (VAR_10 & VAR_0) {
   FUNC_2("Max address has already been set since "
         "last power-on or hardware reset");
  } else if (VAR_9 == ((void*)0))
   FUNC_2("Command failed with ATA error");

  return (1);
 }

 if (VAR_9 != ((void*)0)) {
  if (VAR_15 == 2 || VAR_15 == 6)
   return (1);
  *VAR_9 = VAR_14;
 }

 return (0);
}
