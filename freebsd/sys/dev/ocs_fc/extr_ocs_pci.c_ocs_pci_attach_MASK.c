
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocs_softc {int instance_index; int hw_war_version; int ramlog; int fc_type; int dev; int ocs_xport; int dmat; int businfo; int pci_device; int pci_vendor; } ;
typedef int device_t ;


 int FUNC_0 (struct ocs_softc**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ocs_softc*,int ,int) ;
 int FUNC_8 (struct ocs_softc*) ;
 scalar_t__ FUNC_9 (struct ocs_softc*) ;
 int FUNC_10 (struct ocs_softc*) ;
 struct ocs_softc** VAR_11 ;
 scalar_t__ FUNC_11 (struct ocs_softc*) ;
 scalar_t__ FUNC_12 (int ,struct ocs_softc*) ;
 int FUNC_13 (struct ocs_softc*,int ) ;
 int FUNC_14 (struct ocs_softc*) ;
 scalar_t__ FUNC_15 (struct ocs_softc*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,int,char*,int,int,int) ;

__attribute__((used)) static int
FUNC_26(device_t VAR_12)
{
 struct ocs_softc *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_12);

 VAR_13 = (struct ocs_softc *)FUNC_3(VAR_12);
 if (((void*)0) == VAR_13) {
  FUNC_5(VAR_12, "cannot allocate softc\n");
  return VAR_3;
 }
 FUNC_7(VAR_13, 0, sizeof(struct ocs_softc));

 if (VAR_14 < FUNC_0(VAR_11)) {
  VAR_11[VAR_14] = VAR_13;
 } else {
  FUNC_5(VAR_12, "got unexpected ocs instance number %d\n", VAR_14);
 }

 VAR_13->instance_index = VAR_14;

 VAR_13->dev = VAR_12;

 FUNC_17(VAR_12, VAR_10);
 FUNC_16(VAR_12);

 VAR_13->pci_vendor = FUNC_24(VAR_12);
 VAR_13->pci_device = FUNC_20(VAR_12);
 FUNC_25(VAR_13->businfo, sizeof(VAR_13->businfo), "%02X:%02X:%02X",
  FUNC_18(VAR_12), FUNC_22(VAR_12), FUNC_21(VAR_12));


        if (FUNC_12(VAR_12, VAR_13)) {
  FUNC_5(VAR_12, "Failed to map pci bars\n");
  goto release_bus;
        }


 if (FUNC_1(FUNC_2(VAR_12),
    1,
    0,
    VAR_0,
    VAR_0,
    ((void*)0),
    ((void*)0),
    VAR_1,
    VAR_2,
    VAR_1,
    0,
    ((void*)0),
    ((void*)0),
    &VAR_13->dmat)) {
  FUNC_5(VAR_12, "parent DMA tag allocation failed\n");
  goto release_bus;
 }

 if (FUNC_11(VAR_13)) {
  FUNC_5(VAR_12, "Interrupt allocation failed\n");
  goto release_bus;
 }

 if (VAR_8 == FUNC_19(VAR_12) &&
   VAR_9 == FUNC_23(VAR_12))
  VAR_13->ocs_xport = VAR_7;
 else {
  FUNC_5(VAR_12, "unsupported class (%#x : %#x)\n",
    FUNC_19(VAR_12),
    FUNC_19(VAR_12));
  goto release_bus;
 }


 if (FUNC_15(VAR_13)) {
  FUNC_5(VAR_13->dev, "failed to setup params\n");
  goto release_bus;
 }

 if (FUNC_9(VAR_13)) {
  FUNC_5(VAR_13->dev, "failed to attach device\n");
  goto release_params;
 }

 VAR_13->fc_type = VAR_5;

 FUNC_8(VAR_13);

 return 0;

release_params:
 FUNC_13(VAR_13, VAR_13->ramlog);
 FUNC_10(VAR_13);
 FUNC_6(VAR_13->hw_war_version, VAR_6);
release_bus:
 FUNC_14(VAR_13);
 return VAR_4;
}
