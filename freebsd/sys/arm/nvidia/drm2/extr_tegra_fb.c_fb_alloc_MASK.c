
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_fb {int nplanes; struct tegra_bo** planes; int drm_fb; } ;
struct tegra_bo {int dummy; } ;
struct drm_mode_fb_cmd2 {int dummy; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct drm_device*,int *,int *) ;
 int FUNC_2 (int *,struct drm_mode_fb_cmd2*) ;
 int VAR_3 ;
 int FUNC_3 (struct tegra_bo**,int ) ;
 void* FUNC_4 (int,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct drm_device *VAR_4, struct drm_mode_fb_cmd2 *VAR_5,
    struct tegra_bo **VAR_6, int VAR_7, struct tegra_fb **VAR_8)
{
 struct tegra_fb *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_0, VAR_1 | VAR_2);
 VAR_9->planes = FUNC_4(VAR_7 * sizeof(*VAR_9->planes), VAR_0,
     VAR_1 | VAR_2);
 VAR_9->nplanes = VAR_7;

 FUNC_2(&VAR_9->drm_fb, VAR_5);
 for (VAR_10 = 0; VAR_10 < VAR_9->nplanes; VAR_10++)
  VAR_9->planes[VAR_10] = VAR_6[VAR_10];
 VAR_11 = FUNC_1(VAR_4, &VAR_9->drm_fb, &VAR_3);
 if (VAR_11 < 0) {
  FUNC_0(VAR_4->dev,
      "Cannot initialize frame buffer %d\n", VAR_11);
  FUNC_3(VAR_9->planes, VAR_0);
  return (VAR_11);
 }
 *VAR_8 = VAR_9;
 return (0);
}
