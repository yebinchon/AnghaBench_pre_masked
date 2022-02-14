
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int u_int64_t ;
struct cam_device {char* device_name; int dev_unit_num; } ;
struct TYPE_2__ {int command1; } ;
struct ata_params {int support2; TYPE_1__ support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct cam_device*,int,int,union ccb*,struct ata_params**) ;
 int FUNC_1 (struct cam_device*,int,int,union ccb*,int *) ;
 int FUNC_2 (struct ata_params*) ;
 int FUNC_3 (struct cam_device*,int,int,union ccb*,struct ata_params*,int *) ;
 int FUNC_4 (struct ata_params*,int ,int ) ;
 int FUNC_5 (struct ata_params*) ;
 int FUNC_6 (struct ata_params*,int ,int ) ;
 int FUNC_7 (union ccb*) ;
 union ccb* FUNC_8 (struct cam_device*) ;
 int FUNC_9 (struct cam_device*) ;
 int FUNC_10 (void*,int) ;
 int FUNC_11 (struct ata_params*) ;
 int FUNC_12 (char*,char*,int ) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int
FUNC_14(struct cam_device *VAR_4, int VAR_5, int VAR_6)
{
 union ccb *VAR_7;
 struct ata_params *VAR_8;
 u_int64_t VAR_9 = 0, VAR_10 = 0;

 if ((VAR_7 = FUNC_8(VAR_4)) == ((void*)0)) {
  FUNC_13("couldn't allocate CCB");
  return (1);
 }

 if (FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, &VAR_8) != 0) {
  FUNC_7(VAR_7);
  return (1);
 }

 if (VAR_3 & VAR_2) {
  FUNC_12("%s%d: Raw identify data:\n",
      VAR_4->device_name, VAR_4->dev_unit_num);
  FUNC_10((void*)VAR_8, sizeof(struct ata_params));
 }

 if (VAR_8->support.command1 & VAR_1) {
  FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_8, &VAR_9);
 }
 if (VAR_8->support2 & VAR_0) {
  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7,
       &VAR_10);
 }

 FUNC_12("%s%d: ", VAR_4->device_name, VAR_4->dev_unit_num);
 FUNC_2(VAR_8);
 FUNC_9(VAR_4);
 FUNC_5(VAR_8);
 FUNC_6(VAR_8, VAR_9, 0);
 FUNC_4(VAR_8, VAR_10, 0);

 FUNC_11(VAR_8);
 FUNC_7(VAR_7);

 return (0);
}
