
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int vrefresh; unsigned int htotal; int vtotal; int clock; int flags; int vscan; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(const struct drm_display_mode *VAR_2)
{
 int VAR_3 = 0;
 unsigned int VAR_4;

 if (VAR_2->vrefresh > 0)
  VAR_3 = VAR_2->vrefresh;
 else if (VAR_2->htotal > 0 && VAR_2->vtotal > 0) {
  int VAR_5;
  VAR_5 = VAR_2->vtotal;

  VAR_4 = (VAR_2->clock * 1000);
  VAR_4 /= VAR_2->htotal;
  VAR_3 = (VAR_4 + VAR_5 / 2) / VAR_5;

  if (VAR_2->flags & VAR_1)
   VAR_3 *= 2;
  if (VAR_2->flags & VAR_0)
   VAR_3 /= 2;
  if (VAR_2->vscan > 1)
   VAR_3 /= VAR_2->vscan;
 }
 return VAR_3;
}
