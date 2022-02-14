
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timeval {int dummy; } ;
struct drm_device {int num_crtcs; scalar_t__ vblank_disable_allowed; int * vblank_refcount; int * _vblank_count; TYPE_1__* driver; void* _vblank_time; void* vblank_inmodeset; void* last_vblank_wait; void* last_vblank; void* vblank_enabled; int vblank_time_lock; int vbl_lock; int vblank_disable_callout; } ;
typedef int atomic_t ;
struct TYPE_2__ {scalar_t__ get_vblank_timestamp; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct drm_device*) ;
 void* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *,char*,int *,int ) ;

int FUNC_6(struct drm_device *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9 = -VAR_2;

 FUNC_2(&VAR_6->vblank_disable_callout, 1);
 FUNC_5(&VAR_6->vbl_lock, "drmvbl", ((void*)0), VAR_3);
 FUNC_5(&VAR_6->vblank_time_lock, "drmvtl", ((void*)0), VAR_3);

 VAR_6->num_crtcs = VAR_7;

 VAR_6->_vblank_count = FUNC_4(sizeof(atomic_t) * VAR_7,
     VAR_0, VAR_4);
 if (!VAR_6->_vblank_count)
  goto err;

 VAR_6->vblank_refcount = FUNC_4(sizeof(atomic_t) * VAR_7,
     VAR_0, VAR_4);
 if (!VAR_6->vblank_refcount)
  goto err;

 VAR_6->vblank_enabled = FUNC_4(VAR_7 * sizeof(int),
     VAR_0, VAR_4 | VAR_5);
 if (!VAR_6->vblank_enabled)
  goto err;

 VAR_6->last_vblank = FUNC_4(VAR_7 * sizeof(u32),
     VAR_0, VAR_4 | VAR_5);
 if (!VAR_6->last_vblank)
  goto err;

 VAR_6->last_vblank_wait = FUNC_4(VAR_7 * sizeof(u32),
     VAR_0, VAR_4 | VAR_5);
 if (!VAR_6->last_vblank_wait)
  goto err;

 VAR_6->vblank_inmodeset = FUNC_4(VAR_7 * sizeof(int),
     VAR_0, VAR_4 | VAR_5);
 if (!VAR_6->vblank_inmodeset)
  goto err;

 VAR_6->_vblank_time = FUNC_4(VAR_7 * VAR_1 *
     sizeof(struct timeval), VAR_0, VAR_4 | VAR_5);
 if (!VAR_6->_vblank_time)
  goto err;

 FUNC_0("Supports vblank timestamp caching Rev 1 (10.10.2010).\n");


 if (VAR_6->driver->get_vblank_timestamp)
  FUNC_0("Driver supports precise vblank timestamp query.\n");
 else
  FUNC_0("No driver support for vblank timestamp query.\n");


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_1(&VAR_6->_vblank_count[VAR_8], 0);
  FUNC_1(&VAR_6->vblank_refcount[VAR_8], 0);
 }

 VAR_6->vblank_disable_allowed = 0;
 return 0;

err:
 FUNC_3(VAR_6);
 return VAR_9;
}
