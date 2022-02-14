
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct awusbphy_softc {int id_det_valid; int vbus_det_valid; int ** pmu; int * reg; struct aw_usbphy_conf* phy_conf; int vbus_det_pin; int id_det_pin; int * phy_ctrl; } ;
struct aw_usbphy_conf {int num_phys; } ;
typedef int regulator_t ;
typedef int pname ;
typedef int phandle_t ;
typedef int hwreset_t ;
typedef int device_t ;
typedef int clk_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 struct awusbphy_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int ,char*,int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int,int *) ;
 void* FUNC_9 (int,int ,int) ;
 scalar_t__ FUNC_10 (int ,char*,char*,int*) ;
 int FUNC_11 (int ) ;
 TYPE_1__* FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ,char*,int *) ;
 int FUNC_14 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_7)
{
 struct awusbphy_softc *VAR_8;
 phandle_t VAR_9;
 char VAR_10[20];
 int VAR_11, VAR_12, VAR_13;
 regulator_t VAR_14;
 hwreset_t VAR_15;
 clk_t VAR_16;

 VAR_8 = FUNC_4(VAR_7);
 VAR_9 = FUNC_11(VAR_7);

 VAR_8->phy_conf = (struct aw_usbphy_conf *)FUNC_12(VAR_7, VAR_6)->ocd_data;


 if (FUNC_10(VAR_9, "reg-names", "phy_ctrl", &VAR_13) != 0) {
  FUNC_5(VAR_7, "Cannot locate phy control resource\n");
  return (VAR_0);
 }
 VAR_8->phy_ctrl = FUNC_0(VAR_7, VAR_5, &VAR_13,
     VAR_4);
 if (VAR_8->phy_ctrl == ((void*)0)) {
  FUNC_5(VAR_7, "Cannot allocate resource\n");
  return (VAR_0);
 }


 for (VAR_12 = 0; FUNC_2(VAR_7, 0, VAR_12, &VAR_16) == 0; VAR_12++) {
  VAR_11 = FUNC_1(VAR_16);
  if (VAR_11 != 0) {
   FUNC_5(VAR_7, "couldn't enable clock %s\n",
       FUNC_3(VAR_16));
   return (VAR_11);
  }
 }


 for (VAR_12 = 0; FUNC_8(VAR_7, 0, VAR_12, &VAR_15) == 0; VAR_12++) {
  VAR_11 = FUNC_7(VAR_15);
  if (VAR_11 != 0) {
   FUNC_5(VAR_7, "couldn't de-assert reset %d\n",
       VAR_12);
   return (VAR_11);
  }
 }


 VAR_11 = FUNC_6(VAR_7, VAR_9, "usb0_id_det-gpios",
     &VAR_8->id_det_pin);
 if (VAR_11 == 0)
  VAR_8->id_det_valid = 1;
 VAR_11 = FUNC_6(VAR_7, VAR_9, "usb0_vbus_det-gpios",
     &VAR_8->vbus_det_pin);
 if (VAR_11 == 0)
  VAR_8->vbus_det_valid = 1;

 VAR_8->reg = FUNC_9(sizeof(*(VAR_8->reg)) * VAR_8->phy_conf->num_phys, VAR_1,
     VAR_2 | VAR_3);
 VAR_8->pmu = FUNC_9(sizeof(*(VAR_8->pmu)) * VAR_8->phy_conf->num_phys, VAR_1,
     VAR_2 | VAR_3);

 for (VAR_12 = 0; VAR_12 < VAR_8->phy_conf->num_phys; VAR_12++) {
  FUNC_14(VAR_10, sizeof(VAR_10), "usb%d_vbus-supply", VAR_12);
  if (FUNC_13(VAR_7, 0, VAR_10, &VAR_14) == 0)
   VAR_8->reg[VAR_12] = VAR_14;

  FUNC_14(VAR_10, sizeof(VAR_10), "pmu%d", VAR_12);
  if (FUNC_10(VAR_9, "reg-names",
      VAR_10, &VAR_13) != 0)
   continue;

  VAR_8->pmu[VAR_12] = FUNC_0(VAR_7, VAR_5, &VAR_13,
      VAR_4);
  if (VAR_8->pmu[VAR_12] == ((void*)0)) {
   FUNC_5(VAR_7, "Cannot allocate resource\n");
   return (VAR_0);
  }
 }

 return (0);
}
