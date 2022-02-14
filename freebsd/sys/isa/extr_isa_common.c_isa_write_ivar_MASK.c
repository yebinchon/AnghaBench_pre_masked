
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isa_device {uintptr_t id_vendorid; uintptr_t id_serial; uintptr_t id_logicalid; uintptr_t id_compatid; uintptr_t id_config_attr; } ;
typedef int device_t ;


 struct isa_device* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
__attribute__((used)) static int
FUNC_1(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t VAR_5)
{
 struct isa_device* VAR_6 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 131:
 case 130:
 case 133:
 case 132:
 case 137:
 case 136:
 case 135:
 case 134:
 case 140:
 case 139:
 case 142:
 case 141:
  return (VAR_0);

 case 128:
  VAR_6->id_vendorid = VAR_5;
  break;

 case 129:
  VAR_6->id_serial = VAR_5;
  break;

 case 138:
  VAR_6->id_logicalid = VAR_5;
  break;

 case 144:
  VAR_6->id_compatid = VAR_5;
  break;

 case 143:
  VAR_6->id_config_attr = VAR_5;
  break;

 default:
  return (VAR_1);
 }

 return (0);
}
