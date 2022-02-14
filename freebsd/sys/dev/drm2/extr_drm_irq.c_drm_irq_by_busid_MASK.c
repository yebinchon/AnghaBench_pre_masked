
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_irq_busid {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_2__* driver; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {int (* irq_by_busid ) (struct drm_device*,struct drm_irq_busid*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*,struct drm_irq_busid*) ;

int FUNC_2(struct drm_device *VAR_2, void *VAR_3,
       struct drm_file *VAR_4)
{
 struct drm_irq_busid *VAR_5 = VAR_3;

 if (!VAR_2->driver->bus->irq_by_busid)
  return -VAR_1;

 if (!FUNC_0(VAR_2, VAR_0))
  return -VAR_1;

 return VAR_2->driver->bus->irq_by_busid(VAR_2, VAR_5);
}
