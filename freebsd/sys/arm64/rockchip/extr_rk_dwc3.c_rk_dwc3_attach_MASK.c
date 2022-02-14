
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_dwc3_softc {int sc; int rst_usb3; int clk_usb3; int clk_axi_perf; int clk_grf; int clk_bus; int clk_suspend; int clk_ref; int * dev; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,char*,int *) ;
 int FUNC_5 (int ) ;
 struct rk_dwc3_softc* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *,scalar_t__,char*,int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int * FUNC_12 (int *,scalar_t__,int ,int *,int,int *) ;
 scalar_t__ FUNC_13 (scalar_t__,int *) ;
 int FUNC_14 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_1)
{
 struct rk_dwc3_softc *VAR_2;
 device_t VAR_3;
 phandle_t VAR_4, VAR_5;
 int VAR_6;

 VAR_2 = FUNC_6(VAR_1);
 VAR_2->dev = VAR_1;
 VAR_4 = FUNC_11(VAR_1);


 if (FUNC_4(VAR_1, 0, "ref_clk", &VAR_2->clk_ref) != 0) {
  FUNC_7(VAR_1, "Cannot get ref_clk clock\n");
  return (VAR_0);
 }
 VAR_6 = FUNC_3(VAR_2->clk_ref);
 if (VAR_6 != 0) {
  FUNC_7(VAR_1, "Could not enable clock %s\n",
      FUNC_5(VAR_2->clk_ref));
  return (VAR_0);
 }
 if (FUNC_4(VAR_1, 0, "suspend_clk", &VAR_2->clk_suspend) != 0) {
  FUNC_7(VAR_1, "Cannot get suspend_clk clock\n");
  return (VAR_0);
 }
 VAR_6 = FUNC_3(VAR_2->clk_suspend);
 if (VAR_6 != 0) {
  FUNC_7(VAR_1, "Could not enable clock %s\n",
      FUNC_5(VAR_2->clk_suspend));
  return (VAR_0);
 }
 if (FUNC_4(VAR_1, 0, "bus_clk", &VAR_2->clk_bus) != 0) {
  FUNC_7(VAR_1, "Cannot get bus_clk clock\n");
  return (VAR_0);
 }
 VAR_6 = FUNC_3(VAR_2->clk_bus);
 if (VAR_6 != 0) {
  FUNC_7(VAR_1, "Could not enable clock %s\n",
      FUNC_5(VAR_2->clk_bus));
  return (VAR_0);
 }
 if (FUNC_4(VAR_1, 0, "grf_clk", &VAR_2->clk_grf) != 0) {
  FUNC_7(VAR_1, "Cannot get grf_clk clock\n");
  return (VAR_0);
 }
 VAR_6 = FUNC_3(VAR_2->clk_grf);
 if (VAR_6 != 0) {
  FUNC_7(VAR_1, "Could not enable clock %s\n",
      FUNC_5(VAR_2->clk_grf));
  return (VAR_0);
 }


 if (FUNC_4(VAR_1, 0, "aclk_usb3_rksoc_axi_perf", &VAR_2->clk_axi_perf) == 0) {
  VAR_6 = FUNC_3(VAR_2->clk_axi_perf);
  if (VAR_6 != 0) {
   FUNC_7(VAR_1, "Could not enable clock %s\n",
     FUNC_5(VAR_2->clk_axi_perf));
   return (VAR_0);
  }
 }
 if (FUNC_4(VAR_1, 0, "aclk_usb3", &VAR_2->clk_usb3) == 0) {
  VAR_6 = FUNC_3(VAR_2->clk_usb3);
  if (VAR_6 != 0) {
   FUNC_7(VAR_1, "Could not enable clock %s\n",
     FUNC_5(VAR_2->clk_usb3));
   return (VAR_0);
  }
 }


 if (FUNC_10(VAR_1, VAR_4, "usb3-otg", &VAR_2->rst_usb3) == 0) {
  if (FUNC_9(VAR_2->rst_usb3) != 0) {
   FUNC_7(VAR_1, "Cannot deassert reset\n");
   return (VAR_0);
  }
 }

 FUNC_14(VAR_1, VAR_4);
 if (FUNC_13(VAR_4, &VAR_2->sc) < 0) {
  FUNC_7(VAR_1, "could not get ranges\n");
  return (VAR_0);
 }

 for (VAR_5 = FUNC_0(VAR_4); VAR_5 > 0; VAR_5 = FUNC_1(VAR_5)) {
  VAR_3 = FUNC_12(VAR_1, VAR_5, 0, ((void*)0), -1, ((void*)0));
  if (VAR_3 != ((void*)0))
   FUNC_8(VAR_3);
 }

 return (FUNC_2(VAR_1));
}
