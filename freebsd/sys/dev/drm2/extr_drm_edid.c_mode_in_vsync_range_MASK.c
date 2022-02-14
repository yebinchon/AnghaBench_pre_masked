
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct edid {int revision; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (struct drm_display_mode const*) ;

__attribute__((used)) static bool
FUNC_1(const struct drm_display_mode *VAR_0,
      struct edid *VAR_1, u8 *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = VAR_2[5];
 if (VAR_1->revision >= 4)
     VAR_4 += ((VAR_2[4] & 0x01) ? 255 : 0);
 VAR_5 = VAR_2[6];
 if (VAR_1->revision >= 4)
     VAR_5 += ((VAR_2[4] & 0x02) ? 255 : 0);
 VAR_3 = FUNC_0(VAR_0);

 return (VAR_3 <= VAR_5 && VAR_3 >= VAR_4);
}
