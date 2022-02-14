
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ow_devinfo {int romid; } ;
typedef int romid_t ;
typedef int device_t ;


 int VAR_0 ;


 struct ow_devinfo* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 struct ow_devinfo *VAR_5;
 romid_t **VAR_6;

 VAR_5 = FUNC_0(VAR_2);
 switch (VAR_3) {
 case 129:
  *VAR_4 = VAR_5->romid & 0xff;
  break;
 case 128:
  VAR_6 = (romid_t **)VAR_4;
  *VAR_6 = &VAR_5->romid;
  break;
 default:
  return VAR_0;
 }

 return 0;
}
