
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_ifp; int vtnet_tick_ch; int vtnet_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct vtnet_softc*) ;
 int FUNC_1 (struct vtnet_softc*) ;
 int FUNC_2 (int *,int ,int ) ;
 struct vtnet_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct vtnet_softc*) ;
 int FUNC_9 (struct vtnet_softc*) ;
 int FUNC_10 (struct vtnet_softc*) ;
 int FUNC_11 (int ) ;
 int VAR_1 ;
 int FUNC_12 (struct vtnet_softc*) ;
 int FUNC_13 (struct vtnet_softc*) ;
 int FUNC_14 (struct vtnet_softc*) ;
 int FUNC_15 (struct vtnet_softc*) ;
 int FUNC_16 (struct vtnet_softc*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_2)
{
 struct vtnet_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_2);
 VAR_3->vtnet_dev = VAR_2;


 FUNC_6(VAR_2, VAR_1);

 FUNC_0(VAR_3);
 FUNC_2(&VAR_3->vtnet_tick_ch, FUNC_1(VAR_3), 0);

 FUNC_15(VAR_3);
 FUNC_13(VAR_3);

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4) {
  FUNC_4(VAR_2, "cannot allocate Rx filters\n");
  goto fail;
 }

 VAR_4 = FUNC_9(VAR_3);
 if (VAR_4) {
  FUNC_4(VAR_2, "cannot allocate queues\n");
  goto fail;
 }

 VAR_4 = FUNC_10(VAR_3);
 if (VAR_4) {
  FUNC_4(VAR_2, "cannot allocate virtqueues\n");
  goto fail;
 }

 VAR_4 = FUNC_14(VAR_3);
 if (VAR_4) {
  FUNC_4(VAR_2, "cannot setup interface\n");
  goto fail;
 }

 VAR_4 = FUNC_7(VAR_2, VAR_0);
 if (VAR_4) {
  FUNC_4(VAR_2, "cannot setup virtqueue interrupts\n");

  FUNC_5(VAR_3->vtnet_ifp);
  goto fail;
 }





 FUNC_16(VAR_3);

fail:
 if (VAR_4)
  FUNC_11(VAR_2);

 return (VAR_4);
}
