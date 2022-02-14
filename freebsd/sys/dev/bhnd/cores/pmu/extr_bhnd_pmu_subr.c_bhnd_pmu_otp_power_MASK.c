
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int chip_id; } ;
struct bhnd_pmu_softc {TYPE_1__ cid; } ;
 int FUNC_0 (struct bhnd_pmu_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bhnd_pmu_softc*,int ,int) ;
 int FUNC_2 (struct bhnd_pmu_softc*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bhnd_pmu_softc*,char*,int) ;
 int FUNC_6 (struct bhnd_pmu_softc*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct bhnd_pmu_softc*,int,int) ;
 int FUNC_8 (struct bhnd_pmu_softc*,int*,int *) ;

int
FUNC_9(struct bhnd_pmu_softc *VAR_11, bool VAR_12)
{
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 int VAR_16;


 switch (VAR_11->cid.chip_id) {
 case 135:
 case 134:
 case 133:
 case 128:
  VAR_15 = FUNC_4(VAR_6);
  break;
 case 137:
  VAR_15 = FUNC_4(VAR_4);
  break;
 case 132:
  VAR_15 = FUNC_4(VAR_7);
  break;
 case 131:
  VAR_15 = FUNC_4(VAR_8);
  break;
 case 136:
  VAR_15 = FUNC_4(VAR_5);
  break;
 case 129:
  VAR_15 = FUNC_4(VAR_10);
  break;
 case 130:
  VAR_15 = FUNC_4(VAR_9);
  break;
 default:

  return (0);
 }


 VAR_13 = FUNC_7(VAR_11, VAR_15, 1);


 if ((VAR_16 = FUNC_8(VAR_11, &VAR_14, ((void*)0))))
  return (VAR_16);

 VAR_13 &= ~VAR_14;


 if (VAR_12) {
  uint32_t VAR_17;

  FUNC_5(VAR_11, "Adding rsrc 0x%x to min_res_mask\n",
      VAR_15 | VAR_13);
  FUNC_1(VAR_11, VAR_1, (VAR_15|VAR_13));


  for (int VAR_18 = 0; VAR_18 < VAR_0; VAR_18 += 10) {
   VAR_17 = FUNC_2(VAR_11, VAR_2);
   if ((VAR_17 & VAR_15) == VAR_15)
    break;

   FUNC_3(10);
  }

  if ((VAR_17 & VAR_15) != VAR_15) {
   FUNC_6(VAR_11, "timeout waiting for OTP resource "
       "enable\n");
   return (VAR_3);
  }
 } else {
  FUNC_5(VAR_11, "Removing rsrc 0x%x from min_res_mask\n",
      VAR_15 | VAR_13);
  FUNC_0(VAR_11, VAR_1, ~(VAR_15|VAR_13));
 }

 return (0);
}
