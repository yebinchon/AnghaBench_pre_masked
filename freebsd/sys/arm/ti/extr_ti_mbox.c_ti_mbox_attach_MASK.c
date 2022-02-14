
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_mbox_softc {int sc_intr; int * sc_irq_res; int * sc_mem_res; int sc_bh; int sc_bt; int sc_mtx; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int,int *,int ,struct ti_mbox_softc*,int *) ;
 struct ti_mbox_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int VAR_12 ;
 int FUNC_11 (struct ti_mbox_softc*,int ) ;
 int FUNC_12 (struct ti_mbox_softc*,int ,int) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_13)
{
 struct ti_mbox_softc *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19;

 if (FUNC_13(VAR_3) != 0) {
  FUNC_6(VAR_13, "could not enable MBOX clock\n");
  return (VAR_0);
 }
 VAR_14 = FUNC_5(VAR_13);
 VAR_15 = 0;
 FUNC_7(&VAR_14->sc_mtx, "TI mbox", ((void*)0), VAR_4);
 VAR_14->sc_mem_res = FUNC_3(VAR_13, VAR_7, &VAR_15,
     VAR_5);
 if (VAR_14->sc_mem_res == ((void*)0)) {
  FUNC_6(VAR_13, "could not allocate memory resource\n");
  return (VAR_0);
 }
 VAR_14->sc_bt = FUNC_9(VAR_14->sc_mem_res);
 VAR_14->sc_bh = FUNC_8(VAR_14->sc_mem_res);
 VAR_15 = 0;
 VAR_14->sc_irq_res = FUNC_3(VAR_13, VAR_6, &VAR_15,
     VAR_5);
 if (VAR_14->sc_irq_res == ((void*)0)) {
  FUNC_6(VAR_13, "could not allocate interrupt resource\n");
  FUNC_10(VAR_13);
  return (VAR_0);
 }
 if (FUNC_4(VAR_13, VAR_14->sc_irq_res, VAR_1 | VAR_2,
     ((void*)0), VAR_12, VAR_14, &VAR_14->sc_intr) != 0) {
  FUNC_6(VAR_13, "unable to setup the interrupt handler\n");
  FUNC_10(VAR_13);
  return (VAR_0);
 }



 VAR_19 = FUNC_11(VAR_14, VAR_9);
 FUNC_1("initial sysconfig %d\n", VAR_19);
 VAR_19 |= VAR_11;
 VAR_16 = 100;
 while (FUNC_11(VAR_14, VAR_9) &
     VAR_11) {
  VAR_16--;
  FUNC_0(10);
 }
 if (VAR_16 == 0) {
  FUNC_6(VAR_13, "controller reset failed\n");
  FUNC_10(VAR_13);
  return (VAR_0);
 }



 FUNC_12(VAR_14, VAR_9,
     FUNC_11(VAR_14, VAR_9) | VAR_10);
 VAR_18 = FUNC_11(VAR_14, VAR_8);
 FUNC_1("rev %d\n", VAR_18);
 FUNC_6(VAR_13, "revision %d.%d\n", (VAR_18 >> 8) & 0x4, VAR_18 & 0x40);



 for (VAR_17 = 0; VAR_17 < 8; VAR_17++)
  FUNC_12(VAR_14, FUNC_2(VAR_17), 1);

 return (0);
}
