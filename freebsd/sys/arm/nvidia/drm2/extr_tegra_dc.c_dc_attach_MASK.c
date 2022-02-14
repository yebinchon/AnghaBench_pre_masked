
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* dev; } ;
struct dc_softc {int pitch_align; int * mem_res; int * irq_res; int * hwreset_dc; int * clk_dc; int * clk_parent; int * irq_ih; void* dev; TYPE_1__ tegra_crtc; } ;
typedef int phandle_t ;
typedef void* device_t ;


 int VAR_0 ;
 int FUNC_0 (struct dc_softc*) ;
 int FUNC_1 (struct dc_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,void*) ;
 void* FUNC_4 (void*,int ,int*,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,int ,int ,int *) ;
 int FUNC_7 (void*,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (void*) ;
 struct dc_softc* FUNC_10 (void*) ;
 int FUNC_11 (void*,char*) ;
 int FUNC_12 (struct dc_softc*) ;
 int FUNC_13 (struct dc_softc*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (void*) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_4)
{
 struct dc_softc *VAR_5;
 phandle_t VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_10(VAR_4);
 VAR_5->dev = VAR_4;
 VAR_5->tegra_crtc.dev = VAR_4;

 VAR_6 = FUNC_15(VAR_5->dev);
 FUNC_1(VAR_5);

 VAR_7 = 0;
 VAR_5->mem_res = FUNC_4(VAR_4, VAR_3, &VAR_7,
     VAR_1);
 if (VAR_5->mem_res == ((void*)0)) {
  FUNC_11(VAR_4, "Cannot allocate memory resources\n");
  goto fail;
 }

 VAR_7 = 0;
 VAR_5->irq_res = FUNC_4(VAR_4, VAR_2, &VAR_7, VAR_1);
 if (VAR_5->irq_res == ((void*)0)) {
  FUNC_11(VAR_4, "Cannot allocate IRQ resources\n");
  goto fail;
 }

 VAR_8 = FUNC_13(VAR_5, VAR_6);
 if (VAR_8 != 0) {
  FUNC_11(VAR_4, "Cannot parse FDT resources\n");
  goto fail;
 }
 VAR_8 = FUNC_12(VAR_5);
 if (VAR_8 != 0) {
  FUNC_11(VAR_4, "Cannot enable FDT resources\n");
  goto fail;
 }







 VAR_5->pitch_align = 256;

 VAR_8 = FUNC_3(FUNC_9(VAR_5->dev), VAR_5->dev);
 if (VAR_8 != 0) {
  FUNC_11(VAR_4, "Cannot register DRM device\n");
  goto fail;
 }

 return (FUNC_5(VAR_4));

fail:
 FUNC_2(FUNC_9(VAR_5->dev), VAR_5->dev);
 if (VAR_5->irq_ih != ((void*)0))
  FUNC_7(VAR_4, VAR_5->irq_res, VAR_5->irq_ih);
 if (VAR_5->clk_parent != ((void*)0))
  FUNC_8(VAR_5->clk_parent);
 if (VAR_5->clk_dc != ((void*)0))
  FUNC_8(VAR_5->clk_dc);
 if (VAR_5->hwreset_dc != ((void*)0))
  FUNC_14(VAR_5->hwreset_dc);
 if (VAR_5->irq_res != ((void*)0))
  FUNC_6(VAR_4, VAR_2, 0, VAR_5->irq_res);
 if (VAR_5->mem_res != ((void*)0))
  FUNC_6(VAR_4, VAR_3, 0, VAR_5->mem_res);
 FUNC_0(VAR_5);

 return (VAR_0);
}
