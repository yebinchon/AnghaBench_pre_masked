
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ config; } ;
struct ccb_getdev {int protocol; TYPE_1__ ident_data; } ;
struct cam_device {int dummy; } ;
typedef int camcontrol_devtype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int VAR_6 ;
 int FUNC_0 (struct cam_device*,int ,int,int,int) ;
 int FUNC_1 (struct cam_device*,struct ccb_getdev*) ;

int
FUNC_2(struct cam_device *VAR_7, int VAR_8, int VAR_9,
      int VAR_10, camcontrol_devtype *VAR_11)
{
 struct ccb_getdev VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_7, &VAR_12);
 if (VAR_13 != 0)
  goto bailout;

 switch (VAR_12.protocol) {
 case 128:
  break;
 case 133:
 case 132:
 case 129:
  *VAR_11 = VAR_0;
  goto bailout;
  break;
 case 130:
  *VAR_11 = VAR_2;
  goto bailout;
  break;
 case 131:
  *VAR_11 = VAR_1;
  goto bailout;
  break;
 default:
  *VAR_11 = VAR_5;
  goto bailout;
  break;
 }

 if (VAR_8 == -1) {






  if (VAR_12.ident_data.config != 0)
   *VAR_11 = VAR_3;
  else
   *VAR_11 = VAR_4;
 } else {
  VAR_13 = FUNC_0(VAR_7, VAR_6, VAR_8,
      VAR_9, VAR_10);
  if (VAR_13 == 1)
   *VAR_11 = VAR_3;
  else
   *VAR_11 = VAR_4;
 }
 VAR_13 = 0;

bailout:
 return (VAR_13);
}
