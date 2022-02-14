
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_info {int vsync_active; int hsync_active; int pixelclk_active; int panel_pxl_clk; int panel_vsw; int panel_vbp; int panel_vfp; int panel_hsw; int panel_hbp; int panel_hfp; int panel_height; int panel_width; } ;
typedef scalar_t__ phandle_t ;
typedef int native ;
typedef int device_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,scalar_t__*,int) ;
 int FUNC_2 (int ,scalar_t__,char*,int *) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, phandle_t VAR_1, struct panel_info *VAR_2)
{
 int VAR_3;
 phandle_t VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_4(VAR_1, "display-timings");
 if (VAR_4 == 0) {
  FUNC_3(VAR_0, "no \"display-timings\" node\n");
  return (-1);
 }

 if (FUNC_1(VAR_4, "native-mode", &VAR_6,
     sizeof(VAR_6)) == -1) {
  FUNC_3(VAR_0, "no \"native-mode\" reference in \"timings\" node\n");
  return (-1);
 }

 VAR_5 = FUNC_0(VAR_6);

 VAR_3 = 0;
 if ((VAR_3 = FUNC_2(VAR_0, VAR_5,
     "hactive", &VAR_2->panel_width)))
  goto out;

 if ((VAR_3 = FUNC_2(VAR_0, VAR_5,
     "vactive", &VAR_2->panel_height)))
  goto out;

 if ((VAR_3 = FUNC_2(VAR_0, VAR_5,
     "hfront-porch", &VAR_2->panel_hfp)))
  goto out;

 if ((VAR_3 = FUNC_2(VAR_0, VAR_5,
     "hback-porch", &VAR_2->panel_hbp)))
  goto out;

 if ((VAR_3 = FUNC_2(VAR_0, VAR_5,
     "hsync-len", &VAR_2->panel_hsw)))
  goto out;

 if ((VAR_3 = FUNC_2(VAR_0, VAR_5,
     "vfront-porch", &VAR_2->panel_vfp)))
  goto out;

 if ((VAR_3 = FUNC_2(VAR_0, VAR_5,
     "vback-porch", &VAR_2->panel_vbp)))
  goto out;

 if ((VAR_3 = FUNC_2(VAR_0, VAR_5,
     "vsync-len", &VAR_2->panel_vsw)))
  goto out;

 if ((VAR_3 = FUNC_2(VAR_0, VAR_5,
     "clock-frequency", &VAR_2->panel_pxl_clk)))
  goto out;

 if ((VAR_3 = FUNC_2(VAR_0, VAR_5,
     "pixelclk-active", &VAR_2->pixelclk_active)))
  goto out;

 if ((VAR_3 = FUNC_2(VAR_0, VAR_5,
     "hsync-active", &VAR_2->hsync_active)))
  goto out;

 if ((VAR_3 = FUNC_2(VAR_0, VAR_5,
     "vsync-active", &VAR_2->vsync_active)))
  goto out;

out:
 return (VAR_3);
}
