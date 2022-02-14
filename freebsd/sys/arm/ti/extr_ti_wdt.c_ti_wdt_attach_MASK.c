
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_wdt_softc {int sc_ev_tag; int sc_intr; int * sc_irq_res; int * sc_mem_res; int sc_bh; int sc_bt; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct ti_wdt_softc*,int ) ;
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
 scalar_t__ VAR_12 ;
 void* FUNC_2 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int,int *,int ,struct ti_wdt_softc*,int *) ;
 struct ti_wdt_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ti_wdt_softc*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (struct ti_wdt_softc*,int ) ;
 int FUNC_11 (struct ti_wdt_softc*,int ,int) ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_12(device_t VAR_16)
{
 struct ti_wdt_softc *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_4(VAR_16);
 VAR_18 = 0;
 VAR_17->sc_mem_res = FUNC_2(VAR_16, VAR_5, &VAR_18,
     VAR_3);
 if (VAR_17->sc_mem_res == ((void*)0)) {
  FUNC_5(VAR_16, "could not allocate memory resource\n");
  return (VAR_0);
 }
 VAR_17->sc_bt = FUNC_7(VAR_17->sc_mem_res);
 VAR_17->sc_bh = FUNC_6(VAR_17->sc_mem_res);
 VAR_17->sc_irq_res = FUNC_2(VAR_16, VAR_4, &VAR_18, VAR_3);
 if (VAR_17->sc_irq_res == ((void*)0)) {
  FUNC_5(VAR_16, "could not allocate interrupt resource\n");
  FUNC_8(VAR_16);
  return (VAR_0);
 }
 if (FUNC_3(VAR_16, VAR_17->sc_irq_res, VAR_1 | VAR_2,
  ((void*)0), VAR_14, VAR_17, &VAR_17->sc_intr) != 0) {
  FUNC_5(VAR_16,
      "unable to setup the interrupt handler\n");
  FUNC_8(VAR_16);
  return (VAR_0);
 }

 FUNC_11(VAR_17, VAR_9,
     FUNC_10(VAR_17, VAR_9) | VAR_8);
 while (FUNC_10(VAR_17, VAR_9) & VAR_8)
  FUNC_0(10);
 FUNC_11(VAR_17, VAR_11, VAR_7 | VAR_6);
 FUNC_9(VAR_17);
 if (VAR_12)
  FUNC_5(VAR_16, "revision: 0x%x\n",
      FUNC_10(VAR_17, VAR_10));
 VAR_17->sc_ev_tag = FUNC_1(VAR_15, VAR_13, VAR_17,
     0);

 return (0);
}
