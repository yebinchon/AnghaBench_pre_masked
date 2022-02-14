
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct axp8xx_softc {int nregs; int type; int nsensors; int warn_thres; int shut_thres; int gpiodev; int ih; int res; struct axp8xx_regdef* sensors; struct axp8xx_reg_sc** regs; int * config; int mtx; int addr; } ;
struct axp8xx_regdef {char* name; char* format; char* desc; int id; } ;
struct axp8xx_reg_sc {int dummy; } ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;
struct TYPE_2__ {int ocd_data; } ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_1 (int ,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_34 ;
 struct axp8xx_regdef* VAR_35 ;
 struct axp8xx_regdef* VAR_36 ;
 struct axp8xx_regdef* VAR_37 ;
 struct axp8xx_regdef* VAR_38 ;
 int VAR_39 ;
 scalar_t__ FUNC_3 (int ,int ,int*,int) ;
 struct axp8xx_reg_sc* FUNC_4 (int ,scalar_t__,struct axp8xx_regdef*) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ VAR_44 ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int,int *,int ,int ,int *) ;
 int VAR_45 ;
 int FUNC_8 (int ) ;
 struct axp8xx_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 struct axp8xx_reg_sc** FUNC_15 (int,int ,int) ;
 int FUNC_16 (int *,int ,int *,int ) ;
 int FUNC_17 (struct axp8xx_regdef*) ;
 scalar_t__ FUNC_18 (scalar_t__,char*) ;
 scalar_t__ FUNC_19 (int ) ;
 TYPE_1__* FUNC_20 (int ,int ) ;
 int VAR_46 ;

__attribute__((used)) static int
FUNC_21(device_t VAR_47)
{
 struct axp8xx_softc *VAR_48;
 struct axp8xx_reg_sc *VAR_49;
 uint8_t VAR_50, VAR_51;
 phandle_t VAR_52, VAR_53;
 int VAR_54, VAR_55;

 VAR_48 = FUNC_9(VAR_47);

 VAR_48->addr = FUNC_14(VAR_47);
 FUNC_16(&VAR_48->mtx, FUNC_8(VAR_47), ((void*)0), VAR_28);

 VAR_54 = FUNC_6(VAR_47, VAR_41, &VAR_48->res);
 if (VAR_54 != 0) {
  FUNC_12(VAR_47, "cannot allocate resources for device\n");
  return (VAR_54);
 }

 if (VAR_44) {
  FUNC_3(VAR_47, VAR_4, &VAR_50, 1);
  FUNC_12(VAR_47, "chip ID 0x%02x\n", VAR_50);
 }

 VAR_48->nregs = FUNC_17(VAR_37);
 VAR_48->type = FUNC_20(VAR_47, VAR_45)->ocd_data;
 switch (VAR_48->type) {
 case 129:
  VAR_48->nregs += FUNC_17(VAR_35);
  break;
 case 128:
  VAR_48->nregs += FUNC_17(VAR_36);
  break;
 }
 VAR_48->config = &VAR_34;
 VAR_48->sensors = VAR_38;
 VAR_48->nsensors = FUNC_17(VAR_38);

 VAR_48->regs = FUNC_15(sizeof(struct axp8xx_reg_sc *) * VAR_48->nregs,
     VAR_29, VAR_30 | VAR_31);


 VAR_52 = FUNC_18(FUNC_19(VAR_47), "regulators");
 if (VAR_52 > 0) {
  for (VAR_55 = 0; VAR_55 < VAR_48->nregs; VAR_55++) {
   char *VAR_56;
   struct axp8xx_regdef *VAR_57;

   if (VAR_55 <= FUNC_17(VAR_37)) {
    VAR_56 = VAR_37[VAR_55].name;
    VAR_57 = &VAR_37[VAR_55];
   } else {
    int VAR_58;

    VAR_58 = VAR_55 - FUNC_17(VAR_37);
    switch (VAR_48->type) {
    case 129:
     VAR_56 = VAR_35[VAR_58].name;
     VAR_57 = &VAR_35[VAR_58];
     break;
    case 128:
     VAR_56 = VAR_36[VAR_58].name;
     VAR_57 = &VAR_36[VAR_58];
     break;
    }
   }
   VAR_53 = FUNC_18(VAR_52,
       VAR_56);
   if (VAR_53 == 0)
    continue;
   VAR_49 = FUNC_4(VAR_47, VAR_53,
       VAR_57);
   if (VAR_49 == ((void*)0)) {
    FUNC_12(VAR_47,
        "cannot attach regulator %s\n",
        VAR_56);
    continue;
   }
   VAR_48->regs[VAR_55] = VAR_49;
  }
 }


 for (VAR_55 = 0; VAR_55 < VAR_48->nsensors; VAR_55++) {
  FUNC_1(FUNC_10(VAR_47),
      FUNC_2(FUNC_11(VAR_47)),
      VAR_32, VAR_48->sensors[VAR_55].name,
      VAR_25 | VAR_23,
      VAR_47, VAR_48->sensors[VAR_55].id, VAR_42,
      VAR_48->sensors[VAR_55].format,
      VAR_48->sensors[VAR_55].desc);
 }
 FUNC_1(FUNC_10(VAR_47),
     FUNC_2(FUNC_11(VAR_47)),
     VAR_32, "batchargecurrentstep",
     VAR_25 | VAR_24,
     VAR_47, 0, VAR_43,
     "I", "Battery Charging Current Step, "
     "0: 200mA, 1: 400mA, 2: 600mA, 3: 800mA, "
     "4: 1000mA, 5: 1200mA, 6: 1400mA, 7: 1600mA, "
     "8: 1800mA, 9: 2000mA, 10: 2200mA, 11: 2400mA, "
     "12: 2600mA, 13: 2800mA");


 if (FUNC_3(VAR_47, VAR_1, &VAR_51, 1) == 0) {
  VAR_48->warn_thres = (VAR_51 & VAR_2) >> 4;
  VAR_48->warn_thres += VAR_0;
  VAR_48->shut_thres = (VAR_51 & VAR_3);
  if (VAR_44) {
   FUNC_12(VAR_47,
       "Raw reg val: 0x%02x\n", VAR_51);
   FUNC_12(VAR_47,
       "Warning threshold: 0x%02x\n", VAR_48->warn_thres);
   FUNC_12(VAR_47,
       "Shutdown threshold: 0x%02x\n", VAR_48->shut_thres);
  }
 }


 FUNC_5(VAR_47, VAR_5,
     VAR_9 |
     VAR_8 |
     VAR_7 |
     VAR_6);
 FUNC_5(VAR_47, VAR_10,
     VAR_12 |
     VAR_11 |
     VAR_14 |
     VAR_13);
 FUNC_5(VAR_47, VAR_15, 0);
 FUNC_5(VAR_47, VAR_16,
     VAR_17 |
     VAR_18);
 FUNC_5(VAR_47, VAR_19,
     VAR_21 |
     VAR_20);
 FUNC_5(VAR_47, VAR_22, 0);


 VAR_54 = FUNC_7(VAR_47, VAR_48->res, VAR_27 | VAR_26,
     ((void*)0), VAR_39, VAR_47, &VAR_48->ih);
 if (VAR_54 != 0) {
  FUNC_12(VAR_47, "cannot setup interrupt handler\n");
  return (VAR_54);
 }

 FUNC_0(VAR_46, VAR_40, VAR_47,
     VAR_33);

 VAR_48->gpiodev = FUNC_13(VAR_47);

 return (0);
}
