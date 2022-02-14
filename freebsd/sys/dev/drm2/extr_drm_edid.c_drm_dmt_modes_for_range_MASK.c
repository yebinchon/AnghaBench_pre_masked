
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
struct detailed_timing {int dummy; } ;


 int * VAR_0 ;
 struct drm_display_mode* FUNC_0 (struct drm_device*,int *) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,struct edid*,struct detailed_timing*) ;
 scalar_t__ FUNC_3 (struct drm_connector*,int *) ;

__attribute__((used)) static int
FUNC_4(struct drm_connector *VAR_2, struct edid *VAR_3,
   struct detailed_timing *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct drm_display_mode *VAR_7;
 struct drm_device *VAR_8 = VAR_2->dev;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (FUNC_2(VAR_0 + VAR_5, VAR_3, VAR_4) &&
      FUNC_3(VAR_2, VAR_0 + VAR_5)) {
   VAR_7 = FUNC_0(VAR_8, &VAR_0[VAR_5]);
   if (VAR_7) {
    FUNC_1(VAR_2, VAR_7);
    VAR_6++;
   }
  }
 }

 return VAR_6;
}
