
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_ring_data {scalar_t__ ring_bus_addr; scalar_t__ head_wb_bus_addr; void* last_head; } ;
struct mgb_softc {int dev; struct mgb_ring_data rx_ring_data; } ;


 void* FUNC_0 (struct mgb_softc*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct mgb_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char*) ;
 int VAR_4 ;
 int FUNC_5 (struct mgb_softc*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_10 ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct mgb_softc*,int ,int,int ) ;
 int FUNC_15 (struct mgb_softc*,int ,int,int ) ;

__attribute__((used)) static int
FUNC_16(struct mgb_softc *VAR_11, int VAR_12)
{
 struct mgb_ring_data *VAR_13;
 int VAR_14, VAR_15 = 0;

 VAR_13 = &VAR_11->rx_ring_data;
 FUNC_14(VAR_11, VAR_4, 0, VAR_0);
 FUNC_4(FUNC_5(VAR_11, VAR_4, VAR_12),
     ("Trying to init channels when not in init state\n"));


 if (VAR_13->ring_bus_addr == 0) {
  FUNC_13(VAR_11->dev, "Invalid ring bus addr.\n");
  goto fail;
 }

 FUNC_3(VAR_11, FUNC_6(VAR_12),
     FUNC_1(VAR_13->ring_bus_addr));
 FUNC_3(VAR_11, FUNC_7(VAR_12),
     FUNC_2(VAR_13->ring_bus_addr));


 if (VAR_13->head_wb_bus_addr == 0) {
  FUNC_13(VAR_11->dev, "Invalid head wb bus addr.\n");
  goto fail;
 }
 FUNC_3(VAR_11, FUNC_11(VAR_12),
     FUNC_1(VAR_13->head_wb_bus_addr));
 FUNC_3(VAR_11, FUNC_12(VAR_12),
     FUNC_2(VAR_13->head_wb_bus_addr));


 FUNC_3(VAR_11, FUNC_8(VAR_12), VAR_5);

 VAR_14 = FUNC_0(VAR_11, FUNC_9(VAR_12));

 VAR_14 &= ~VAR_6;
 VAR_14 |= (VAR_9 & VAR_6);

 VAR_14 &= ~VAR_8;
 VAR_14 |= (VAR_7 & VAR_8);

 FUNC_3(VAR_11, FUNC_9(VAR_12), VAR_14);

 VAR_13->last_head = FUNC_0(VAR_11, FUNC_10(VAR_12));

 FUNC_15(VAR_11, VAR_10, VAR_12, VAR_3);
 if (VAR_15 != 0) {
  FUNC_13(VAR_11->dev, "Failed to reset RX FCT.\n");
  goto fail;
 }
 FUNC_15(VAR_11, VAR_10, VAR_12, VAR_2);
 if (VAR_15 != 0) {
  FUNC_13(VAR_11->dev, "Failed to enable RX FCT.\n");
  goto fail;
 }
 FUNC_14(VAR_11, VAR_4, VAR_12, VAR_1);
 if (VAR_15 != 0)
  FUNC_13(VAR_11->dev, "Failed to start RX DMAC.\n");
fail:
 return (VAR_15);
}
