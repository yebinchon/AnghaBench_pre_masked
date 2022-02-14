
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int win ;
struct TYPE_2__ {int pixel_format; int height; int width; } ;
struct tegra_fb {TYPE_1__ drm_fb; } ;
struct dc_window {int src_x; int src_y; int dst_x; int dst_y; int dst_h; int dst_w; int src_h; int src_w; } ;
struct dc_softc {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct tegra_fb*,struct dc_window*) ;
 int FUNC_2 (struct dc_softc*,int ,struct dc_window*) ;
 int FUNC_3 (struct dc_window*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct dc_softc *VAR_0, int VAR_1, int VAR_2, struct tegra_fb *VAR_3)
{
 struct dc_window VAR_4;
 int VAR_5;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.src_x = VAR_1;
 VAR_4.src_y = VAR_2;
 VAR_4.src_w = VAR_3->drm_fb.width;
 VAR_4.src_h = VAR_3->drm_fb.height;
 VAR_4.dst_x = VAR_1;
 VAR_4.dst_y = VAR_2;
 VAR_4.dst_w = VAR_3->drm_fb.width;
 VAR_4.dst_h = VAR_3->drm_fb.height;

 VAR_5 = FUNC_1(VAR_3, &VAR_4);
 if (VAR_5 != 0) {
  FUNC_0("unsupported pixel format %d\n",
      VAR_3->drm_fb.pixel_format);
  return (VAR_5);
 }
 FUNC_2(VAR_0, 0, &VAR_4);

 return (0);
}
