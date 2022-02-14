
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {scalar_t__ num_crtcs; int vblank_time_lock; int vbl_lock; int _vblank_time; int vblank_inmodeset; int last_vblank_wait; int last_vblank; int vblank_enabled; int vblank_refcount; int _vblank_count; int vblank_disable_callout; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*) ;

void FUNC_4(struct drm_device *VAR_1)
{

 if (VAR_1->num_crtcs == 0)
  return;

 FUNC_0(&VAR_1->vblank_disable_callout);

 FUNC_3(VAR_1);

 FUNC_1(VAR_1->_vblank_count, VAR_0);
 FUNC_1(VAR_1->vblank_refcount, VAR_0);
 FUNC_1(VAR_1->vblank_enabled, VAR_0);
 FUNC_1(VAR_1->last_vblank, VAR_0);
 FUNC_1(VAR_1->last_vblank_wait, VAR_0);
 FUNC_1(VAR_1->vblank_inmodeset, VAR_0);
 FUNC_1(VAR_1->_vblank_time, VAR_0);

 FUNC_2(&VAR_1->vbl_lock);
 FUNC_2(&VAR_1->vblank_time_lock);

 VAR_1->num_crtcs = 0;
}
