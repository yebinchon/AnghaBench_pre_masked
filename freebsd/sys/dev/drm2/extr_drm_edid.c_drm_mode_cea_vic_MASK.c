
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct drm_display_mode {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_display_mode const*,int *) ;
 size_t VAR_0 ;
 int * VAR_1 ;

uint8_t FUNC_1(const struct drm_display_mode *VAR_2)
{
 uint8_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_0(VAR_2, &VAR_1[VAR_3]))
   return VAR_3 + 1;

 return 0;
}
