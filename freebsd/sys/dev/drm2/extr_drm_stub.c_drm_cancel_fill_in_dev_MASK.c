
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_driver {int driver_features; } ;
struct drm_device {int pcir_lock; int ctxlist_mutex; int dev_struct_lock; int event_lock; int count_lock; int irq_lock; int map_hash; TYPE_2__* agp; struct drm_driver* driver; } ;
struct TYPE_3__ {int ai_aperture_size; int ai_aperture_base; } ;
struct TYPE_4__ {scalar_t__ agp_mtrr; TYPE_1__ agp_info; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int ,int ,int ) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct drm_device *VAR_3)
{
 struct drm_driver *VAR_4;

 VAR_4 = VAR_3->driver;

 FUNC_7(VAR_3);
 if (VAR_4->driver_features & VAR_0)
  FUNC_4(VAR_3);
 FUNC_3(VAR_3);

 if (FUNC_2(VAR_3) && FUNC_1(VAR_3) &&
     VAR_3->agp && VAR_3->agp->agp_mtrr >= 0) {
  int VAR_5;
  VAR_5 = FUNC_6(VAR_3->agp->agp_mtrr,
      VAR_3->agp->agp_info.ai_aperture_base,
      VAR_3->agp->agp_info.ai_aperture_size,
      VAR_2);
  FUNC_0("mtrr_del=%d\n", VAR_5);
 }
 FUNC_8(VAR_3->agp, VAR_1);
 VAR_3->agp = ((void*)0);

 FUNC_5(&VAR_3->map_hash);

 FUNC_9(&VAR_3->irq_lock);
 FUNC_9(&VAR_3->count_lock);
 FUNC_9(&VAR_3->event_lock);
 FUNC_10(&VAR_3->dev_struct_lock);
 FUNC_9(&VAR_3->ctxlist_mutex);
 FUNC_9(&VAR_3->pcir_lock);
}
