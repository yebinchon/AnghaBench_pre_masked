
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct drm_device*,int *,int ) ;
 int FUNC_1 (struct drm_display_mode*,int ) ;
 struct drm_display_mode* FUNC_2 (int,int ,int) ;

struct drm_display_mode *FUNC_3(struct drm_device *VAR_4)
{
 struct drm_display_mode *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct drm_display_mode), VAR_0,
     VAR_2 | VAR_3);
 if (!VAR_5)
  return ((void*)0);

 if (FUNC_0(VAR_4, &VAR_5->base, VAR_1)) {
  FUNC_1(VAR_5, VAR_0);
  return ((void*)0);
 }

 return VAR_5;
}
