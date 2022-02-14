
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct hdmi_softc {int audio_freq; int audio_chans; int hdmi_mode; int * mem_res; int * irq_res; int * supply_vdd; int * supply_pll; int * supply_hdmi; int * hwreset_hdmi; int * clk_hdmi; int * clk_parent; int * irq_ih; int dev; int n_tmds_configs; int tmds_config; int audio_src_type; TYPE_1__ output; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,int *,int,int *,int ,struct hdmi_softc*,int **) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 struct hdmi_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct hdmi_softc*) ;
 int FUNC_12 (struct hdmi_softc*,int ) ;
 int VAR_7 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_17(device_t VAR_9)
{
 struct hdmi_softc *VAR_10;
 phandle_t VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = FUNC_9(VAR_9);
 VAR_10->dev = VAR_9;
 VAR_10->output.dev = VAR_10->dev;
 VAR_11 = FUNC_15(VAR_10->dev);

 VAR_10->audio_src_type = VAR_4;
 VAR_10->audio_freq = 44100;
 VAR_10->audio_chans = 2;
 VAR_10->hdmi_mode = 0;

 VAR_10->tmds_config = VAR_8;
 VAR_10->n_tmds_configs = FUNC_14(VAR_8);

 VAR_12 = 0;
 VAR_10->mem_res = FUNC_2(VAR_9, VAR_6, &VAR_12,
     VAR_3);
 if (VAR_10->mem_res == ((void*)0)) {
  FUNC_10(VAR_9, "Cannot allocate memory resources\n");
  goto fail;
 }

 VAR_12 = 0;
 VAR_10->irq_res = FUNC_2(VAR_9, VAR_5, &VAR_12, VAR_3);
 if (VAR_10->irq_res == ((void*)0)) {
  FUNC_10(VAR_9, "Cannot allocate IRQ resources\n");
  goto fail;
 }

 VAR_13 = FUNC_5(VAR_9, VAR_10->irq_res, VAR_2 | VAR_1,
     ((void*)0), VAR_7, VAR_10, &VAR_10->irq_ih);
 if (VAR_13 != 0) {
  FUNC_10(VAR_9,
      "WARNING: unable to register interrupt handler\n");
  goto fail;
 }

 VAR_13 = FUNC_12(VAR_10, VAR_11);
 if (VAR_13 != 0) {
  FUNC_10(VAR_9, "Cannot parse FDT resources\n");
  goto fail;
 }
 VAR_13 = FUNC_11(VAR_10);
 if (VAR_13 != 0) {
  FUNC_10(VAR_9, "Cannot enable FDT resources\n");
  goto fail;
 }

 VAR_13 = FUNC_1(FUNC_8(VAR_10->dev), VAR_10->dev);
 if (VAR_13 != 0) {
  FUNC_10(VAR_9, "Cannot register DRM device\n");
  goto fail;
 }
 return (FUNC_3(VAR_9));

fail:
 FUNC_0(FUNC_8(VAR_10->dev), VAR_10->dev);

 if (VAR_10->irq_ih != ((void*)0))
  FUNC_6(VAR_9, VAR_10->irq_res, VAR_10->irq_ih);
 if (VAR_10->clk_parent != ((void*)0))
  FUNC_7(VAR_10->clk_parent);
 if (VAR_10->clk_hdmi != ((void*)0))
  FUNC_7(VAR_10->clk_hdmi);
 if (VAR_10->hwreset_hdmi != ((void*)0))
  FUNC_13(VAR_10->hwreset_hdmi);
 if (VAR_10->supply_hdmi != ((void*)0))
  FUNC_16(VAR_10->supply_hdmi);
 if (VAR_10->supply_pll != ((void*)0))
  FUNC_16(VAR_10->supply_pll);
 if (VAR_10->supply_vdd != ((void*)0))
  FUNC_16(VAR_10->supply_vdd);
 if (VAR_10->irq_res != ((void*)0))
  FUNC_4(VAR_9, VAR_5, 0, VAR_10->irq_res);
 if (VAR_10->mem_res != ((void*)0))
  FUNC_4(VAR_9, VAR_6, 0, VAR_10->mem_res);
 return (VAR_0);
}
