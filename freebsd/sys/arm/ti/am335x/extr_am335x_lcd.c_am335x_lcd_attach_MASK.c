
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_3__ {int ac_bias; int dma_burst_sz; int bpp; int fdd; int sync_ctrl; scalar_t__ sync_edge; scalar_t__ ac_bias_intrpt; } ;
struct am335x_lcd_softc {int sc_backlight; int sc_hdmi_evh; int sc_oid; int sc_dev; void* sc_mem_res; void* sc_irq_res; int sc_intr_hl; TYPE_1__ sc_panel; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct am335x_lcd_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct am335x_lcd_softc*) ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct sysctl_ctx_list*,int ,int ,char*,int,struct am335x_lcd_softc*,int ,int ,char*,char*) ;
 int FUNC_4 (struct sysctl_oid*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct am335x_lcd_softc*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,int,TYPE_1__*) ;
 void* FUNC_10 (int ,int ,int*,int ) ;
 int FUNC_11 (int ,int ,int,void*) ;
 scalar_t__ FUNC_12 (int ,void*,int,int *,int ,struct am335x_lcd_softc*,int *) ;
 struct am335x_lcd_softc* FUNC_13 (int ) ;
 struct sysctl_ctx_list* FUNC_14 (int ) ;
 struct sysctl_oid* FUNC_15 (int ) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int,char*,int) ;
 int VAR_16 ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_17)
{
 struct am335x_lcd_softc *VAR_18;

 int VAR_19;
 int VAR_20;
 struct sysctl_ctx_list *VAR_21;
 struct sysctl_oid *VAR_22;
 phandle_t VAR_23, VAR_24;

 VAR_19 = 0;
 VAR_18 = FUNC_13(VAR_17);
 VAR_18->sc_dev = VAR_17;

 FUNC_7(VAR_17);

 VAR_23 = FUNC_2("/");
 if (VAR_23 == -1) {
  FUNC_16(VAR_17, "failed to get FDT root node\n");
  return (VAR_2);
 }

 VAR_18->sc_panel.ac_bias = 255;
 VAR_18->sc_panel.ac_bias_intrpt = 0;
 VAR_18->sc_panel.dma_burst_sz = 16;
 VAR_18->sc_panel.bpp = 16;
 VAR_18->sc_panel.fdd = 128;
 VAR_18->sc_panel.sync_edge = 0;
 VAR_18->sc_panel.sync_ctrl = 1;

 VAR_24 = FUNC_17(VAR_23, "ti,tilcdc,panel", 1);
 if (VAR_24 != 0) {
  FUNC_16(VAR_17, "using static panel info\n");
  if (FUNC_8(VAR_17, VAR_24, &VAR_18->sc_panel)) {
   FUNC_16(VAR_17, "failed to read panel info\n");
   return (VAR_2);
  }

  if (FUNC_9(VAR_17, VAR_24, &VAR_18->sc_panel)) {
   FUNC_16(VAR_17, "failed to read timings\n");
   return (VAR_2);
  }
 }

 FUNC_18(VAR_6);

 VAR_20 = 0;
 VAR_18->sc_mem_res = FUNC_10(VAR_17, VAR_12, &VAR_20,
     VAR_10);
 if (!VAR_18->sc_mem_res) {
  FUNC_16(VAR_17, "cannot allocate memory window\n");
  return (VAR_2);
 }

 VAR_20 = 0;
 VAR_18->sc_irq_res = FUNC_10(VAR_17, VAR_11, &VAR_20,
     VAR_10);
 if (!VAR_18->sc_irq_res) {
  FUNC_11(VAR_17, VAR_12, 0, VAR_18->sc_mem_res);
  FUNC_16(VAR_17, "cannot allocate interrupt\n");
  return (VAR_2);
 }

 if (FUNC_12(VAR_17, VAR_18->sc_irq_res, VAR_5 | VAR_4,
   ((void*)0), VAR_14, VAR_18,
   &VAR_18->sc_intr_hl) != 0) {
  FUNC_11(VAR_17, VAR_11, VAR_20,
      VAR_18->sc_irq_res);
  FUNC_11(VAR_17, VAR_12, VAR_20,
      VAR_18->sc_mem_res);
  FUNC_16(VAR_17, "Unable to setup the irq handler.\n");
  return (VAR_2);
 }

 FUNC_1(VAR_18);


 VAR_21 = FUNC_14(VAR_18->sc_dev);
 VAR_22 = FUNC_15(VAR_18->sc_dev);
 VAR_18->sc_oid = FUNC_3(VAR_21, FUNC_4(VAR_22), VAR_7,
     "backlight", VAR_1 | VAR_0, VAR_18, 0,
     VAR_15, "I", "LCD backlight");
 VAR_18->sc_backlight = 0;

 if (FUNC_6(VAR_9,
     VAR_8, VAR_8) == 0)
  VAR_18->sc_backlight = 100;

 if (VAR_24 != 0)
  FUNC_5(VAR_18);
 else
  VAR_18->sc_hdmi_evh = FUNC_0(VAR_16,
      VAR_13, VAR_18, VAR_3);

 return (0);
}
