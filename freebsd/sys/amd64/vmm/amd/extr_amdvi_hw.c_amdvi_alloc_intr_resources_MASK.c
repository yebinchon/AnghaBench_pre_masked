
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct amdvi_softc {int event_irq; struct amdvi_ctrl* ctrl; int dev; int event_tag; int * event_res; scalar_t__ event_rid; int pci_rid; } ;
struct amdvi_ctrl {int status; } ;
typedef int device_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,int,int*) ;
 int FUNC_1 (int ,int ,int,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,int ,scalar_t__*,int ) ;
 int FUNC_7 (int ,int *,int ,char*) ;
 int FUNC_8 (int ,int ,scalar_t__,int *) ;
 int FUNC_9 (int ,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_10 (int ,int *,int,int *,int ,struct amdvi_softc*,int *) ;
 TYPE_1__* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_17(struct amdvi_softc *VAR_10)
{
 struct amdvi_ctrl *VAR_11;
 device_t VAR_12, VAR_13;
 device_t VAR_14;
 uint64_t VAR_15;
 uint32_t VAR_16;
 int VAR_17;

 VAR_12 = VAR_10->dev;
 VAR_13 = FUNC_12(FUNC_12(VAR_12));
 VAR_14 = FUNC_16(FUNC_2(VAR_10->pci_rid),
            FUNC_4(VAR_10->pci_rid), FUNC_3(VAR_10->pci_rid));
 if (FUNC_13(VAR_14)) {
  FUNC_14(VAR_12,
      "warning: IOMMU device is claimed by another driver %s\n",
      FUNC_11(VAR_14)->name);
 }

 VAR_10->event_irq = -1;
 VAR_10->event_rid = 0;





 VAR_17 = FUNC_0(VAR_13, VAR_12, 1, 1, &VAR_10->event_irq);
 if (VAR_17) {
  FUNC_14(VAR_12,
      "Couldn't find event MSI IRQ resource.\n");
  return (VAR_2);
 }

 VAR_17 = FUNC_9(VAR_12, VAR_8, VAR_10->event_rid,
     VAR_10->event_irq, 1);
 if (VAR_17) {
  FUNC_14(VAR_12, "Couldn't set event MSI resource.\n");
  return (VAR_4);
 }

 VAR_10->event_res = FUNC_6(VAR_12, VAR_8,
     &VAR_10->event_rid, VAR_7);
 if (!VAR_10->event_res) {
  FUNC_14(VAR_12,
      "Unable to allocate event INTR resource.\n");
  return (VAR_3);
 }

 if (FUNC_10(VAR_12, VAR_10->event_res,
     VAR_6 | VAR_5, ((void*)0), VAR_9,
     VAR_10, &VAR_10->event_tag)) {
  FUNC_14(VAR_12, "Fail to setup event intr\n");
  FUNC_8(VAR_10->dev, VAR_8,
      VAR_10->event_rid, VAR_10->event_res);
  VAR_10->event_res = ((void*)0);
  return (VAR_4);
 }

 FUNC_7(VAR_12, VAR_10->event_res, VAR_10->event_tag,
     "fault");

 VAR_17 = FUNC_1(VAR_13, VAR_12, VAR_10->event_irq, &VAR_15,
     &VAR_16);
 if (VAR_17) {
  FUNC_14(VAR_12,
      "Event interrupt config failed, err=%d.\n",
      VAR_17);
  FUNC_5(VAR_10->dev);
  return (VAR_17);
 }


 VAR_11 = VAR_10->ctrl;
 VAR_11->status &= VAR_1 | VAR_0;


 FUNC_15(VAR_14, VAR_15, VAR_16);
 return (0);
}
