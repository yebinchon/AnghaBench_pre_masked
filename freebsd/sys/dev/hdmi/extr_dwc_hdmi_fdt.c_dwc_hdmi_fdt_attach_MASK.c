
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ sc_reg_shift; int * sc_mem_res; scalar_t__ sc_mem_rid; int sc_get_i2c_dev; int sc_dev; } ;
struct dwc_hdmi_fdt_softc {int clk_ahb; int clk_hdmi; TYPE_1__ base; scalar_t__ i2c_xref; } ;
typedef scalar_t__ phandle_t ;
typedef int i2c_xref ;
typedef int freq ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char*,scalar_t__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,char*,int *) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 struct dwc_hdmi_fdt_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_5)
{
 struct dwc_hdmi_fdt_softc *VAR_6;
 phandle_t VAR_7, VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 VAR_6 = FUNC_5(VAR_5);
 VAR_6->base.sc_dev = VAR_5;
 VAR_6->base.sc_get_i2c_dev = VAR_4;
 VAR_10 = 0;


 VAR_6->base.sc_mem_rid = 0;
 VAR_6->base.sc_mem_res = FUNC_1(VAR_5, VAR_3,
     &VAR_6->base.sc_mem_rid, VAR_2);
 if (VAR_6->base.sc_mem_res == ((void*)0)) {
  FUNC_6(VAR_5, "Cannot allocate memory resources\n");
  VAR_10 = VAR_1;
  goto out;
 }

 VAR_7 = FUNC_9(VAR_5);
 if (FUNC_0(VAR_7, "ddc", &VAR_8, sizeof(VAR_8)) == -1)
  VAR_6->i2c_xref = 0;
 else
  VAR_6->i2c_xref = VAR_8;

 if (FUNC_0(VAR_7, "reg-shift", &VAR_6->base.sc_reg_shift,
     sizeof(VAR_6->base.sc_reg_shift)) <= 0)
  VAR_6->base.sc_reg_shift = 0;

 if (FUNC_3(VAR_5, 0, "hdmi", &VAR_6->clk_hdmi) != 0 ||
     FUNC_3(VAR_5, 0, "ahb", &VAR_6->clk_ahb) != 0) {
  FUNC_6(VAR_5, "Cannot get clocks\n");
  VAR_10 = VAR_1;
  goto out;
 }
 if (FUNC_0(VAR_7, "clock-frequency", &VAR_9, sizeof(VAR_9)) > 0) {
  VAR_10 = FUNC_4(VAR_6->clk_hdmi, VAR_9, VAR_0);
  if (VAR_10 != 0) {
   FUNC_6(VAR_5,
       "Cannot set HDMI clock frequency to %u Hz\n", VAR_9);
   goto out;
  }
 } else
  FUNC_6(VAR_5, "HDMI clock frequency not specified\n");
 if (FUNC_2(VAR_6->clk_hdmi) != 0) {
  FUNC_6(VAR_5, "Cannot enable HDMI clock\n");
  VAR_10 = VAR_1;
  goto out;
 }
 if (FUNC_2(VAR_6->clk_ahb) != 0) {
  FUNC_6(VAR_5, "Cannot enable AHB clock\n");
  VAR_10 = VAR_1;
  goto out;
 }

 return (FUNC_8(VAR_5));

out:

 FUNC_7(VAR_5);

 return (VAR_10);
}
