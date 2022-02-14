
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct aw_ir_softc {int fifo_size; int * res; int * sc_evdev; int dev; int intrhand; } ;
typedef int * hwreset_t ;
typedef int device_t ;
typedef int * clk_t ;
struct TYPE_2__ {int ocd_data; } ;




 int VAR_0 ;
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
 int FUNC_0 (int) ;
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
 int FUNC_1 (struct aw_ir_softc*,int ) ;
 int FUNC_2 (struct aw_ir_softc*,int ,int) ;
 int FUNC_3 (struct aw_ir_softc*) ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int,int *,int ,struct aw_ir_softc*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,char*,int **) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int VAR_28 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct aw_ir_softc* FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,...) ;
 int * FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,int ,int ,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int ,int ,int ,int **) ;
 int FUNC_25 (int *) ;
 TYPE_1__* FUNC_26 (int ,int ) ;

__attribute__((used)) static int
FUNC_27(device_t VAR_29)
{
 struct aw_ir_softc *VAR_30;
 hwreset_t VAR_31;
 clk_t VAR_32, VAR_33;
 int VAR_34;
 uint32_t VAR_35 = 0;

 VAR_32 = VAR_33 = ((void*)0);
 VAR_31 = ((void*)0);

 VAR_30 = FUNC_13(VAR_29);
 VAR_30->dev = VAR_29;

 if (FUNC_4(VAR_29, VAR_27, VAR_30->res) != 0) {
  FUNC_14(VAR_29, "could not allocate memory resource\n");
  return (VAR_20);
 }

 switch (FUNC_26(VAR_29, VAR_28)->ocd_data) {
 case 129:
  VAR_30->fifo_size = 16;
  break;
 case 128:
  VAR_30->fifo_size = 64;
  break;
 }


 if (FUNC_24(VAR_29, 0, 0, &VAR_31) == 0) {
  VAR_34 = FUNC_23(VAR_31);
  if (VAR_34 != 0) {
   FUNC_14(VAR_29, "cannot de-assert reset\n");
   goto error;
  }
 }


 FUNC_3(VAR_30);


 VAR_34 = FUNC_8(VAR_29, 0, "apb", &VAR_33);
 if (VAR_34 != 0) {
  FUNC_14(VAR_29, "Cannot get gate clock\n");
  goto error;
 }
 VAR_34 = FUNC_8(VAR_29, 0, "ir", &VAR_32);
 if (VAR_34 != 0) {
  FUNC_14(VAR_29, "Cannot get IR clock\n");
  goto error;
 }

 VAR_34 = FUNC_10(VAR_32, VAR_2, 0);
 if (VAR_34 != 0) {
  FUNC_14(VAR_29, "cannot set IR clock rate\n");
  goto error;
 }

 VAR_34 = FUNC_7(VAR_33);
 if (VAR_34 != 0) {
  FUNC_14(VAR_29, "Cannot enable clk gate\n");
  goto error;
 }
 VAR_34 = FUNC_7(VAR_32);
 if (VAR_34 != 0) {
  FUNC_14(VAR_29, "Cannot enable IR clock\n");
  goto error;
 }

 if (FUNC_6(VAR_29, VAR_30->res[1],
     VAR_24 | VAR_23, ((void*)0), VAR_26, VAR_30,
     &VAR_30->intrhand)) {
  FUNC_5(VAR_29, VAR_27, VAR_30->res);
  FUNC_14(VAR_29, "cannot setup interrupt handler\n");
  return (VAR_20);
 }


 FUNC_2(VAR_30, VAR_4, VAR_6);





 VAR_35 = VAR_18;
 VAR_35 |= (VAR_10 | VAR_11);
 VAR_35 |= (VAR_0 | VAR_1);
 FUNC_2(VAR_30, VAR_3, VAR_35);


 FUNC_2(VAR_30, VAR_8, VAR_9);


 FUNC_2(VAR_30, VAR_16, VAR_17);






 FUNC_2(VAR_30, VAR_12, VAR_14 | VAR_15 |
     VAR_13 | FUNC_0((VAR_30->fifo_size >> 1) - 1));


 VAR_35 = FUNC_1(VAR_30, VAR_4);
 FUNC_2(VAR_30, VAR_4, VAR_35 | VAR_5 | VAR_7);

 VAR_30->sc_evdev = FUNC_15();
 FUNC_19(VAR_30->sc_evdev, FUNC_11(VAR_30->dev));
 FUNC_20(VAR_30->sc_evdev, FUNC_12(VAR_30->dev));
 FUNC_18(VAR_30->sc_evdev, VAR_19, 0, 0, 0);
 FUNC_21(VAR_30->sc_evdev, VAR_22);
 FUNC_21(VAR_30->sc_evdev, VAR_21);
 FUNC_22(VAR_30->sc_evdev, VAR_25);

 VAR_34 = FUNC_17(VAR_30->sc_evdev);
 if (VAR_34) {
  FUNC_14(VAR_29,
      "failed to register evdev: error=%d\n", VAR_34);
  goto error;
 }

 return (0);
error:
 if (VAR_33 != ((void*)0))
  FUNC_9(VAR_33);
 if (VAR_32 != ((void*)0))
  FUNC_9(VAR_32);
 if (VAR_31 != ((void*)0))
  FUNC_25(VAR_31);
 FUNC_16(VAR_30->sc_evdev);
 VAR_30->sc_evdev = ((void*)0);

 FUNC_5(VAR_29, VAR_27, VAR_30->res);
 return (VAR_20);
}
