
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int hdp_offset; int queue_slots; int active; int avail; int lock; } ;
struct cpsw_softc {int active_slave; int dualemac; TYPE_1__* port; TYPE_3__ rx; TYPE_3__ tx; int nullpad; int mbuf_dtag; int dev; int * mem_res; scalar_t__ mem_rid; int irq_res; int node; int attach_uptime; } ;
typedef int device_t ;
struct TYPE_5__ {int vid; } ;
struct TYPE_4__ {int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 scalar_t__ FUNC_2 (int ,char*,int*,int) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int VAR_14 ;
 int FUNC_4 (int *) ;
 int VAR_15 ;
 int * FUNC_5 (int ,int ,scalar_t__*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct cpsw_softc*,TYPE_3__*,int) ;
 int FUNC_12 (struct cpsw_softc*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct cpsw_softc*,int) ;
 int FUNC_15 (struct cpsw_softc*) ;
 int FUNC_16 (struct cpsw_softc*) ;
 int FUNC_17 (struct cpsw_softc*) ;
 int FUNC_18 (struct cpsw_softc*,int ) ;
 int FUNC_19 (struct cpsw_softc*) ;
 TYPE_2__* VAR_16 ;
 int * FUNC_20 (int ,char*,int) ;
 int FUNC_21 (int ) ;
 struct cpsw_softc* FUNC_22 (int ) ;
 int FUNC_23 (int ,char*,...) ;
 int FUNC_24 (int *) ;
 int VAR_17 ;
 int FUNC_25 (int ,int ,int) ;
 int FUNC_26 (int *,int ,char*,int ) ;
 int FUNC_27 (int ) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_18)
{
 int VAR_19, VAR_20;
 struct cpsw_softc *VAR_21;
 uint32_t VAR_22;

 VAR_21 = FUNC_22(VAR_18);
 VAR_21->dev = VAR_18;
 VAR_21->node = FUNC_27(VAR_18);
 FUNC_24(&VAR_21->attach_uptime);

 if (FUNC_2(VAR_21->node, "active_slave", &VAR_21->active_slave,
     sizeof(VAR_21->active_slave)) <= 0) {
  VAR_21->active_slave = 0;
 }
 if (VAR_21->active_slave > 1)
  VAR_21->active_slave = 1;

 if (FUNC_3(VAR_21->node, "dual_emac"))
  VAR_21->dualemac = 1;

 for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++) {
  if (!VAR_21->dualemac && VAR_20 != VAR_21->active_slave)
   continue;
  if (FUNC_14(VAR_21, VAR_20) != 0) {
   FUNC_23(VAR_18,
       "failed to get PHY address from FDT\n");
   return (VAR_7);
  }
 }


 FUNC_26(&VAR_21->tx.lock, FUNC_21(VAR_18),
     "cpsw TX lock", VAR_10);
 FUNC_26(&VAR_21->rx.lock, FUNC_21(VAR_18),
     "cpsw RX lock", VAR_10);


 VAR_19 = FUNC_6(VAR_18, VAR_17, VAR_21->irq_res);
 if (VAR_19) {
  FUNC_23(VAR_18, "could not allocate IRQ resources\n");
  FUNC_13(VAR_18);
  return (VAR_7);
 }

 VAR_21->mem_rid = 0;
 VAR_21->mem_res = FUNC_5(VAR_18, VAR_15,
     &VAR_21->mem_rid, VAR_14);
 if (VAR_21->mem_res == ((void*)0)) {
  FUNC_23(VAR_21->dev, "failed to allocate memory resource\n");
  FUNC_13(VAR_18);
  return (VAR_7);
 }

 VAR_22 = FUNC_18(VAR_21, VAR_3);
 FUNC_23(VAR_18, "CPSW SS Version %d.%d (%d)\n", (VAR_22 >> 8 & 0x7),
  VAR_22 & 0xFF, (VAR_22 >> 11) & 0x1F);

 FUNC_12(VAR_21);


 VAR_19 = FUNC_7(
  FUNC_10(VAR_21->dev),
  1, 0,
  VAR_1,
  VAR_0,
  ((void*)0), ((void*)0),
  VAR_9, VAR_4,
  VAR_9, 0,
  ((void*)0), ((void*)0),
  &VAR_21->mbuf_dtag);
 if (VAR_19) {
  FUNC_23(VAR_18, "bus_dma_tag_create failed\n");
  FUNC_13(VAR_18);
  return (VAR_19);
 }


 VAR_21->nullpad = FUNC_25(VAR_8, VAR_11, VAR_12 | VAR_13);

 FUNC_16(VAR_21);


 FUNC_4(&VAR_21->rx.avail);
 FUNC_4(&VAR_21->rx.active);
 FUNC_4(&VAR_21->tx.avail);
 FUNC_4(&VAR_21->tx.active);


 if (FUNC_11(VAR_21, &VAR_21->tx, 128) ||
     FUNC_11(VAR_21, &VAR_21->rx, -1)) {
  FUNC_23(VAR_18, "failed to allocate dmamaps\n");
  FUNC_13(VAR_18);
  return (VAR_6);
 }
 FUNC_23(VAR_18, "Initial queue size TX=%d RX=%d\n",
     VAR_21->tx.queue_slots, VAR_21->rx.queue_slots);

 VAR_21->tx.hdp_offset = FUNC_1(0);
 VAR_21->rx.hdp_offset = FUNC_0(0);

 if (FUNC_17(VAR_21) == -1) {
  FUNC_23(VAR_18, "failed to setup interrupts\n");
  FUNC_13(VAR_18);
  return (VAR_7);
 }







 FUNC_19(VAR_21);
 FUNC_15(VAR_21);

 for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++) {
  if (!VAR_21->dualemac && VAR_20 != VAR_21->active_slave)
   continue;
  VAR_21->port[VAR_20].dev = FUNC_20(VAR_18, "cpsw", VAR_20);
  if (VAR_21->port[VAR_20].dev == ((void*)0)) {
   FUNC_13(VAR_18);
   return (VAR_7);
  }
 }
 FUNC_9(VAR_18);
 FUNC_8(VAR_18);

 return (0);
}
