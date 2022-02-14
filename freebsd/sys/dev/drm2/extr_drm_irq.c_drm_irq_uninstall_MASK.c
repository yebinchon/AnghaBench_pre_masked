
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int irq_enabled; int num_crtcs; TYPE_2__* driver; int irqh; int irqr; int dev; int vbl_lock; int * last_vblank; scalar_t__* vblank_enabled; int * _vblank_count; } ;
struct TYPE_4__ {TYPE_1__* bus; int (* irq_uninstall ) (struct drm_device*) ;int (* get_vblank_counter ) (struct drm_device*,int) ;} ;
struct TYPE_3__ {int (* free_irq ) (struct drm_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct drm_device*,int) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;

int FUNC_12(struct drm_device *VAR_2)
{
 int VAR_3, VAR_4;

 if (!FUNC_5(VAR_2, VAR_0))
  return -VAR_1;

 FUNC_1(VAR_2);
 VAR_3 = VAR_2->irq_enabled;
 VAR_2->irq_enabled = 0;
 FUNC_2(VAR_2);




 if (VAR_2->num_crtcs) {
  FUNC_7(&VAR_2->vbl_lock);
  for (VAR_4 = 0; VAR_4 < VAR_2->num_crtcs; VAR_4++) {
   FUNC_3(&VAR_2->_vblank_count[VAR_4]);
   VAR_2->vblank_enabled[VAR_4] = 0;
   VAR_2->last_vblank[VAR_4] =
    VAR_2->driver->get_vblank_counter(VAR_2, VAR_4);
  }
  FUNC_8(&VAR_2->vbl_lock);
 }

 if (!VAR_3)
  return -VAR_1;

 FUNC_0("irq=%d\n", FUNC_6(VAR_2));

 if (VAR_2->driver->irq_uninstall)
  VAR_2->driver->irq_uninstall(VAR_2);

 FUNC_4(VAR_2->dev, VAR_2->irqr, VAR_2->irqh);
 VAR_2->driver->bus->free_irq(VAR_2);

 return 0;
}
