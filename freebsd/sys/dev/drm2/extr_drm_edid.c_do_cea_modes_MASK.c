
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 struct drm_display_mode* FUNC_0 (struct drm_device*,int *) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_2 (struct drm_connector *VAR_2, u8 *VAR_3, u8 VAR_4)
{
 struct drm_device *VAR_5 = VAR_2->dev;
 u8 * VAR_6, VAR_7;
 int VAR_8 = 0;

 for (VAR_6 = VAR_3; VAR_6 < VAR_3 + VAR_4; VAR_6++) {
  VAR_7 = (*VAR_6 & 127) - 1;
  if (VAR_7 < VAR_0) {
   struct drm_display_mode *VAR_9;
   VAR_9 = FUNC_0(VAR_5,
           &VAR_1[VAR_7]);
   if (VAR_9) {
    FUNC_1(VAR_2, VAR_9);
    VAR_8++;
   }
  }
 }

 return VAR_8;
}
