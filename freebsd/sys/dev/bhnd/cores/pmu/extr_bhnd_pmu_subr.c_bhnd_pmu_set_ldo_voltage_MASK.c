
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int chip_id; } ;
struct bhnd_pmu_softc {TYPE_1__ cid; int chipc_dev; } ;


 int FUNC_0 (int ) ;







 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct bhnd_pmu_softc*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct bhnd_pmu_softc*,char*,int) ;
int
FUNC_4(struct bhnd_pmu_softc *VAR_2, uint8_t VAR_3,
    uint8_t VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint8_t VAR_7;
 uint8_t VAR_8;
 uint8_t VAR_9;

 switch (VAR_2->cid.chip_id) {
 case 142:
 case 138:
  switch (VAR_3) {
  case 133:
   VAR_9 = 2;
   VAR_7 = 17 + 8;
   VAR_8 = 0xf;
   break;
  case 132:
   VAR_9 = 3;
   VAR_7 = 1;
   VAR_8 = 0xf;
   break;
  case 131:
   VAR_9 = 3;
   VAR_7 = 9;
   VAR_8 = 0xf;
   break;
  case 128:
   VAR_9 = 3;
   VAR_7 = 17;
   VAR_8 = 0x3f;
   break;
  default:
   FUNC_3(VAR_2, "unknown BCM4328/BCM5354 LDO %hhu\n", VAR_3);
   return (VAR_1);
  }
  break;
 case 144:
  switch (VAR_3) {
  case 128:
   VAR_9 = 0;
   VAR_7 = 21;
   VAR_8 = 0x3f;
   break;
  default:
   FUNC_3(VAR_2, "unknown BCM4312 LDO %hhu\n", VAR_3);
   return (VAR_1);
  }
  break;
 case 143:
  switch (VAR_3) {
  case 134:
   VAR_9 = 5;
   VAR_7 = 9;
   VAR_8 = 0xf;
   break;
  case 135:
   VAR_9 = 5;
   VAR_7 = 13;
   VAR_8 = 0xf;
   break;
  case 136:
   VAR_9 = 3;
   VAR_7 = 20;
   VAR_8 = 0x1f;

   VAR_5 = FUNC_0(VAR_2->chipc_dev);
   if (FUNC_1(VAR_5, VAR_0))
    VAR_4 ^= 0x9;
   break;
  case 137:
   VAR_9 = 3;
   VAR_7 = 25;
   VAR_8 = 0x1f;

   VAR_5 = FUNC_0(VAR_2->chipc_dev);
   if (FUNC_1(VAR_5, VAR_0))
    VAR_4 ^= 0x9;
   break;
  case 130:
   VAR_9 = 5;
   VAR_7 = 17;
   VAR_8 = 0x1f;
   break;
  case 129:
   VAR_9 = 6;
   VAR_7 = 0;
   VAR_8 = 0x1;
   break;
  default:
   FUNC_3(VAR_2, "unknown BCM4325 LDO %hhu\n", VAR_3);
   return (VAR_1);
  }
  break;
 case 139:
  switch (VAR_3) {
  case 134:
   VAR_9 = 4;
   VAR_7 = 1;
   VAR_8 = 0xf;
   break;
  case 135:
   VAR_9 = 4;
   VAR_7 = 5;
   VAR_8 = 0xf;
   break;
  case 130:
   VAR_9 = 4;
   VAR_7 = 17;
   VAR_8 = 0xf;
   break;
  default:
   FUNC_3(VAR_2, "unknown BCM4336 LDO %hhu\n", VAR_3);
   return (VAR_1);
  }
  break;
 case 141:
  switch (VAR_3) {
  case 136:
   VAR_9 = 3;
   VAR_7 = 0;
   VAR_8 = 0x1f;
   break;
  default:
   FUNC_3(VAR_2, "unknown BCM4330 LDO %hhu\n", VAR_3);
   return (VAR_1);
  }
  break;
 case 140:
  switch (VAR_3) {
  case 128:
   VAR_9 = 1;
   VAR_7 = 0;
   VAR_8 = 0xf;
   break;
  default:
   FUNC_3(VAR_2, "unknown BCM4331 LDO %hhu\n", VAR_3);
   return (VAR_1);
  }
  break;
 default:
  FUNC_3(VAR_2, "cannot set LDO voltage on unsupported chip %hu\n",
      VAR_2->cid.chip_id);
  return (VAR_1);
 }

 VAR_6 = (VAR_4 & VAR_8) << VAR_7;
 FUNC_2(VAR_2, VAR_9, VAR_6, VAR_8 << VAR_7);

 return (0);
}
