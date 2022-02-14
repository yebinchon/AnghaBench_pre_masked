
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct drm_display_mode {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_display_mode*,struct drm_display_mode const*) ;
 size_t VAR_0 ;
 int * VAR_1 ;

u8 FUNC_1(struct drm_display_mode *VAR_2)
{
 const struct drm_display_mode *VAR_3;
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = (const struct drm_display_mode *)&VAR_1[VAR_4];

  if (FUNC_0(VAR_2, VAR_3))
   return VAR_4 + 1;
 }
 return 0;
}
