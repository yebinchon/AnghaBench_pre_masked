
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timeout ;
struct imx_wdog_softc {int sc_pde_enabled; int sc_dev; int sc_ih; int * sc_res; int sc_mtx; } ;
typedef int pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct imx_wdog_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int*,int) ;
 int FUNC_2 (struct imx_wdog_softc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct imx_wdog_softc*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int,int ,int *,struct imx_wdog_softc*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct imx_wdog_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int VAR_11 ;
 int FUNC_10 (struct imx_wdog_softc*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (int *,int ,char*,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,char*) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_14(device_t VAR_15)
{
 struct imx_wdog_softc *VAR_16;
 pcell_t VAR_17;

 VAR_16 = FUNC_8(VAR_15);
 VAR_16->sc_dev = VAR_15;

 if (FUNC_4(VAR_15, VAR_13, VAR_16->sc_res)) {
  FUNC_9(VAR_15, "could not allocate resources\n");
  return (VAR_0);
 }

 FUNC_11(&VAR_16->sc_mtx, FUNC_7(VAR_15), "imx_wdt", VAR_4);







 if (FUNC_13(VAR_16->sc_dev, "fsl,ext-reset-output")) {
  FUNC_3(VAR_16, VAR_5, VAR_6 | FUNC_2(VAR_16, VAR_5));
  FUNC_5(VAR_16->sc_dev, VAR_16->sc_res[VAR_3],
      VAR_2 | VAR_1, VAR_12, ((void*)0), VAR_16,
      &VAR_16->sc_ih);
  FUNC_3(VAR_16, VAR_7, VAR_8);
 }





 if (FUNC_2(VAR_16, VAR_10) & VAR_9)
  VAR_16->sc_pde_enabled = 1;

 FUNC_0(VAR_14, VAR_11, VAR_16, 0);


 if (FUNC_1(FUNC_12(VAR_16->sc_dev), "timeout-sec",
     &VAR_17, sizeof(VAR_17)) == sizeof(VAR_17)) {
  if (VAR_17 < 1 || VAR_17 > 128) {
   FUNC_9(VAR_16->sc_dev, "ERROR: bad timeout-sec "
       "property value %u, using 128\n", VAR_17);
   VAR_17 = 128;
  }
  FUNC_10(VAR_16, VAR_17);
  FUNC_9(VAR_16->sc_dev, "watchdog enabled using "
      "timeout-sec property value %u\n", VAR_17);
 }






 FUNC_6(VAR_16->sc_dev);
 return (0);
}
