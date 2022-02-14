
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_drm {scalar_t__ pitch_align; int drm_dev; } ;
struct TYPE_2__ {int cursor_vbase; int cursor_pbase; int drm_crtc; } ;
struct dc_softc {scalar_t__ pitch_align; TYPE_1__ tegra_crtc; int irq_ih; int irq_res; } ;
typedef int device_t ;


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
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct dc_softc*,int ,int) ;
 int FUNC_1 (int ,int ,int,int *,int ,struct dc_softc*,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct dc_softc*,struct tegra_drm*) ;
 int VAR_18 ;
 struct dc_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int,int,int ,unsigned long,int ,int ,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_19, device_t VAR_20, struct tegra_drm *VAR_21)
{
 struct dc_softc *VAR_22;
 int VAR_23;

 VAR_22 = FUNC_3(VAR_19);

 if (VAR_21->pitch_align < VAR_22->pitch_align)
  VAR_21->pitch_align = VAR_22->pitch_align;

 FUNC_6(&VAR_21->drm_dev, &VAR_22->tegra_crtc.drm_crtc, &VAR_16);
 FUNC_7(&VAR_22->tegra_crtc.drm_crtc, 256);
 FUNC_5(&VAR_22->tegra_crtc.drm_crtc, &VAR_17);

 VAR_23 = FUNC_2(VAR_22, VAR_21);
 if (VAR_23!= 0){
  FUNC_4(VAR_19, "Cannot init planes\n");
  return (VAR_23);
 }

 FUNC_0(VAR_22, VAR_3,
     VAR_11 | VAR_13 | VAR_15 |
     VAR_10 | VAR_12 | VAR_14);

 FUNC_0(VAR_22, VAR_2,
     VAR_11 | VAR_13 | VAR_15 |
     VAR_10 | VAR_12 | VAR_14);

 FUNC_0(VAR_22, VAR_0, 0);
 FUNC_0(VAR_22, VAR_1, 0);

 VAR_23 = FUNC_1(VAR_19, VAR_22->irq_res, VAR_5 | VAR_4,
     ((void*)0), VAR_18, VAR_22, &VAR_22->irq_ih);
 if (VAR_23 != 0) {
  FUNC_4(VAR_19, "Cannot register interrupt handler\n");
  return (VAR_23);
 }


 VAR_22->tegra_crtc.cursor_vbase = FUNC_8(256 * 256 * 4,
     VAR_6 | VAR_7, 0, -1UL, VAR_8, 0,
     VAR_9);
 VAR_22->tegra_crtc.cursor_pbase = FUNC_9(VAR_22->tegra_crtc.cursor_vbase);
 return (0);
}
