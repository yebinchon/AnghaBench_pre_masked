
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimode {int r; int h; int w; } ;
struct edid {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
struct detailed_timing {int dummy; } ;


 struct drm_display_mode* FUNC_0 (struct drm_device*,int ,int ,int ,int,int ,int ) ;
 int FUNC_1 (struct drm_device*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct edid*) ;
 struct minimode* VAR_0 ;
 int FUNC_4 (struct drm_display_mode*) ;
 int FUNC_5 (struct drm_display_mode*,struct edid*,struct detailed_timing*) ;
 int VAR_1 ;
 int FUNC_6 (struct drm_connector*,struct drm_display_mode*) ;

__attribute__((used)) static int
FUNC_7(struct drm_connector *VAR_2, struct edid *VAR_3,
   struct detailed_timing *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct drm_display_mode *VAR_7;
 struct drm_device *VAR_8 = VAR_2->dev;
 bool VAR_9 = FUNC_3(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  const struct minimode *VAR_10 = &VAR_0[VAR_5];
  VAR_7 = FUNC_0(VAR_8, VAR_10->w, VAR_10->h, VAR_10->r, VAR_9, 0, 0);
  if (!VAR_7)
   return VAR_6;

  FUNC_4(VAR_7);
  if (!FUNC_5(VAR_7, VAR_3, VAR_4) ||
      !FUNC_6(VAR_2, VAR_7)) {
   FUNC_1(VAR_8, VAR_7);
   continue;
  }

  FUNC_2(VAR_2, VAR_7);
  VAR_6++;
 }

 return VAR_6;
}
