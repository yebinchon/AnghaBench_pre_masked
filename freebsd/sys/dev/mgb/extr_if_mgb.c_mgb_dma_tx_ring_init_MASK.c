
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_ring_data {scalar_t__ ring_bus_addr; scalar_t__ head_wb_bus_addr; int last_tail; void* last_head; } ;
struct mgb_softc {int dev; struct mgb_ring_data tx_ring_data; } ;


 void* FUNC_0 (struct mgb_softc*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct mgb_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct mgb_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int VAR_9 ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (struct mgb_softc*,int ,int,int ) ;
 int FUNC_16 (struct mgb_softc*,int ,int,int ) ;

__attribute__((used)) static int
FUNC_17(struct mgb_softc *VAR_10, int VAR_11)
{
 struct mgb_ring_data *VAR_12;
 int VAR_13, VAR_14 = 0;

 VAR_12 = &VAR_10->tx_ring_data;
 if ((VAR_14 = FUNC_16(VAR_10, VAR_9, VAR_11, VAR_3))) {
  FUNC_14(VAR_10->dev, "Failed to reset TX FCT.\n");
  goto fail;
 }
 if ((VAR_14 = FUNC_16(VAR_10, VAR_9, VAR_11,
     VAR_2))) {
  FUNC_14(VAR_10->dev, "Failed to enable TX FCT.\n");
  goto fail;
 }
 if ((VAR_14 = FUNC_15(VAR_10, VAR_4, VAR_11,
     VAR_0))) {
  FUNC_14(VAR_10->dev, "Failed to reset TX DMAC.\n");
  goto fail;
 }
 FUNC_4(FUNC_5(VAR_10, VAR_4, VAR_11),
     ("Trying to init channels in not init state\n"));


 if (VAR_12->ring_bus_addr == 0) {
  FUNC_14(VAR_10->dev, "Invalid ring bus addr.\n");
  goto fail;
 }
 FUNC_3(VAR_10, FUNC_6(VAR_11),
     FUNC_1(VAR_12->ring_bus_addr));
 FUNC_3(VAR_10, FUNC_7(VAR_11),
     FUNC_2(VAR_12->ring_bus_addr));


 VAR_13 = FUNC_0(VAR_10, FUNC_9(VAR_11));
 VAR_13 &= ~VAR_7;
 VAR_13 |= (VAR_8 & VAR_7);
 FUNC_3(VAR_10, FUNC_9(VAR_11), VAR_13);


 VAR_13 = (VAR_6 | VAR_5);
 FUNC_3(VAR_10, FUNC_8(VAR_11), VAR_13);


 if (VAR_12->head_wb_bus_addr == 0) {
  FUNC_14(VAR_10->dev, "Invalid head wb bus addr.\n");
  goto fail;
 }
 FUNC_3(VAR_10, FUNC_11(VAR_11),
     FUNC_1(VAR_12->head_wb_bus_addr));
 FUNC_3(VAR_10, FUNC_12(VAR_11),
     FUNC_2(VAR_12->head_wb_bus_addr));

 VAR_12->last_head = FUNC_0(VAR_10, FUNC_10(VAR_11));
 FUNC_4(VAR_12->last_head == 0, ("MGB_DMA_TX_HEAD was not reset.\n"));
 VAR_12->last_tail = 0;
 FUNC_3(VAR_10, FUNC_13(VAR_11), VAR_12->last_tail);

 if ((VAR_14 = FUNC_15(VAR_10, VAR_4, VAR_11,
     VAR_1)))
  FUNC_14(VAR_10->dev, "Failed to start TX DMAC.\n");
fail:
 return VAR_14;
}
