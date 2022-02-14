
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct edid {int features; } ;
struct drm_connector {int display_info; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_1 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_2 (struct drm_connector*,struct edid*,int) ;
 scalar_t__ FUNC_3 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_4 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_5 (struct drm_connector*,struct edid*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (struct edid*,int *) ;
 int FUNC_8 (struct edid*) ;
 int FUNC_9 (struct drm_connector*) ;
 int FUNC_10 (struct drm_connector*,int) ;
 int FUNC_11 (struct edid*) ;

int FUNC_12(struct drm_connector *VAR_3, struct edid *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6;

 if (VAR_4 == ((void*)0)) {
  return 0;
 }
 if (!FUNC_8(VAR_4)) {
  FUNC_6(VAR_3->dev->dev, "%s: EDID invalid.\n",
    FUNC_9(VAR_3));
  return 0;
 }

 VAR_6 = FUNC_11(VAR_4);
 VAR_5 += FUNC_2(VAR_3, VAR_4, VAR_6);
 VAR_5 += FUNC_1(VAR_3, VAR_4);
 VAR_5 += FUNC_5(VAR_3, VAR_4);
 VAR_5 += FUNC_3(VAR_3, VAR_4);
 if (VAR_4->features & VAR_0)
  VAR_5 += FUNC_4(VAR_3, VAR_4);
 VAR_5 += FUNC_0(VAR_3, VAR_4);

 if (VAR_6 & (VAR_1 | VAR_2))
  FUNC_10(VAR_3, VAR_6);

 FUNC_7(VAR_4, &VAR_3->display_info);

 return VAR_5;
}
