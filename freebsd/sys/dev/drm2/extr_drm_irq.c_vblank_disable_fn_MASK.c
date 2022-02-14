
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int num_crtcs; int vbl_lock; scalar_t__* vblank_enabled; int * vblank_refcount; int vblank_disable_allowed; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_device*,int) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct drm_device *VAR_1 = (struct drm_device *)VAR_0;
 int VAR_2;

 if (!VAR_1->vblank_disable_allowed)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_crtcs; VAR_2++) {
  FUNC_2(&VAR_1->vbl_lock);
  if (FUNC_1(&VAR_1->vblank_refcount[VAR_2]) == 0 &&
      VAR_1->vblank_enabled[VAR_2]) {
   FUNC_0("disabling vblank on crtc %d\n", VAR_2);
   FUNC_4(VAR_1, VAR_2);
  }
  FUNC_3(&VAR_1->vbl_lock);
 }
}
