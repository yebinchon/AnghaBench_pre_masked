
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aw_ir_softc {int dev; scalar_t__ dcnt; int sc_evdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct aw_ir_softc*,int ) ;
 int FUNC_2 (struct aw_ir_softc*,int ,int) ;
 scalar_t__ FUNC_3 (struct aw_ir_softc*) ;
 int FUNC_4 (struct aw_ir_softc*) ;
 int FUNC_5 (struct aw_ir_softc*,int ) ;
 unsigned long FUNC_6 (struct aw_ir_softc*) ;
 int FUNC_7 (struct aw_ir_softc*) ;
 int FUNC_8 (unsigned long) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ,int ,int ,unsigned long) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(void *VAR_8)
{
 struct aw_ir_softc *VAR_9;
 uint32_t VAR_10;
 int VAR_11, VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_9 = (struct aw_ir_softc *)VAR_8;


 VAR_10 = FUNC_1(VAR_9, VAR_3);
 if (VAR_7)
  FUNC_9(VAR_9->dev, "RX interrupt status: %x\n", VAR_10);


 FUNC_2(VAR_9, VAR_3, VAR_10 | VAR_4);


 if (VAR_10 & (VAR_0 | VAR_2)) {
  if (VAR_7)
   FUNC_9(VAR_9->dev,
       "RX FIFO Data available or Packet end\n");

  VAR_12 = FUNC_0(VAR_10);

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   if (FUNC_3(VAR_9)) {
    if (VAR_7)
     FUNC_9(VAR_9->dev,
         "raw buffer full\n");
    break;
   } else
    FUNC_5(VAR_9, FUNC_7(VAR_9));
  }
 }

 if (VAR_10 & VAR_2) {

  if (VAR_7)
   FUNC_9(VAR_9->dev, "RX Packet end\n");
  VAR_13 = FUNC_6(VAR_9);
  VAR_14 = FUNC_8(VAR_13);
  if (VAR_14 == 0) {
   FUNC_10(VAR_9->sc_evdev,
       VAR_5, VAR_6, VAR_13);
   FUNC_11(VAR_9->sc_evdev);
  }
  if (VAR_7) {
   FUNC_9(VAR_9->dev, "Final IR code: %lx\n",
       VAR_13);
   FUNC_9(VAR_9->dev, "IR code status: %d\n",
       VAR_14);
  }
  VAR_9->dcnt = 0;
 }
 if (VAR_10 & VAR_1) {

  if (VAR_7)
   FUNC_9(VAR_9->dev, "RX FIFO overflow\n");

  FUNC_4(VAR_9);
 }
}
