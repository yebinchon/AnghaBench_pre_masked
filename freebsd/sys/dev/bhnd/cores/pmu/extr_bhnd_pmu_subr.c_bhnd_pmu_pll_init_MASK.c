
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_2__ {int chip_id; int chip_rev; } ;
struct bhnd_pmu_softc {TYPE_1__ cid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bhnd_pmu_softc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bhnd_pmu_softc*,int ,int,int ) ;
 int FUNC_2 (struct bhnd_pmu_softc*,int ) ;
 int FUNC_3 (struct bhnd_pmu_softc*) ;
 int FUNC_4 (struct bhnd_pmu_softc*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,int ,int ) ;
 int FUNC_8 (struct bhnd_pmu_softc*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct bhnd_pmu_softc*,int) ;
 int FUNC_10 (struct bhnd_pmu_softc*,int) ;

void
FUNC_11(struct bhnd_pmu_softc *VAR_6, u_int VAR_7)
{
 uint32_t VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11;

 switch (VAR_6->cid.chip_id) {
 case 159:

  break;
 case 154:
 case 153:
 case 146:
 case 134:
  if (VAR_6->cid.chip_rev != 0)
   break;

  VAR_9 = FUNC_2(VAR_6, VAR_3);
  VAR_8 = FUNC_2(VAR_6, VAR_3);
  VAR_10 = FUNC_6(VAR_4);
  VAR_11 = FUNC_6(VAR_5);


  FUNC_0(VAR_6, VAR_3, ~VAR_10);
  FUNC_0(VAR_6, VAR_2, ~VAR_10);
  FUNC_8(VAR_6, 0, VAR_0);


  FUNC_0(VAR_6, VAR_3, ~VAR_11);
  FUNC_0(VAR_6, VAR_2, ~VAR_11);
  FUNC_8(VAR_6, 0, VAR_0);

  FUNC_5(1000);

  FUNC_1(VAR_6, VAR_1, 0x380005c0, ~0);
  FUNC_5(100);

  FUNC_4(VAR_6, VAR_2, VAR_8);
  FUNC_5(100);
  FUNC_4(VAR_6, VAR_3, VAR_9);
  FUNC_5(100);

  break;
 case 140:
  FUNC_10(VAR_6, VAR_7);
  break;
 case 139:
  FUNC_9(VAR_6, VAR_7);
  break;
 case 129:
  if (VAR_7 == 0)
   VAR_7 = 25000;
  FUNC_9(VAR_6, VAR_7);
  break;
 case 138:
  if (VAR_7 == 0)
   VAR_7 = 38400;
  FUNC_10(VAR_6, VAR_7);
  break;

 case 158:
 case 152:
 case 161:
 case 160:
 case 151:
 case 150:
 case 133:
 case 132:
 case 149:
 case 144:
 case 143:
 case 141:
 case 145:
 case 142:
 case 136:
 case 130:
 case 157:
 case 148:
 case 147:
 case 131:
 case 128:

  break;

 case 156:
 case 155:
 case 135:
 case 137:
  FUNC_10(VAR_6, VAR_7);
  break;
 default:
  FUNC_7("No PLL init done for chip %#hx rev %d pmurev %d\n",
      VAR_6->cid.chip_id, VAR_6->cid.chip_rev, FUNC_3(VAR_6));
  break;
 }
}
