
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* device_is_agp ) (struct drm_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*) ;

int
FUNC_2(struct drm_device *VAR_2)
{
 if (VAR_2->driver->device_is_agp != ((void*)0)) {
  int VAR_3;




  VAR_3 = (*VAR_2->driver->device_is_agp)(VAR_2);
  if (VAR_3 != VAR_0)
   return VAR_3;
 }

 return (FUNC_0(VAR_2, VAR_1));
}
