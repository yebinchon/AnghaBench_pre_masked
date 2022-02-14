
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pixel_format; } ;
struct tegra_fb {int nplanes; struct tegra_bo** planes; TYPE_1__ drm_fb; } ;
struct tegra_bo {int dummy; } ;


 int FUNC_0 (int ) ;

struct tegra_bo *
FUNC_1(struct tegra_fb *VAR_0, int VAR_1)
{

 if (VAR_1 >= FUNC_0(VAR_0->drm_fb.pixel_format))
  return (((void*)0));
 if (VAR_1 >= VAR_0->nplanes)
  return (((void*)0));
 return (VAR_0->planes[VAR_1]);
}
