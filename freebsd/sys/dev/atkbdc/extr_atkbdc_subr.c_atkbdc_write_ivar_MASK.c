
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_int32_t ;
typedef int device_t ;
struct TYPE_2__ {void* compatid; void* logicalid; void* serial; void* vendorid; } ;
typedef TYPE_1__ atkbdc_device_t ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t VAR_4)
{
 atkbdc_device_t *VAR_5;

 VAR_5 = (atkbdc_device_t *)FUNC_0(VAR_2);
 switch (VAR_3) {
 case 128:
  VAR_5->vendorid = (u_int32_t)VAR_4;
  break;
 case 129:
  VAR_5->serial = (u_int32_t)VAR_4;
  break;
 case 130:
  VAR_5->logicalid = (u_int32_t)VAR_4;
  break;
 case 131:
  VAR_5->compatid = (u_int32_t)VAR_4;
  break;
 default:
  return VAR_0;
 }
 return 0;
}
