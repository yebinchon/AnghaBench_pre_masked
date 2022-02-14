
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct edid {int revision; } ;
struct drm_display_mode {scalar_t__ clock; int hdisplay; } ;
struct detailed_timing {int dummy; } ;


 int FUNC_0 (struct edid*) ;
 int FUNC_1 (struct drm_display_mode const*,struct edid*,int*) ;
 int FUNC_2 (struct drm_display_mode const*,struct edid*,int*) ;
 scalar_t__ FUNC_3 (struct drm_display_mode const*) ;
 scalar_t__ FUNC_4 (struct edid*,int*) ;

__attribute__((used)) static bool
FUNC_5(const struct drm_display_mode *VAR_0, struct edid *VAR_1,
       struct detailed_timing *VAR_2)
{
 u32 VAR_3;
 u8 *VAR_4 = (u8 *)VAR_2;

 if (!FUNC_1(VAR_0, VAR_1, VAR_4))
  return 0;

 if (!FUNC_2(VAR_0, VAR_1, VAR_4))
  return 0;

 if ((VAR_3 = FUNC_4(VAR_1, VAR_4)))
  if (VAR_0->clock > VAR_3)
   return 0;


 if (VAR_1->revision >= 4 && VAR_4[10] == 0x04)
  if (VAR_4[13] && VAR_0->hdisplay > 8 * (VAR_4[13] + (256 * (VAR_4[12]&0x3))))
   return 0;

 if (FUNC_3(VAR_0) && !FUNC_0(VAR_1))
  return 0;

 return 1;
}
