
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef uintptr_t u_long ;
typedef int device_t ;
struct TYPE_2__ {int compatid; int logicalid; int serial; int vendorid; } ;
typedef TYPE_1__ atkbdc_device_t ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 atkbdc_device_t *VAR_5;

 VAR_5 = (atkbdc_device_t *)FUNC_0(VAR_2);
 switch (VAR_3) {
 case 128:
  *VAR_4 = (u_long)VAR_5->vendorid;
  break;
 case 129:
  *VAR_4 = (u_long)VAR_5->serial;
  break;
 case 130:
  *VAR_4 = (u_long)VAR_5->logicalid;
  break;
 case 131:
  *VAR_4 = (u_long)VAR_5->compatid;
  break;
 default:
  return VAR_0;
 }
 return 0;
}
