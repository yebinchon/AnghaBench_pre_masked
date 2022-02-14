
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tegra_drm {int drm_dev; } ;
struct TYPE_11__ {int possible_crtcs; } ;
struct TYPE_10__ {int dpms; } ;
struct TYPE_9__ {TYPE_4__ encoder; TYPE_3__ connector; int * setup_clock; } ;
struct hdmi_softc {TYPE_1__ output; int dev; struct tegra_drm* drm; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hdmi_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int *,TYPE_3__*,int *,int ) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (int *,TYPE_4__*,int *,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,struct tegra_drm*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_9, device_t VAR_10, struct tegra_drm *VAR_11)
{
 struct hdmi_softc *VAR_12;
 phandle_t VAR_13;
 int VAR_14;

 VAR_12 = FUNC_0(VAR_9);
 VAR_13 = FUNC_7(VAR_12->dev);
 VAR_12->drm = VAR_11;
 VAR_12->output.setup_clock = &VAR_8;

 VAR_14 = FUNC_8(&VAR_12->output, VAR_13);
 if (VAR_14 != 0) {
  FUNC_1(VAR_9, "Cannot attach output connector\n");
  return(VAR_3);
 }


 FUNC_3(&VAR_11->drm_dev, &VAR_12->output.connector,
    &VAR_4, VAR_0);

 FUNC_2(&VAR_12->output.connector,
     &VAR_5);

 VAR_12->output.connector.dpms = VAR_1;

 FUNC_5(&VAR_11->drm_dev, &VAR_12->output.encoder,
     &VAR_6, VAR_2);

 FUNC_4(&VAR_12->output.encoder, &VAR_7);

 FUNC_6(&VAR_12->output.connector,
   &VAR_12->output.encoder);

 VAR_14 = FUNC_9(&VAR_12->output, VAR_11);
 if (VAR_14 < 0) {
  FUNC_1(VAR_12->dev, "Unable to init HDMI output\n");
  return (VAR_14);
 }
 VAR_12->output.encoder.possible_crtcs = 0x3;
 return (0);
}
