
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int active; } ;
struct TYPE_3__ {int active; } ;
struct cpsw_softc {TYPE_2__ rx; TYPE_1__ tx; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cpsw_softc*) ;
 int FUNC_5 (struct cpsw_softc*,int *) ;
 int FUNC_6 (struct cpsw_softc*,int ) ;
 int FUNC_7 (struct cpsw_softc*,int ,int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void
FUNC_11(struct cpsw_softc *VAR_3)
{
 uint32_t VAR_4;
 uint32_t VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_10("\n\n");
 FUNC_8(VAR_3->dev,
     "HOST ERROR:  PROGRAMMING ERROR DETECTED BY HARDWARE\n");
 FUNC_10("\n\n");
 VAR_4 = FUNC_6(VAR_3, VAR_2);
 FUNC_8(VAR_3->dev, "CPSW_CPDMA_DMA_INTSTAT_MASKED=0x%x\n", VAR_4);
 VAR_5 = FUNC_6(VAR_3, VAR_0);
 FUNC_8(VAR_3->dev, "CPSW_CPDMA_DMASTATUS=0x%x\n", VAR_5);

 VAR_6 = (VAR_5 >> 20) & 15;
 VAR_8 = (VAR_5 >> 16) & 7;
 VAR_7 = (VAR_5 >> 12) & 15;
 VAR_9 = (VAR_5 >> 8) & 7;

 switch (VAR_6) {
 case 0: break;
 case 1: FUNC_10("SOP error on TX channel %d\n", VAR_8);
  break;
 case 2: FUNC_10("Ownership bit not set on SOP buffer on TX channel %d\n", VAR_8);
  break;
 case 3: FUNC_10("Zero Next Buffer but not EOP on TX channel %d\n", VAR_8);
  break;
 case 4: FUNC_10("Zero Buffer Pointer on TX channel %d\n", VAR_8);
  break;
 case 5: FUNC_10("Zero Buffer Length on TX channel %d\n", VAR_8);
  break;
 case 6: FUNC_10("Packet length error on TX channel %d\n", VAR_8);
  break;
 default: FUNC_10("Unknown error on TX channel %d\n", VAR_8);
  break;
 }

 if (VAR_6 != 0) {
  FUNC_10("CPSW_CPDMA_TX%d_HDP=0x%x\n",
      VAR_8, FUNC_6(VAR_3, FUNC_3(VAR_8)));
  FUNC_10("CPSW_CPDMA_TX%d_CP=0x%x\n",
      VAR_8, FUNC_6(VAR_3, FUNC_2(VAR_8)));
  FUNC_5(VAR_3, &VAR_3->tx.active);
 }

 switch (VAR_7) {
 case 0: break;
 case 2: FUNC_10("Ownership bit not set on RX channel %d\n", VAR_9);
  break;
 case 4: FUNC_10("Zero Buffer Pointer on RX channel %d\n", VAR_9);
  break;
 case 5: FUNC_10("Zero Buffer Length on RX channel %d\n", VAR_9);
  break;
 case 6: FUNC_10("Buffer offset too big on RX channel %d\n", VAR_9);
  break;
 default: FUNC_10("Unknown RX error on RX channel %d\n", VAR_9);
  break;
 }

 if (VAR_7 != 0) {
  FUNC_10("CPSW_CPDMA_RX%d_HDP=0x%x\n",
      VAR_9, FUNC_6(VAR_3,FUNC_1(VAR_9)));
  FUNC_10("CPSW_CPDMA_RX%d_CP=0x%x\n",
      VAR_9, FUNC_6(VAR_3, FUNC_0(VAR_9)));
  FUNC_5(VAR_3, &VAR_3->rx.active);
 }

 FUNC_10("\nALE Table\n");
 FUNC_4(VAR_3);


 FUNC_9("CPSW HOST ERROR INTERRUPT");


 FUNC_7(VAR_3, VAR_1, VAR_4);
 FUNC_10("XXX HOST ERROR INTERRUPT SUPPRESSED\n");


}
